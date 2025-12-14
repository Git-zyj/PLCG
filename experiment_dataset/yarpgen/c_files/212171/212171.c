/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((((arr_2 [i_0]) ? (max(var_18, var_19)) : (((var_9 ? var_19 : var_12)))))) < ((~(arr_2 [i_2]))))))));
                    arr_8 [i_0] = ((-var_5 + (((((var_1 + (arr_7 [i_0] [i_0] [i_0])))) ? var_10 : ((var_11 ? (arr_5 [i_0] [i_1]) : (arr_1 [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_21 *= (arr_12 [i_3] [i_0] [i_0] [i_1] [i_0]);
                        var_22 *= ((var_11 < (arr_10 [i_0] [i_0] [i_0] [i_0] [17])));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_23 &= ((~((((arr_1 [i_2]) != ((var_7 - (arr_14 [0] [0] [0] [i_4]))))))));

                        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_24 = ((((((var_13 ? (arr_2 [i_0]) : var_18)) ^ ((((arr_14 [14] [18] [15] [7]) * var_12))))) * (((((arr_10 [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5 + 1]) < (arr_10 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1])))))));
                            arr_18 [i_1] [i_2] = (((var_8 + 2147483647) >> (var_19 - 51705)));
                            var_25 = (max(var_25, (((min(var_10, var_17))))));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_26 &= ((var_14 != ((-(arr_5 [i_6 - 1] [i_6 - 1])))));
                            arr_22 [i_0] [i_0] [i_0] &= ((((((var_14 ? var_5 : var_7)) / (arr_13 [16] [i_2] [i_4] [i_6 - 1]))) * (var_3 / var_11)));
                            var_27 = (((((arr_13 [i_2] [i_2] [i_2] [i_2]) ? ((var_13 * (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2]))) : (((var_10 ? var_2 : var_16))))) != ((max(((var_3 << (var_11 - 134))), var_1)))));
                            arr_23 [i_4] [i_4] [i_4] [i_4] = (arr_5 [i_6 - 1] [i_6 - 1]);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_28 = -var_15;
                            var_29 = ((!(!var_8)));
                            arr_27 [i_7] [14] [i_2] [i_1] [14] &= (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_1] [i_2] [i_1] [9]) : (arr_1 [i_1])));
                        }

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_30 = (((min((var_16 != var_5), ((var_8 - (arr_19 [i_0] [i_1] [i_2] [i_1] [i_8 + 1])))))) ? (((var_13 ? ((var_14 ? (arr_9 [i_0] [i_1] [i_0] [i_4]) : var_5)) : -var_4))) : ((var_4 | (arr_10 [i_8 + 1] [11] [i_8] [i_8 + 1] [i_1]))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-var_18 ? ((((var_1 ^ var_3) < (~var_0)))) : var_9));
                            var_31 = (min(var_31, (((-((var_4 ? (arr_6 [i_8 + 1] [6] [0] [i_0]) : (arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))))));
                            arr_31 [i_0] [i_0] [6] [i_2] [i_0] [i_8] [i_8] = (arr_20 [i_0] [i_1] [i_0] [i_1] [i_8]);
                        }
                    }
                    arr_32 [i_0] [i_0] = var_18;
                    var_32 = ((((((var_13 / (arr_26 [i_1] [i_1]))) * (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) | (min((~var_10), (((arr_20 [i_0] [i_1] [i_1] [i_2] [i_2]) ^ var_6))))));
                }
            }
        }
        var_33 = (max(var_33, var_19));
        var_34 &= ((((var_11 == (arr_4 [i_0] [i_0] [i_0]))) ? -var_10 : ((var_7 ? ((((arr_21 [i_0] [i_0] [i_0] [i_0]) < (arr_9 [i_0] [i_0] [i_0] [17])))) : (var_2 + var_0)))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                {
                    var_35 = (max(var_35, (arr_33 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_36 *= ((-(((var_5 ? var_7 : var_13)))));
                                var_37 = (min(var_37, (arr_17 [i_0] [1])));
                                var_38 = ((var_3 / var_10) ? (max((((arr_9 [i_9] [i_9] [i_11] [14]) + var_13)), (var_16 && var_9))) : var_2);
                                arr_46 [i_0] [i_9 - 3] [2] [i_11] [i_12] = (((((var_17 ? var_3 : (arr_20 [i_0] [i_0] [i_9] [i_11] [16])))) ? var_18 : (arr_44 [i_0] [i_0] [i_10 + 1] [i_11] [i_0] [i_12] [i_9 - 3])));
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_39 = ((((var_19 && var_15) % var_15)));
                        var_40 = ((((max(var_18, var_9))) ? (((-(arr_13 [1] [13] [i_9] [1])))) : ((var_4 % (min((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 576460752303423424))))));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_41 = (min(var_41, (((((((((-(arr_15 [i_0] [1] [i_10 + 1] [i_10 + 1] [i_14] [i_14])))) && var_19))) != (arr_40 [i_0] [19] [i_0] [i_0]))))));
                        var_42 *= (((((((-(arr_25 [i_0] [i_9] [i_9 + 1] [i_14] [i_14] [i_9]))) * var_14))) ? var_8 : ((((((arr_17 [i_0] [9]) - var_2))) ? var_16 : -var_11))));
                        var_43 *= (((~var_7) ^ (((var_1 != (arr_5 [i_9 - 3] [i_9 - 3]))))));
                        arr_52 [i_0] = (((arr_15 [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 - 1]) * (((var_17 / var_4) & var_16))));
                        arr_53 [16] [i_9] [i_10] [i_14] [i_14] = ((((var_7 ? ((var_18 >> (var_8 + 225493447))) : (var_5 * var_4)))) || (((~((max(var_5, (arr_20 [i_14] [i_10] [0] [i_9] [i_0]))))))));
                    }
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 21;i_15 += 1)
    {
        arr_56 [i_15 - 1] [i_15 - 1] = ((((-(arr_55 [i_15 - 1] [i_15]))) - var_1));
        arr_57 [i_15] [i_15] = ((((var_9 ? ((var_7 ? var_0 : var_8)) : var_18)) != ((((((arr_54 [i_15 - 2]) ? var_13 : var_17))) ? ((~(arr_54 [17]))) : ((((arr_54 [i_15]) > var_3)))))));
    }
    var_44 = (((var_11 < var_15) >= var_13));
    var_45 = var_14;
    #pragma endscop
}
