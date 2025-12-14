/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((var_17 ? 247 : (~var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (!1837640728)));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    var_22 = (min(var_22, ((((((arr_0 [i_2]) ^ (arr_5 [i_0] [1]))) < (var_10 % 224))))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        var_23 ^= (arr_1 [i_2 + 3] [i_2 + 3]);
                        arr_11 [i_1] [i_1] [4] = (arr_2 [i_1] [i_2 - 1]);

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_24 = (((~1837640726) || ((((arr_10 [i_0] [i_4]) ? var_3 : (arr_2 [i_4] [i_1]))))));
                            var_25 = (arr_14 [i_1] [i_2 - 2] [i_3] [i_4] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_26 = 1129940094;
                            var_27 = (max(var_27, (((!(((-10 ? var_9 : (arr_17 [i_5])))))))));
                            arr_18 [i_1] [i_1] [i_2] [9] = (((arr_8 [i_0] [i_2 - 1] [i_2] [i_1]) <= (arr_8 [i_0] [i_2 + 2] [i_3] [i_1])));
                            var_28 -= (~(9668 | var_1));
                        }
                    }
                    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_29 *= (5607600529769169404 % 1837640726);
                        var_30 -= 663478690;
                        var_31 = (max(var_31, ((((arr_8 [i_1] [i_2 + 1] [i_2] [i_2]) ? (arr_8 [i_1] [i_2 + 1] [8] [i_2]) : (arr_16 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_6 + 1] [i_2]))))));
                    }
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        var_32 = (min(var_32, (arr_10 [i_7 + 1] [i_2 + 2])));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_33 = (((arr_15 [i_1] [i_2 + 3] [i_7 - 1] [i_2 + 3] [i_1] [i_1]) + 18446744073709551615));
                            arr_29 [i_0] [i_2] &= (((~var_11) ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]) : (arr_8 [i_1] [i_2 - 2] [2] [i_2])));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_34 = -20739;
                            var_35 = (((((arr_17 [i_1]) * (arr_9 [i_1]))) < ((((arr_13 [i_0] [i_1] [i_2 + 3] [2] [i_0]) == (arr_27 [i_9] [i_7] [i_2 + 2] [i_1]))))));
                            var_36 = (((arr_25 [i_0] [i_0] [i_1] [i_0] [i_2] [i_9] [6]) ? (arr_25 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0] [i_0] [i_1] [i_2] [1] [i_7] [i_9])));
                            var_37 += (arr_25 [i_0] [i_0] [i_9] [i_2] [i_7 + 2] [i_7] [i_9]);
                        }
                    }
                    arr_32 [i_1] = var_16;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_38 = ((~(arr_34 [i_2] [i_2] [i_2 - 1] [i_10] [i_1])));
                                var_39 = var_14;
                                var_40 = (arr_2 [i_2] [i_2]);
                            }
                        }
                    }
                    arr_38 [i_2] [i_2] [i_2] |= (((arr_25 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [6]) ? (((arr_21 [i_2] [i_2] [0] [2] [i_1] [i_2]) ? (arr_6 [i_0]) : (arr_15 [i_0] [i_1] [i_1] [i_2] [6] [i_2]))) : (arr_22 [i_2 + 3] [8] [i_2] [i_2 + 2])));
                }
                for (int i_12 = 3; i_12 < 7;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_41 = (max(var_14, (((max((arr_35 [i_0] [i_1] [i_0] [i_13 - 2] [i_1] [i_14]), 18446744073709551607))))));
                                var_42 = var_16;
                            }
                        }
                    }
                    arr_49 [i_0] [i_12 - 1] [5] [i_1] = ((!((min((((arr_30 [i_0] [i_1] [i_1] [i_12]) ? (arr_0 [i_0]) : (arr_43 [i_12] [i_1] [i_0] [i_0]))), -20732)))));
                }
            }
        }
    }
    var_43 = (((var_17 * -var_2) ? (!var_5) : -29075));
    var_44 = var_13;
    #pragma endscop
}
