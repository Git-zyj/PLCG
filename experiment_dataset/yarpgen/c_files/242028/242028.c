/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (~var_13);
        var_14 = var_0;
        arr_3 [i_0] = ((var_5 ? (((((var_1 ? var_4 : var_4))) ? (var_1 / -4468193572821212576) : (arr_0 [i_0] [i_0]))) : (max((((~(arr_1 [i_0])))), (max(var_5, 4468193572821212580))))));
        arr_4 [i_0] [i_0] = (((((!var_10) * var_1))) && (((max(7322029805050520609, 4468193572821212574)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_1] = -4468193572821212583;
                var_15 = (((min(var_7, (~77))) >> (14722272220499515917 - 14722272220499515867)));
                var_16 = max((max((max((arr_5 [i_2]), 130023424)), (arr_1 [i_2]))), var_0);
            }
        }
    }
    #pragma endscop
}
