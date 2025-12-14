/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_12 |= ((~(arr_10 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1])));
                        arr_12 [i_1] [i_1] &= (arr_1 [i_1] [i_1]);
                        arr_13 [i_0] [9] [i_2] [i_2] [i_1] [i_0] = ((-(min(var_0, (arr_10 [i_1] [5] [5] [i_1] [i_1])))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_13 = var_6;
                            arr_16 [i_0] = ((109093168 ? -1938993892 : -1132750083));
                            arr_17 [i_1] [i_0] [i_3] [i_3] = -69;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_20 [i_3 - 1] [i_0] [i_2] [6] [i_5] = ((~(arr_14 [i_0] [i_0] [i_3 + 1] [i_0] [i_3 + 1])));
                            var_14 = (!var_7);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_15 = var_5;
                            var_16 = ((var_8 ? (arr_19 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_0]) : (arr_19 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_3] = (((arr_10 [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_0]) ? ((-(((arr_24 [8] [8]) * var_10)))) : (arr_18 [i_0] [i_0] [1] [i_0] [i_0] [i_2] [i_2])));
                            var_17 = (max(var_17, var_7));
                            arr_26 [i_0] [i_0] [4] [i_0] [i_7] = ((var_3 > ((max(var_10, (min((arr_0 [i_0] [i_0]), (arr_24 [i_0] [6]))))))));
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_18 = (max(var_18, var_4));
                            arr_30 [i_0] = 122;
                            var_19 += var_1;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [6] [i_2] [i_3] [i_9] = (arr_18 [i_0] [1] [i_3] [i_3 + 1] [i_2] [i_9] [i_2]);
                            arr_35 [8] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1]);
                            var_20 |= arr_29 [i_1] [i_9] [i_9] [i_3 + 1] [i_3] [i_3] [i_1];
                            arr_36 [i_0] [i_1] [i_0] [i_3 + 1] [i_3] [0] [i_9] = var_7;
                        }
                    }
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        var_21 ^= (arr_18 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_2]);
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_14 [i_10 + 2] [i_0] [i_10 + 3] [i_0] [i_1]);
                        var_22 = arr_5 [i_0] [i_1];
                    }
                    for (int i_11 = 3; i_11 < 6;i_11 += 1)
                    {
                        var_23 = ((~(max((arr_32 [i_11] [i_11 - 3] [i_0] [i_11 + 1] [i_0] [i_11] [i_11 - 2]), (arr_32 [i_11 - 3] [i_11 + 1] [i_0] [i_11 - 2] [i_0] [i_11] [i_1])))));
                        var_24 = (min(var_24, (((((((max((arr_32 [i_0] [i_0] [i_1] [4] [i_11] [i_0] [i_11]), (arr_28 [8] [8] [i_1] [i_2] [i_11])))))) / ((-(arr_10 [i_1] [i_11 + 1] [i_11 - 1] [i_11] [i_11 - 1]))))))));
                    }

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_51 [i_1] [8] [i_1] [i_0] [i_1] = (-(max((arr_2 [i_1] [i_0]), (((var_9 - (arr_4 [i_1] [i_13])))))));
                            var_25 = (max(var_10, (arr_46 [i_1])));
                            arr_52 [i_0] [i_1] [i_2] [i_1] [i_12] [i_12] &= (((~(arr_19 [8] [i_1] [i_0] [i_12] [i_0] [i_1]))) << (((arr_22 [i_0] [i_1] [i_0] [7] [i_13] [i_1] [i_0]) - 1634105070)));
                        }

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_26 = (min(var_26, ((max((arr_2 [i_0] [i_1]), (((arr_1 [i_12] [i_14]) ? (arr_3 [i_1] [i_1]) : var_4)))))));
                            var_27 = (min(var_27, (arr_49 [i_1] [i_2] [i_12] [i_14])));
                            arr_56 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((max((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_0]))));
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_28 *= var_1;
                            arr_60 [i_15] [i_0] [i_2] = ((~(max(var_7, (var_10 - var_1)))));
                            var_29 = (arr_21 [2] [i_2] [i_12] [i_15]);
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_30 = (max(var_30, (((1345125341 ? ((((min((arr_27 [i_0] [i_1] [i_2] [9] [i_16]), var_4))) ? (1 > var_3) : (max(var_1, (arr_38 [i_0] [i_0] [i_1] [2] [i_2] [i_0]))))) : (--109093156))))));
                            arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-0 * (arr_41 [i_0] [i_0] [i_2] [i_12] [i_0])));
                        }
                        arr_65 [i_0] [i_0] [i_0] [i_12] = (((~(arr_1 [i_0] [i_12]))));
                        var_31 = (arr_38 [i_0] [i_1] [i_2] [i_2] [i_1] [i_12]);
                        var_32 *= (((arr_41 [2] [i_12] [i_2] [i_2] [4]) && var_10));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 1; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                var_33 |= (min(((((arr_68 [i_17 - 1]) > (arr_70 [i_17 - 1] [i_17 - 1])))), (max((arr_72 [i_17 - 1] [i_17 - 1] [i_17 - 1]), (arr_67 [i_17 - 1] [i_17])))));
                                arr_77 [8] [i_18] [i_19] [i_20] [i_21] |= ((-(((arr_76 [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]) ? (arr_67 [i_17] [i_19]) : (arr_70 [i_18] [i_18])))));
                            }
                        }
                    }
                    var_34 = (max(var_34, ((max(((max((arr_74 [i_17 - 1] [i_17] [i_19] [0]), (arr_74 [i_17 - 1] [i_18] [i_18] [i_18])))), (arr_70 [i_17 - 1] [i_17 - 1]))))));
                    var_35 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
