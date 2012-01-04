#ifndef LOOTITEMEDITOR_H
#define LOOTITEMEDITOR_H

#include <QDialog>
#include "lootitemtemplate.h"

namespace Ui {
    class LootItemEditor;
}

class LootItemEditor : public QDialog
{
    Q_OBJECT

public:
    explicit LootItemEditor(QExplicitlySharedDataPointer<LootItemTemplate> item, QWidget *parent = 0);
    ~LootItemEditor();

public slots:
    void acceptedDialog();
    void validateMinLevel(int);
    void validateMaxLevel(int);

signals:
    void broadcastItemModified(QExplicitlySharedDataPointer<LootItemTemplate>);

private:
    Ui::LootItemEditor *ui;
    QExplicitlySharedDataPointer<LootItemTemplate> currentItem;
};

#endif // LOOTITEMEDITOR_H
