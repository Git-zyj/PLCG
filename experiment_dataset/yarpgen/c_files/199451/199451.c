/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_6 ? var_13 : 1) & 1))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (!0);
        var_16 = (((arr_0 [i_0]) - (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_17 = (arr_1 [1] [i_0]);
        var_18 = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = (arr_4 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 = (arr_3 [1]);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((1250093648 ? var_8 : (arr_11 [i_1] [i_2] [i_3] [i_4]))))));

                        for (int i_5 = 4; i_5 < 15;i_5 += 1)
                        {
                            var_22 = (min(var_22, var_6));
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = (((arr_2 [i_3]) ? 1 : (arr_10 [i_4] [i_4])));
                            var_23 *= 2750822787809941927;
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_24 = (((arr_10 [i_4] [i_4]) >= 7));
                            arr_20 [i_1] [0] [i_1] [16] [i_6] &= (arr_7 [i_3]);
                        }
                        var_25 += ((!(arr_13 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 3] [i_2])));
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        var_26 = (arr_11 [i_7] [i_7] [15] [0]);
                        var_27 = var_13;
                        var_28 = ((var_9 ? var_12 : ((-(!4095)))));
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_29 = (arr_2 [i_1]);
                            var_30 = (min(var_30, (((-(((0 <= (arr_22 [i_1] [11])))))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_30 [i_10] [i_2] [i_2] [i_8] = -70;
                            var_31 ^= (min(var_9, (((arr_8 [i_3] [i_2 - 1] [i_1] [i_1]) ? (arr_8 [13] [i_2 - 1] [i_2] [12]) : (arr_8 [i_2] [i_2 - 2] [1] [i_1])))));
                            var_32 = (((~var_12) ? (arr_5 [i_1]) : -1));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_33 = (min(var_33, ((min(var_11, (arr_31 [i_1] [i_2 - 3] [14] [i_2 + 2] [i_2 - 3]))))));
                            var_34 *= (!((min((~1), (arr_5 [i_1])))));
                            var_35 = 0;
                            var_36 = (!47);
                            var_37 = ((~(arr_28 [i_3] [2] [i_3] [i_2 + 2] [i_3])));
                        }
                        arr_33 [2] [i_3] [i_8] = (max(11, (min((arr_11 [i_8] [i_3] [i_2 + 2] [16]), (~108)))));

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_38 *= -65535;
                            var_39 ^= (max((min((arr_26 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2]), (arr_26 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 1] [i_2]))), ((~(arr_26 [i_2 + 2] [i_2] [i_2 + 2] [i_2 - 3] [i_2])))));
                            var_40 = ((((((arr_16 [i_12] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2] [i_12]) | (arr_16 [i_12] [i_2] [i_2 - 3] [i_2 - 1] [i_1] [i_12])))) ? -1107207206369790871 : (arr_31 [i_1] [i_2] [i_3] [9] [10])));
                        }
                        var_41 = (min((arr_14 [i_1] [i_1] [7] [i_2] [i_3] [i_8]), (!var_6)));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_42 = arr_6 [i_1];
                            arr_41 [i_14] [i_14] [i_13] [i_1] [i_3] [i_2] [i_1] = -211;
                            var_43 = (arr_29 [i_1] [9] [i_1] [i_1] [i_1]);
                            arr_42 [i_13] [i_13 + 1] = arr_8 [i_1] [i_1] [i_1] [i_1];
                            var_44 -= 1;
                        }
                        var_45 = 8336763212747347575;
                        var_46 = (min(var_46, -5322));
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_47 = (min(var_47, ((((arr_3 [i_2 - 2]) / ((~(arr_13 [4] [4] [i_2 - 1] [i_2] [i_2]))))))));
                        var_48 += 1;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_49 = (min(var_49, ((((arr_16 [i_16] [6] [i_3] [i_3] [i_2 + 2] [i_3]) > (~4728))))));
                        var_50 = (arr_37 [i_1] [i_1] [i_1] [i_1]);

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_51 = (arr_39 [i_3]);
                            var_52 = (max(var_52, (arr_32 [i_1] [i_1] [i_3] [i_16] [i_1])));
                            arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_9 [i_17] [i_3] [i_1]);
                        }
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_53 += 1;
                            var_54 = (!(arr_32 [i_1] [i_1] [i_3] [i_16] [i_18]));
                            arr_54 [i_1] [14] [1] [0] [i_1] [2] [i_1] = (arr_31 [i_2 - 3] [i_2 - 2] [i_2 - 3] [i_2 - 2] [i_2]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            {
                                var_55 = (min(var_55, (arr_58 [i_1] [i_2] [6] [1] [2])));
                                var_56 *= ((max((arr_13 [13] [13] [i_2 - 2] [i_2 - 1] [i_2 - 1]), var_2)));
                                var_57 = -1107207206369790871;
                                var_58 *= (arr_18 [i_1] [i_20] [i_20] [i_19] [i_20]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 16;i_22 += 1)
                        {
                            {
                                var_59 = (max(var_59, ((((18446744073709551615 ? 866729675 : (((29138 ? (arr_40 [i_21] [i_21] [i_21] [13] [i_3] [i_2] [14]) : (arr_64 [i_21] [i_2] [i_1]))))))))));
                                arr_66 [i_1] = var_4;
                                var_60 = ((!((((arr_48 [i_2 - 2] [i_2]) ? (arr_25 [i_2 - 2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 2]) : var_4)))));
                            }
                        }
                    }
                }
            }
        }
        var_61 = (min(var_61, (arr_49 [i_1] [9] [i_1] [8] [i_1] [i_1])));
        arr_67 [i_1] = (min((arr_56 [7] [i_1] [i_1] [i_1]), (((arr_64 [i_1] [i_1] [i_1]) ? (arr_26 [i_1] [1] [i_1] [i_1] [i_1]) : ((-1 ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) : -77))))));
    }
    #pragma endscop
}
