/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_6 ? var_16 : var_3)))) * (((var_4 ^ var_3) & (min(var_8, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((((arr_5 [i_0 - 1] [i_0]) ? var_11 : (arr_3 [i_0] [i_1 + 1]))) & var_15)) & ((((arr_1 [i_1 - 1]) ^ (arr_3 [i_0 - 1] [i_0 + 1])))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 = ((!(((1920860033 ? (3612044657 != -91) : 682922661)))));
                                var_20 = ((+((((arr_9 [i_0] [i_1] [i_3]) == (arr_8 [i_4 + 3] [i_4 + 3] [i_4] [i_4 + 3]))))));
                                arr_13 [i_2] [i_3] [2] [i_2] [i_2] [i_2] |= (max(var_14, (((var_0 * var_1) / (((var_1 - (arr_2 [i_0]))))))));
                                var_21 = (max(var_21, (((((682922661 ? (((((arr_2 [i_0 - 1]) <= (arr_10 [i_4 + 1] [i_2] [i_2] [i_0]))))) : 35180077121536)) << (((((max(var_16, var_15)))) + 17206)))))));
                                var_22 = ((((arr_2 [0]) ? var_16 : ((-(arr_6 [i_1]))))));
                            }
                        }
                    }
                    var_23 = (((arr_3 [i_1 - 2] [i_1 - 2]) ^ (((arr_3 [i_1 - 2] [i_1]) & (arr_3 [i_1 + 1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_5] [i_5] [i_5] [0] = ((((!(arr_10 [i_0] [i_2] [i_2] [i_2]))) ? ((((var_5 ? var_14 : var_0)) & (((arr_16 [3] [i_1] [i_2] [i_1]) ? var_11 : (arr_6 [i_6]))))) : (((((((-(arr_4 [i_2])))) <= (((arr_7 [i_0]) ? var_10 : (arr_20 [6] [i_0] [6] [i_0] [i_0])))))))));
                                var_24 -= (min((((((arr_4 [i_0 + 1]) ? var_10 : var_6)) + var_7)), (((((arr_16 [1] [i_1] [i_1] [5]) != var_8))))));
                                var_25 = (((((((arr_17 [i_0] [i_2]) && (arr_14 [2] [i_5]))))) & var_9));
                                var_26 = -var_8;
                            }
                        }
                    }
                    var_27 = ((((((var_8 << (((arr_4 [i_1]) + 13174)))))) != (((arr_15 [i_0 - 1] [i_0 - 1] [i_1 - 2]) ? (arr_14 [i_1 - 2] [i_0 - 1]) : (arr_16 [i_0] [i_0 + 1] [i_1 + 1] [i_1 - 2])))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [8] [i_0 + 1] = -var_2;
                    arr_26 [i_0] [i_1] [i_7] = (max((((~((~(arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))))), ((var_5 * (arr_10 [i_0] [i_0 + 1] [i_7] [i_7])))));

                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        var_28 = (((((arr_27 [i_0] [i_0] [i_0]) - (arr_4 [i_1]))) / (var_1 | var_7)));

                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            arr_32 [i_0 - 1] [10] [i_0 - 1] [i_0 - 1] [i_9] = (23 != 84);
                            var_29 = (((arr_10 [i_7] [i_9] [i_9] [i_1]) * (arr_10 [i_1] [i_9] [i_9] [i_1])));
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_30 |= ((arr_15 [i_0] [i_0] [i_0 + 1]) ? (min((min(var_0, var_2)), (arr_6 [i_0 - 1]))) : (max(-var_12, (((arr_22 [i_1] [i_1]) & var_0)))));
                    arr_35 [9] [i_10] [i_10] = ((~(arr_34 [i_1] [i_10])));
                    arr_36 [i_0] [i_1] = (arr_14 [i_1] [i_10]);
                    arr_37 [i_0] [i_0] [i_0] [i_0] = (((arr_14 [i_0] [i_0]) * ((((arr_14 [i_10] [i_0 - 1]) != (arr_14 [i_0 - 1] [i_1]))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        var_31 ^= (arr_41 [i_0] [i_0] [i_11] [i_11]);
                        arr_42 [i_0 + 1] [7] [i_11] [i_12] = (arr_9 [i_0] [i_0] [i_12]);
                        var_32 -= (arr_31 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_11] [i_11] [i_1 - 2]);
                    }
                    arr_43 [7] = (((arr_20 [i_0] [i_0 + 1] [i_0 + 1] [4] [i_0 + 1]) - var_11));
                    var_33 |= ((+(((arr_38 [i_0] [i_1]) ? var_11 : (arr_41 [i_0] [i_1 + 1] [i_11] [i_11])))));
                }
                var_34 *= (((((((((arr_27 [i_0] [i_0] [i_1 - 2]) | (arr_28 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))) + 9223372036854775807)) >> (((((arr_28 [i_0] [i_0 - 1] [i_0] [i_1 - 1] [i_1 - 1]) ^ var_10)) - 2756319038059431824)))) | (arr_18 [i_0] [i_0] [i_0] [i_1 - 2] [i_0] [i_1])));
            }
        }
    }
    var_35 = ((((((var_6 ? var_14 : var_3)) >> (var_1 - 2828962018))) != var_16));
    #pragma endscop
}
