/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [10] [i_0] = (~(((min((arr_9 [i_0] [13] [8] [8] [i_0]), var_2)))));
                                var_18 = 913132861;
                                var_19 = (min((arr_1 [i_0]), (max((arr_4 [i_3]), (var_10 != var_1)))));
                                var_20 = ((((min(-6355217148826671534, ((max((arr_6 [i_4 - 1] [i_1] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (4278425384728033123 / -5982423084153561425) : (min(var_4, var_9))));
                            }
                        }
                    }
                    var_21 = ((-(~769758333)));
                    var_22 = (max(26244, 26264));
                }
                arr_15 [2] [2] [i_0] = (min(26244, 6479323426897472655));
                var_23 = var_0;

                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_24 = ((min((arr_8 [i_5 + 1] [i_5 + 2] [i_5 + 2]), (arr_1 [i_5 + 3]))));
                                arr_24 [13] [i_0] [i_0] = (max((arr_21 [i_0] [i_6] [i_5] [6] [6] [i_0]), 3790228018));
                                var_25 = (!((!(arr_13 [i_7] [4] [i_1]))));
                                arr_25 [1] [8] [i_0] = (max(((min(var_8, (arr_7 [i_0] [i_1] [i_5] [i_6])))), (((arr_2 [8]) >= var_12))));
                            }
                        }
                    }
                    arr_26 [5] [i_0] [i_5] [i_5 - 3] = min(((-(arr_12 [13] [i_5] [i_5 + 1]))), 39302);
                    arr_27 [6] [i_0] [4] = (((((~var_0) ? (arr_7 [i_0] [i_5 - 2] [i_5 + 1] [i_5 + 2]) : (((((arr_19 [i_5] [i_1] [i_0]) && -9036050980418154067)))))) != (min(((var_15 ? var_3 : var_5)), var_6))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_26 = -var_10;
                    var_27 = (arr_17 [i_0] [i_0] [i_8] [i_8]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_28 = (max(var_28, 0));
                    arr_42 [i_9] [i_9] [i_9] = var_4;
                    var_29 = (max((((arr_10 [i_11] [i_11] [i_10 - 3] [i_10 + 2] [i_10 + 1]) ? (min(var_3, (arr_31 [i_9]))) : var_13)), (((((((arr_22 [i_9] [13] [10] [i_11] [i_11]) ? (arr_30 [i_9] [2]) : (arr_33 [i_10])))) ? (min(var_13, (arr_10 [i_11] [i_11] [i_11] [i_11] [i_11]))) : (((!(arr_2 [i_10])))))))));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_46 [i_9] [i_10 + 1] [i_11] = min((max((arr_38 [i_10 + 2] [i_10 - 3]), (arr_16 [i_12] [i_10 - 2] [i_11] [i_12]))), ((((arr_32 [i_9]) || ((((arr_34 [i_9]) ? (arr_22 [i_12] [i_11] [1] [i_10 + 2] [i_9]) : var_5)))))));
                        arr_47 [i_9] [i_9] = (arr_12 [i_9] [0] [i_12]);
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_30 = var_6;
                        arr_50 [3] [i_10 - 3] [i_9] [13] = ((~((var_2 & (((arr_31 [i_11]) ? (arr_4 [i_11]) : (arr_22 [4] [i_10] [i_11] [i_11] [i_13])))))));
                    }
                    arr_51 [i_9] [i_10] [i_9] = ((-(~2616238676)));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_31 = arr_38 [i_10 - 2] [i_10 + 2];
                                var_32 = arr_43 [i_9] [11] [i_14] [i_14] [i_14] [i_14];
                            }
                        }
                    }
                    arr_62 [i_9] [i_9] [i_9] [i_9] = ((-(arr_52 [i_9] [i_14] [i_10 + 2])));
                }
                var_33 -= (!9057934791702657112);
                arr_63 [i_9] = ((!(((arr_41 [i_10] [i_10 + 1] [i_9] [i_9]) || (arr_41 [i_9] [i_10 - 3] [i_10 - 1] [i_10 + 2])))));
            }
        }
    }
    #pragma endscop
}
