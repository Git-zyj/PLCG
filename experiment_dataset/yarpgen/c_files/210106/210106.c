/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65535;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = ((-(arr_8 [i_1 + 3])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = (((arr_4 [i_4] [i_2]) < var_17));
                                var_22 = ((((((max(126611788, 1867400357))) ? (2548505393187594693 * -929391736) : var_9)) / var_4));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2 + 1] [i_0] = (((arr_3 [i_0] [i_1] [i_1 + 2]) ? (arr_18 [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1]) : (arr_18 [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 4])));
                        var_23 |= var_6;
                    }

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_24 = (max(var_24, ((((var_12 && (arr_20 [i_6 + 1] [2] [i_6 + 1] [16])))))));
                        arr_22 [i_0] [i_2] [i_2] [i_1 - 1] [i_0] = (((((((var_10 ? (arr_8 [i_0]) : (arr_12 [i_2] [i_2])))) >= 2963511295)) ? (min(-var_5, (max(var_8, (arr_16 [i_2 + 1]))))) : (929391736 <= -929391736)));
                        var_25 = ((-1362501938 & (((((arr_9 [i_6] [i_0] [i_6] [i_6 + 1] [i_6]) ? var_10 : var_2))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {

                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        var_26 = (max(var_26, ((-var_3 - (406658643484194348 >= 25)))));
                        var_27 = (min(var_27, ((((arr_17 [i_8]) * (((arr_17 [i_8]) - (arr_17 [i_8]))))))));
                    }
                    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_39 [17] [i_11] [i_11] [i_7] = (var_15 ? (((((arr_38 [i_7 + 1] [i_9] [i_11]) && (arr_12 [i_11] [i_8]))))) : ((~(max(var_7, (arr_26 [5] [i_8] [i_7]))))));
                        var_28 = (max(var_28, (arr_27 [i_11] [i_9] [0])));
                        var_29 += ((((((((arr_20 [24] [i_8] [i_9] [12]) | 929391727))) ? (((~(arr_29 [14])))) : -406658643484194349)) != var_1));
                    }
                    for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            arr_44 [i_13 + 1] [i_8] [i_8] [i_8] [i_8] [i_7] |= var_6;
                            var_30 = (((((arr_24 [14] [i_12 - 1]) ? (arr_38 [i_7] [i_8] [i_9 - 1]) : var_6)) << ((((var_3 ? (arr_38 [i_13] [4] [i_7]) : (arr_4 [i_7] [i_7 + 1]))) - 1707686614929642327))));
                        }
                        var_31 = (-7 > 1);
                        var_32 *= (-(((var_9 > (arr_3 [i_8] [i_9 + 2] [i_8])))));
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_33 = (((!-591307891) && ((((arr_42 [2] [i_14 + 1] [i_9 - 1]) ? 8 : var_12)))));
                        var_34 = (max(var_34, (((31 ? (18446744073709551615 >> 1) : 65535)))));
                        var_35 = (65506 ? -389168190928480178 : 3044971378);
                        var_36 *= ((36878 < (arr_42 [i_9 + 2] [i_14 + 1] [i_14])));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_53 [i_16] [i_15 - 3] [i_9 - 3] [12] [i_7] = (-852077174 | 255);
                                var_37 *= (min(((((arr_10 [i_16 - 1] [i_16]) < -var_5))), (arr_4 [i_8] [i_8])));
                                var_38 = (max(var_38, ((max(9223372036854775807, ((min((3044971377 < -852077174), ((-26 + (arr_51 [i_16 + 1] [i_15] [i_9] [i_8] [i_7])))))))))));
                                var_39 *= (((-1 + 2147483647) >> (-var_18 + 37)));
                                var_40 = (min(var_40, (((var_3 | (max((arr_36 [i_16 + 1] [i_8] [12] [i_16 - 1] [i_8] [i_16 - 1]), (arr_32 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 - 1] [i_9]))))))));
                            }
                        }
                    }
                    var_41 = (max(var_41, var_9));
                    var_42 = (arr_49 [i_7]);
                }
                arr_54 [i_8] [i_7] [i_7] = (arr_37 [7] [i_7 + 1] [i_8] [i_8]);
            }
        }
    }
    #pragma endscop
}
