/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_10 = ((min(66, (arr_10 [i_1]))));
                                var_11 = ((-(min((((-(arr_3 [i_0] [i_2] [i_0])))), ((var_2 + (arr_7 [i_0] [i_1 - 2] [i_4])))))));
                                arr_15 [i_4] [i_1] [i_2] [i_2] [i_4] |= (~12458485289888296848);
                                var_12 = ((((((min(-112, 216))) | (arr_1 [i_1 + 1] [i_0]))) >= 2));
                                var_13 -= -var_8;
                            }
                        }
                    }
                }
                var_14 = var_9;

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_15 = var_3;
                    var_16 = (min(var_16, ((((((arr_13 [i_5] [i_5 + 2] [i_1] [i_1] [i_1] [i_0] [i_0 - 1]) - (arr_13 [i_5 + 1] [19] [i_1 + 1] [i_0 - 3] [i_1 + 1] [i_0 - 3] [i_0 + 3]))) == 28)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_2));
                                arr_22 [i_1] [6] [i_5 + 2] [12] [i_1] [i_7] &= (((arr_3 [i_0 + 2] [22] [i_5 + 1]) == (((((arr_3 [19] [i_5 - 1] [i_7]) ? (arr_0 [i_1] [i_6]) : var_1))))));
                                var_18 = ((var_8 | (arr_2 [20] [i_1])));
                                var_19 ^= (min((arr_17 [i_1] [20] [i_5 - 1] [i_1]), (arr_17 [i_7] [i_1 - 2] [i_6 + 1] [i_5 + 2])));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_20 -= (((((((11952697525062656236 ? (arr_23 [i_1] [i_1] [i_8] [i_0 + 2]) : -6))) ? ((max(var_9, var_7))) : ((((arr_3 [i_0] [i_1] [i_8]) > (arr_24 [i_0] [i_1 - 2] [i_0])))))) - var_0));
                    var_21 = (min((max(14683360226569733740, 18446744073709551615)), ((((arr_0 [14] [i_1 - 1]) ^ (arr_24 [i_0 - 2] [i_0 + 1] [i_1 + 1]))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_22 -= ((+(((arr_21 [i_0 + 3] [i_9] [i_0] [i_1] [4] [i_9]) ? -1 : var_6))));
                        arr_27 [21] [i_8] [i_9] = ((255 ? var_8 : (arr_18 [i_0] [i_1 - 1] [i_0 - 1] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_23 -= (((((max(32756, var_7))) ? ((((arr_14 [i_0] [i_0] [i_1] [i_8] [i_8] [i_10] [i_10]) >> (-101 + 112)))) : ((247 ? -662664096 : 5988258783821254768)))));

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_24 = ((~(arr_30 [i_0 - 2] [12] [12] [i_10] [i_11])));
                            var_25 *= var_9;
                        }
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            arr_36 [i_8] [i_10] [i_8] [0] [i_8] = 3912;
                            var_26 = (arr_13 [i_0 - 1] [i_0 + 3] [i_1] [i_8] [i_8] [2] [i_12]);
                            var_27 = (arr_5 [0] [i_12]);
                            var_28 = ((-(~var_3)));
                            arr_37 [i_0 - 3] [i_8] = ((((arr_16 [i_12 - 1] [i_8]) + (arr_16 [i_0 + 3] [i_1 + 1]))));
                        }
                    }
                }
            }
        }
    }
    var_29 = ((~((9 ? 38175 : var_4))));
    var_30 = ((max((var_9 < var_1), var_1)));
    var_31 |= -28;
    #pragma endscop
}
