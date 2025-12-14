/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((((var_1 || 0) ? var_7 : 18446744073709551615))) ? ((max(16, 40))) : (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                var_19 = (max((max(40, (arr_2 [i_0 - 1] [i_0] [i_0]))), -40));
                var_20 = (+(max((arr_0 [i_0 - 1] [i_0 - 1]), 40)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [8] &= var_4;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (min(var_21, -16));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_0 - 1] [i_4] [i_2] [i_4] [i_1] [i_2 + 3] = (arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_2 + 4]);
                            arr_14 [i_1] = var_8;
                            arr_15 [i_0] [i_1] [i_1] [i_3] = (~-var_13);
                            arr_16 [i_1] [i_1] = -40;
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_22 = (max(var_22, var_4));
                            var_23 = arr_8 [0] [i_1];
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_1] [i_6] [i_6 + 1] [i_2 + 4] = (((-127 - 1) ? -var_14 : var_12));
                            var_24 = (((arr_12 [i_0] [i_0 - 1]) ? (arr_20 [i_0]) : 23835));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_25 = (min(var_25, 1));
                            arr_26 [i_1] = -1;
                            var_26 = ((56163 ? var_15 : (arr_1 [i_0 - 1] [i_0 - 1])));
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_27 = (((((max((arr_10 [i_8] [i_0] [2] [i_0] [i_0 + 1]), (arr_2 [i_0 - 1] [i_1] [i_8]))))) ? -52 : (-21741 && 111)));
                    var_28 = (max(((max(111, (arr_19 [i_0 + 1] [4] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((arr_3 [i_0 + 1]) | var_11))));
                    arr_29 [3] [i_1] [i_0 + 1] = (((arr_0 [i_1] [i_8]) >> (((((arr_22 [i_0] [i_1] [i_1] [i_8] [i_8]) & (36 - var_15))) - 263))));
                    var_29 *= (min(44014, 1));
                }
            }
        }
    }
    var_30 = (var_11 < var_0);
    #pragma endscop
}
