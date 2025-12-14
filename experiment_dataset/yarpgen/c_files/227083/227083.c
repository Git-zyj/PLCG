/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_12 = arr_2 [i_0 - 1];
        arr_4 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = (min(var_13, (!var_0)));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_14 = (arr_0 [i_1]);
                    arr_13 [i_1] = var_0;
                    var_15 -= ((max(16, var_9)));
                }
            }
        }
        var_16 = (var_2 >= var_6);
        arr_14 [i_1] = (((((((max(var_2, -3599857921285096083))) ? ((var_10 ? 151 : (arr_9 [i_1] [i_1]))) : var_2))) ? ((((!((!(arr_8 [i_1]))))))) : (arr_1 [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_17 |= (((((var_3 ? (arr_16 [i_4]) : (arr_16 [i_4])))) ? (((arr_16 [i_4]) ? 32003 : var_7)) : (-23417 >= 6481618863707601385)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_7] = ((!((((~-2683015283305009623) & (max((arr_18 [i_4]), var_8)))))));
                        var_18 = (~1);
                        var_19 = (arr_21 [i_4] [i_5] [i_6]);
                        var_20 -= (max((min(var_0, 2683015283305009622)), (arr_15 [i_4])));
                        var_21 = (((((((arr_25 [i_7] [i_6] [i_5] [i_4] [i_4]) == ((var_6 ? (arr_20 [i_6] [i_5]) : 0)))))) & (max((max(var_0, (arr_18 [i_4]))), 2683015283305009648))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_22 = (max(var_22, var_5));
                        var_23 -= (!var_10);

                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_24 = -4669720964697550300;
                            var_25 = var_6;
                            var_26 = -var_7;
                        }
                        var_27 = var_8;
                        arr_32 [i_4] [i_5] [i_8] [i_8] = (arr_18 [i_4]);
                    }
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        var_28 = ((((max((arr_19 [i_10 - 2]), (arr_19 [i_10 - 3])))) ? (arr_19 [i_10 - 3]) : (arr_19 [i_10 - 4])));
                        arr_35 [i_10] [i_6] [i_5] [i_4] &= (max((min(((1 ? 2590 : var_8)), ((~(arr_33 [i_4] [i_10]))))), (-624247334432251709 || 4669720964697550320)));
                        var_29 = var_4;
                        var_30 = var_3;
                        var_31 = ((((max((arr_24 [i_10 - 2]), (arr_25 [i_10 - 3] [i_10] [i_10 - 1] [i_10 - 2] [i_10 - 2])))) ? (max(121, 4669720964697550300)) : (((-((var_5 ? 254 : (arr_26 [i_4] [i_5]))))))));
                    }
                    var_32 = (((arr_31 [i_6]) ? (!var_5) : ((-(arr_33 [i_4] [i_5])))));
                    var_33 = ((((~(var_6 && var_6)))) ? var_10 : (((arr_29 [i_6]) + ((-3928802754504371735 & (arr_24 [i_4]))))));
                    arr_36 [i_4] [i_4] [i_4] [i_4] = var_3;
                }
            }
        }
        var_34 = var_9;
    }
    var_35 = (max(((31551 ? 0 : 24666)), (((((max(9040942691324040326, -1842746825))) && (((var_11 ? var_8 : var_10))))))));
    var_36 = ((var_4 ? 0 : -1));

    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_39 [i_11] = var_3;
        arr_40 [i_11] [i_11] = arr_3 [i_11];
        arr_41 [i_11] = (min((arr_31 [6]), (((!(arr_31 [16]))))));
        arr_42 [i_11] = (arr_15 [i_11]);
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        var_37 = var_10;
        var_38 = arr_37 [i_12] [i_12];
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                {
                    arr_52 [i_12] [i_13] [i_14] = (arr_28 [i_13] [i_13] [i_13]);

                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_39 = (max(var_39, (((((-(arr_26 [i_13] [i_14]))) * var_1)))));
                        var_40 = var_11;
                        var_41 = ((-2 ? var_2 : ((1030300297 + (arr_25 [i_15] [i_14] [i_14] [i_13] [i_12])))));
                        arr_55 [i_12] [i_13] [i_13] [i_13] [i_14] [i_15] = (max(var_4, var_10));
                    }
                }
            }
        }
        var_42 = 3923628308;
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_58 [8] &= (((arr_2 [i_16]) ? (arr_21 [i_16] [i_16] [i_16]) : (arr_31 [6])));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                {
                    var_43 = (min(var_43, ((((-1201063229 >= 18446744073709551595) ^ (!var_10))))));
                    var_44 = (7272827298472140895 + var_10);
                    var_45 = (var_8 + var_7);
                    var_46 = -24944;
                    var_47 = (arr_20 [i_18] [i_16]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 14;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 14;i_22 += 1)
                        {
                            {
                                var_48 = ((-17181 ? var_2 : (((!(arr_66 [i_16] [i_20] [i_19] [i_16]))))));
                                var_49 = (min(var_49, (((-(((arr_59 [i_22] [i_20] [i_19]) ? var_5 : 0)))))));
                                arr_74 [i_16] = (arr_65 [i_16] [i_19]);
                            }
                        }
                    }

                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        arr_77 [i_23] [i_16] [i_16] [i_16] = var_5;
                        var_50 *= (arr_18 [i_19]);
                        var_51 = var_7;
                        var_52 *= (!0);
                        var_53 = (~2);
                    }
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        var_54 = (((arr_79 [i_16]) & (arr_79 [i_16])));
                        var_55 = ((var_11 | (arr_25 [i_16] [i_19 - 2] [i_20 + 1] [i_24] [i_16])));
                        var_56 = ((10478 == (!var_11)));
                        var_57 = ((~((((arr_25 [i_16] [i_16] [i_16] [i_16] [i_16]) == var_2)))));
                    }
                }
            }
        }
    }
    for (int i_25 = 0; i_25 < 14;i_25 += 1)
    {
        arr_84 [i_25] = ((((max((arr_61 [0] [i_25] [0]), (arr_61 [8] [i_25] [i_25])))) ? (!65507) : 281117192));
        var_58 = var_3;
    }
    var_59 = var_2;
    #pragma endscop
}
