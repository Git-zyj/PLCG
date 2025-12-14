/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 *= ((((var_5 ? (arr_7 [i_3] [i_3] [i_3 - 1] [i_2]) : (arr_2 [i_3 + 1]))) <= (arr_3 [i_2])));
                            var_16 -= (((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_3 + 1]) && var_6))) > (((min((arr_8 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1]), (arr_8 [i_3 + 1] [i_3 - 1] [4] [i_3] [4] [i_3]))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (min((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [8]), 27400));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_17 *= ((!(arr_11 [i_0] [9] [i_0] [i_0])));
                                var_18 -= (max((max((min(var_3, var_11)), -var_5)), (114 + 18)));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (arr_3 [i_3]);
                            }
                        }
                    }
                }
                arr_14 [8] = var_0;
                arr_15 [i_0] [i_1] = (((((((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : (arr_2 [i_1]))) != var_0)) ? 9223372036854775790 : (((arr_6 [i_0] [i_1]) ? (arr_0 [i_1]) : -9223372036854775800))));
                arr_16 [i_0] [i_1] = (min((min((var_13 + -518), (30 / 644798441))), (((var_4 + (arr_4 [i_0] [i_1]))))));
                var_19 = (arr_9 [i_1]);
            }
        }
    }
    var_20 += (var_12 <= var_12);
    var_21 -= var_9;
    #pragma endscop
}
