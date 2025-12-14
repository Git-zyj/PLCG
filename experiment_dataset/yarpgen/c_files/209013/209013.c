/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(14, (min(1, (min(1, 1712331155))))));
                var_22 = (((((15879237963460969450 ? (((var_7 ? -25021 : 1471444397))) : 1365230883))) | (min(((((arr_3 [i_1] [12] [i_1]) ? 21 : (arr_1 [i_0])))), var_11))));
                var_23 += (min((arr_3 [i_0] [i_0] [i_0]), (min((((arr_4 [i_0] [11] [11]) - (arr_2 [i_0 - 1]))), ((var_8 ? var_17 : (arr_2 [i_1])))))));
            }
        }
    }
    var_24 += (min((max(16777215, var_3)), -var_4));
    var_25 = (min(var_1, var_5));
    var_26 = ((((1 ? var_9 : var_2))));
    #pragma endscop
}
