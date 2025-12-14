/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_17 = ((var_9 / (arr_0 [i_0] [i_0 + 1])));
        var_18 &= (var_15 != (arr_1 [6]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [10] = (((arr_3 [i_0 + 1]) >= var_10));
                                var_19 = var_10;
                            }
                        }
                    }
                    var_20 = (arr_1 [i_2]);
                    arr_13 [i_0] [i_0] [i_2] = (arr_6 [2] [i_1] [3]);
                    var_21 = (((arr_3 [i_0]) ? ((var_12 * (arr_4 [i_0] [i_0] [1]))) : var_13));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_18 [i_0] = (((arr_6 [i_0 - 2] [i_0] [i_0]) ? var_8 : var_10));
                        var_22 |= (var_6 % (arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]));
                        var_23 = arr_16 [i_1] [i_2] [i_5];
                        arr_19 [1] [i_1] [i_2] [1] = (var_13 | var_8);
                        var_24 = (arr_11 [1] [i_0 - 2] [4] [i_5] [i_5]);
                    }
                }
            }
        }
        arr_20 [i_0 - 1] = ((arr_6 [i_0 + 1] [i_0 + 1] [i_0]) * var_7);
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_24 [i_6] [9] = (arr_22 [i_6 - 1] [i_6 - 1]);
        var_25 = ((var_2 < (var_14 / var_3)));
        arr_25 [i_6] [i_6] = (((((arr_23 [i_6] [i_6]) >> (var_10 + 86))) << (var_14 - 29198)));
    }
    var_26 = ((var_2 ? var_0 : var_3));
    #pragma endscop
}
