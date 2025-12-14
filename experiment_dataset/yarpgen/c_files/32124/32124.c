/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((21649 ? -6547073325773304741 : (arr_0 [i_0])));
        var_16 = ((4037010884 ? (arr_0 [i_0]) : -2414357047009329903));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (!-2414357047009329882);
        arr_7 [i_1] = ((7370490708724778207 >= ((max((arr_2 [i_1 + 1]), (arr_0 [i_1 - 1]))))));
        arr_8 [i_1] [i_1 + 1] = (((arr_5 [i_1 + 1] [i_1]) ? (((((max(var_6, var_3))) ? ((-2414357047009329903 ? (arr_4 [i_1] [i_1]) : var_13)) : 28790))) : (((arr_2 [i_1 - 1]) ? (arr_0 [i_1]) : (var_5 << 0)))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_17 = (min(var_17, (~-3462)));

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                arr_17 [i_2] [i_3] [i_2] [1] = 9223372036854775807;
                arr_18 [i_2] [i_2] [i_4] = max((((((var_6 ? var_9 : 37))) ? (arr_16 [i_2] [i_2 - 2] [3] [i_4 + 2]) : (((-2147483647 - 1) ? (arr_15 [i_2 - 2] [i_3 + 1] [10] [i_2]) : 20908)))), (((((arr_1 [i_2] [i_2]) ? 0 : 2414357047009329887)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_24 [i_2 + 4] [i_2 + 4] [i_2] [i_2] [2] [i_2] [i_2] = 2414357047009329902;
                            arr_25 [i_2] [i_2] [i_4] [i_5] [i_6] = arr_19 [i_2 + 3] [i_3 - 1] [i_4] [i_5];
                            arr_26 [i_2] [i_2] [i_4] = var_5;
                        }
                    }
                }
            }
        }
        var_18 = ((1 ? (((min((arr_9 [i_2]), (arr_9 [i_2]))) | (arr_23 [i_2 - 2] [i_2] [i_2] [1] [i_2 - 2]))) : (arr_12 [i_2 + 2] [i_2 + 4])));
        arr_27 [i_2] = ((28790 - (~2414357047009329900)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_32 [i_7] = (arr_29 [i_7] [i_7]);
        arr_33 [i_7] = (((6705 ? (arr_20 [i_7]) : var_12)));
        var_19 += (min(((min((min(34327, (arr_3 [i_7]))), (4217270475 || -28790)))), (((arr_30 [i_7]) ? (arr_13 [i_7] [i_7] [i_7] [1]) : 44628))));
    }
    var_20 = var_3;
    #pragma endscop
}
