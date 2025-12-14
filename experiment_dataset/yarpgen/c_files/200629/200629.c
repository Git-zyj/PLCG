/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_3 [i_0]);

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_2] [2] [3] [i_0] = 7;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_0] [i_2] [i_0] [4] = (!5093113769878347858);
                                arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] = ((!((((arr_11 [i_3] [i_3 + 2] [10] [i_3]) / (arr_11 [i_3 - 4] [i_3 + 2] [i_3 - 4] [i_3 - 4]))))));
                                arr_19 [i_0] [i_0] [i_0] = (((max((((arr_0 [6]) << (var_4 - 684893216113554256))), (((arr_13 [i_3 - 4] [i_2] [i_1]) ? (arr_2 [i_0] [i_2] [i_4]) : var_5)))) < (((arr_0 [i_3 + 2]) ? (arr_12 [i_2]) : var_7))));
                                arr_20 [10] [i_1] [10] [6] [i_4] = (((((var_9 ? (arr_15 [i_3 - 1] [i_3 - 3]) : 46))) > ((-(arr_16 [i_2] [i_2] [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 1] [i_3])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] = ((((min(var_5, var_7))) ? var_8 : (((!(!3379293712547740521))))));
                                var_13 = (min(((((!var_6) & ((-(arr_24 [i_1])))))), (((min(3379293712547740521, 180)) ^ var_11))));
                                arr_29 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] = ((-(min(-var_10, (arr_22 [i_1] [i_6 + 2])))));
                                var_14 = max(202, (min((arr_23 [i_6 + 2]), 2441336458936221610)));
                            }
                        }
                    }
                    var_15 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_16 *= 9;

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_17 = -var_2;
                        var_18 = var_4;
                        var_19 = (var_9 % (((((var_10 ? var_8 : (arr_10 [i_0] [i_1] [i_0] [i_0] [i_5]))) << var_9))));
                        var_20 -= (((var_6 == 1607945338) ? 9223372036854775789 : (-127 - 1)));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_21 *= (((~(arr_25 [i_0] [i_1]))) | var_2);
                        var_22 = (arr_23 [i_0]);
                        var_23 = var_10;
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_5] = (((!(!-126))) ? ((-8365823166481803430 / (((~(arr_32 [i_10] [i_1] [i_1] [i_0])))))) : 9223372036854775807);
                        var_24 = (((arr_10 [3] [i_1] [i_5] [i_10] [i_10]) ? ((var_2 / (min((arr_1 [i_10]), 2441336458936221610)))) : (arr_13 [i_0] [i_0] [i_10])));
                        arr_39 [i_0] = 1607945338;
                        arr_40 [4] [4] [i_1] [i_5] [i_5] [i_10] = (((((arr_1 [i_0]) + 520093696)) & ((min(((var_2 ? var_0 : 1)), var_0)))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_45 [i_0] [i_11] [i_5] [12] [i_10] [1] = ((520093696 % (arr_11 [i_0] [i_0] [i_0] [i_0])));
                            var_25 = 1;
                            arr_46 [i_11] [i_10] [i_11] = var_7;
                            var_26 = ((+(((arr_30 [i_0]) ? var_9 : 1))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, (((var_4 == (arr_31 [0] [i_1] [i_1] [10] [i_12]))))));
                        var_28 *= ((2832950776 ? (arr_30 [i_5]) : (arr_7 [i_1] [i_5])));
                        var_29 = (arr_36 [i_0] [i_0] [i_5] [i_0]);
                        arr_50 [i_0] [i_1] [i_5] [i_5] [i_5] [i_12] = (((((arr_32 [i_0] [i_0] [i_5] [i_0]) & var_0)) <= var_10));
                        var_30 = ((arr_32 [i_0] [i_0] [i_0] [i_0]) % var_5);
                    }
                    var_31 = (((((((min(var_9, (arr_34 [i_0] [9] [i_0] [i_0] [i_0] [i_0])))) ? (arr_22 [i_1] [i_0]) : ((3379293712547740521 / (arr_22 [i_0] [i_0])))))) >= ((((var_3 ? var_3 : (arr_4 [i_1] [i_1]))) | (arr_5 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
