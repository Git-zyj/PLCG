/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max(222, 143));
        var_10 = ((23 ? var_5 : ((min(46, 171)))));
    }
    var_11 = (((3799 ? 7904 : 160)));
    var_12 = (min((max((((var_4 ? var_2 : var_1))), (84 / -5822079859586722224))), var_6));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (((-624392840 ? -59 : 31)));
        var_14 = ((1 ? (((var_2 + var_2) ? (((-380423854229185543 ? var_9 : var_6))) : (max(-848609476233564301, 1099511627775)))) : (((28542 ? 7904 : var_4)))));
        arr_7 [i_1] [i_1] = var_6;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = (min(var_15, (((142 ? ((1099511627775 ? 16746147015596914241 : ((max(var_7, var_7))))) : (((((85 ? 16 : 1))) ? var_6 : ((var_4 ? var_1 : -45)))))))));
        arr_10 [i_2] [i_2] = 1;
    }
    #pragma endscop
}
