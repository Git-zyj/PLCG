/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_9 ? ((var_6 ? var_7 : var_11)) : (!var_3))) != (-54 && var_6)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = var_10;
                var_17 = (max(var_17, var_11));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = (arr_4 [i_2] [i_2]);
        arr_7 [i_2] = (((arr_5 [i_2]) | 536870911));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = ((((((arr_5 [i_3]) << (var_11 - 76)))) ? (((((arr_10 [i_3]) ? 1023 : (arr_1 [i_3]))) - (((((arr_1 [i_3]) + 2147483647)) << (((-22333 + 22348) - 15)))))) : (max((arr_2 [i_3] [8] [7]), (~var_8)))));
        var_19 = (((((((arr_4 [2] [10]) ? var_1 : var_2)))) || var_4));
        var_20 = (max(var_20, var_8));
        arr_12 [i_3] [i_3] = ((var_14 ? var_6 : ((((var_10 || var_13) || (((15 ? var_7 : var_2))))))));
        arr_13 [i_3] = 13;
    }
    var_21 = var_10;
    var_22 = (max(var_22, var_13));
    #pragma endscop
}
