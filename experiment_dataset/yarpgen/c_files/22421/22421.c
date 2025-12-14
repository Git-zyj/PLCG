/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((~(((~var_0) << (var_4 - 3368751070586229941)))));
                                var_17 = (max(var_17, (((!(arr_4 [i_1 - 3] [i_1 - 3] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_11));
                                arr_20 [i_0] [i_0] [i_2] = (((arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) <= 65530));
                                var_19 = ((((((max((arr_15 [i_0 - 1]), 32767))) / (arr_5 [i_0 - 1] [i_1] [i_1 + 3]))) - (((!(-32767 - 1))))));
                                var_20 = (arr_4 [i_0] [i_5] [i_6]);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1 - 3] [8] [i_1] = ((var_9 ? ((var_4 << (((arr_3 [i_0 - 1] [i_0 - 1]) - 60)))) : (arr_3 [i_0 - 1] [i_0 - 1])));
                        var_21 |= (max((arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1]), 32739));
                        var_22 *= 32750;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_23 = ((arr_5 [i_0] [i_8] [i_1 + 1]) < ((((arr_11 [i_0 - 1] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) == (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1 - 2])))));
                        var_24 = (((arr_4 [i_0] [10] [i_8]) >> (arr_2 [i_0 - 1])));
                    }

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_25 = (max(var_25, ((((var_6 << (((((arr_30 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0]) ? var_4 : var_6)) - 3368751070586229919))))))));
                        var_26 = ((!((((arr_22 [i_1] [i_1 + 3] [i_1 - 3] [i_1 + 1]) % (arr_22 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3]))))));
                        var_27 = (max(var_27, (((~((-32751 ? (arr_5 [i_0] [i_1] [i_2]) : (((arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9]) & var_12)))))))));
                        var_28 = (((((0 + var_14) ? ((((arr_17 [i_0] [i_1 + 3] [i_2] [i_9] [i_9]) ? 131071 : (arr_5 [i_0] [i_0] [i_0])))) : (((arr_4 [5] [i_1] [5]) ? var_16 : (arr_30 [i_0] [i_9] [i_0] [i_9] [i_1] [i_9]))))) + (((var_11 ? ((var_3 ? var_3 : 1494467110)) : var_8)))));
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, var_15));
    var_30 = (min(var_30, (!-var_2)));

    /* vectorizable */
    for (int i_10 = 3; i_10 < 20;i_10 += 1)
    {
        var_31 = (((arr_32 [i_10 - 1]) || 826665426));
        arr_35 [i_10] [i_10] = 3167099036;
        arr_36 [i_10] = ((var_1 ? (arr_33 [i_10]) : (arr_33 [i_10])));
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_32 = ((-(arr_37 [i_11] [i_11])));
        arr_41 [i_11] = 9223372036854775807;
    }
    #pragma endscop
}
