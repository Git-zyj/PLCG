/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = 3867743050;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = -5227;
        var_14 = (1 | 1);
    }
    var_15 = ((((((21 ? 60495 : var_7))) && var_4)) ? ((-var_7 ? 0 : ((0 ? var_6 : var_10)))) : ((var_1 ? (min(1, var_9)) : 0)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {
                var_16 = (((((var_8 ? ((432802712 ? 0 : (arr_3 [13] [1]))) : 1))) ? (!-1) : ((1 ? 1 : 1))));
                arr_8 [i_1] [i_2] = var_1;
            }
        }
    }
    #pragma endscop
}
