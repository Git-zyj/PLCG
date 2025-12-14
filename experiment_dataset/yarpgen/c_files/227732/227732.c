/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = 65529;
                var_19 = (((((((var_12 ? 63 : (arr_2 [i_0])))) ? (arr_1 [i_1]) : ((min(65521, 11))))) - ((max((arr_1 [i_0]), (arr_1 [i_1]))))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_20 = ((((var_1 % (arr_5 [i_2] [i_2] [i_2 - 1])))) ? ((((min(var_16, var_11))) ? 1 : var_2)) : ((-(arr_0 [9]))));
                    var_21 = (((arr_4 [1] [15]) ? (((((min((arr_3 [i_0] [i_2]), var_0))) ? ((max((arr_7 [i_2] [i_1] [i_0]), (arr_1 [i_0])))) : (arr_4 [i_2 + 1] [i_1])))) : (((min(15, 65535)) - (((var_7 ? var_8 : 4294967295)))))));
                    var_22 = ((!((max((((-(arr_8 [16] [i_0] [i_1] [21])))), ((var_0 ? var_12 : (arr_1 [4]))))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_23 = (((22 + ((874969592 ? var_2 : 131071)))));
                    var_24 = ((!(arr_5 [9] [i_1] [i_0])));
                    var_25 = (min(var_1, (min(30052, -1))));

                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_26 = var_14;
                        var_27 = (max(var_27, ((max(((((max((arr_4 [i_0] [9]), 65526))) ? (min(49365, (arr_12 [i_4] [i_3] [4]))) : ((var_16 ? (arr_7 [i_3] [18] [3]) : var_13)))), -var_12)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_5] = ((var_14 < (arr_11 [i_0] [i_5 + 1] [i_3] [i_5 + 1])));
                        var_28 = var_14;
                        var_29 = (arr_8 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]);
                        var_30 &= (((arr_9 [i_3] [i_5 + 1] [i_5] [i_5 - 1]) & 25896));
                        var_31 = (~19372);
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_32 *= ((((((max(52965, 1134445260))) ? ((var_13 ? -4433797 : var_7)) : var_7))) ? (((var_4 > (((min(4, var_6))))))) : (((arr_15 [i_0] [i_1] [i_3] [5]) ? var_7 : (!3160522046))));
                        var_33 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_34 += (((((var_4 ? var_1 : var_15))) ? ((~((-1567286604 ? 56055 : 1)))) : (~-185220450)));
                                var_35 = (min(((max(((2147483645 ? (arr_22 [i_0] [i_3] [i_7] [i_8]) : (arr_23 [i_3] [10] [8] [i_3]))), (arr_12 [7] [i_7] [i_1])))), ((1 ? -1 : 1134445271))));
                                var_36 = min((arr_24 [i_8] [i_7] [i_3] [1] [i_0] [i_0]), ((-((var_5 ? 32767 : var_12)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_30 [i_0] [i_0] [6] [i_9] = (!(arr_16 [i_0] [i_1] [i_9]));
                    var_37 = (min(var_37, var_5));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_38 = (((arr_9 [i_9] [6] [i_9] [i_10 - 2]) == var_11));
                                var_39 = ((255 ? (arr_6 [i_0]) : ((((!(arr_13 [10] [2] [i_9] [i_9])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_40 = (min(var_40, var_0));
                                var_41 |= ((var_12 ? 0 : (arr_2 [i_9])));
                            }
                        }
                    }
                    var_42 = (((((arr_22 [i_0] [i_1] [6] [i_9]) + 2147483647)) >> ((((var_13 ? var_12 : var_11)) - 4060721991))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_43 = (min(var_43, (((var_0 ? -1 : 41)))));
                    var_44 = (((arr_10 [i_14]) % var_0));
                    var_45 |= 4;
                    var_46 = (arr_10 [i_0]);
                }
                var_47 = (min(((var_3 ? ((713034678 ? (arr_26 [i_0] [i_0]) : 782621768)) : ((8960 ? 23179 : 1286)))), ((max((min((arr_27 [i_0] [i_0] [i_1] [i_1]), (arr_1 [i_1]))), var_8)))));
            }
        }
    }
    #pragma endscop
}
