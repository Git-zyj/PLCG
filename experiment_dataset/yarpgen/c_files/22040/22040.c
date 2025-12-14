/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (~-11);
                    var_15 = (max(var_15, ((((arr_0 [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : (max(((var_11 ? var_13 : var_13)), (~0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] = (max(((((arr_8 [i_2] [i_1]) & ((~(arr_8 [i_2] [i_2])))))), ((~(max(var_13, (arr_8 [i_2] [i_2 - 2])))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 3] [i_2] = ((((((var_7 < (arr_10 [i_4 - 2] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_3 + 1]))))) > (arr_10 [i_4 - 2] [i_1 - 1] [i_2 + 4] [i_3] [i_3 + 1])));
                            }
                        }
                    }
                    var_16 = (arr_4 [i_2 - 2] [i_1 - 1] [i_0] [i_0]);
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 = (((max(((max(var_9, (arr_5 [i_0] [i_0] [i_5])))), (max(var_0, var_4)))) | (max(((max((arr_16 [i_0] [i_1] [i_7] [i_0] [i_7]), var_1))), ((~(arr_15 [i_0] [i_6] [i_6] [i_0])))))));
                                var_18 = (max((max(((var_5 ? (arr_2 [i_5] [i_7]) : 0)), var_4)), ((~(max((arr_0 [i_1] [i_5]), var_2))))));
                                var_19 = (((arr_19 [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 - 1]) < var_4));
                            }
                        }
                    }
                    var_20 = (-9 && 1);
                    var_21 = var_10;
                    var_22 ^= var_10;
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_23 = var_11;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_28 [i_0] [i_10] [i_10] [i_0] [i_0] = (max(((var_5 >= (min((arr_18 [i_1]), (arr_9 [i_0] [i_1 + 2] [i_8] [i_1] [i_10] [i_8]))))), ((((min((arr_1 [i_0] [i_9]), (arr_26 [i_0] [i_1] [i_10])))) && ((max((arr_18 [i_1]), var_10)))))));
                                var_24 *= var_9;
                                var_25 = (arr_16 [i_0] [i_0] [i_8] [i_9] [i_10]);
                                arr_29 [i_10] [i_9] [i_0] [i_8] [i_8] [i_1] [i_10] = arr_3 [i_0] [i_1] [i_0];
                                var_26 = (max(var_26, (((var_6 ? var_8 : var_1)))));
                            }
                        }
                    }
                    var_27 -= ((!((((max(var_8, var_2)) * ((min(-17, (arr_20 [10] [i_1 + 2] [i_8] [i_8] [i_8])))))))));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    var_28 = (arr_3 [i_0] [i_0] [i_0]);
                    arr_32 [i_1] [i_11] = ((var_1 ^ (((arr_25 [i_0] [i_1 + 1] [i_11] [i_11]) ? (arr_26 [i_0] [i_1] [i_0]) : (arr_25 [i_11] [i_1 + 3] [i_1 + 3] [i_0])))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = (((((arr_8 [i_11] [i_11 + 1]) + 2147483647)) >> (((arr_9 [i_0] [i_0] [i_0] [i_1 + 1] [i_11] [i_11]) - 220))));

                    for (int i_12 = 3; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        arr_36 [i_0] = ((var_5 ? (arr_9 [i_12] [i_11 - 1] [i_11 + 1] [i_11] [i_1] [i_0]) : (((var_8 < (arr_15 [i_0] [i_11] [i_11] [i_11]))))));
                        var_29 = ((((var_3 || (arr_0 [i_0] [i_1]))) || (arr_5 [i_11 + 1] [i_11 - 2] [i_11])));
                        arr_37 [i_0] [i_12] = ((-(arr_25 [i_0] [i_1 - 1] [i_11] [i_12])));
                        arr_38 [i_0] [i_0] [i_1 - 1] [i_11] [i_12 - 3] = ((arr_21 [i_12] [i_12 - 2]) & (arr_21 [i_12 - 3] [i_12 - 3]));
                    }
                    for (int i_13 = 3; i_13 < 11;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            arr_45 [i_0] [i_1 + 1] = ((-(arr_42 [i_11 - 2] [i_14] [i_14] [i_14] [i_14] [i_14 + 1] [i_14 - 1])));
                            arr_46 [i_0] [i_1] [i_1] [i_13] [i_14] &= ((var_13 ? var_6 : (!var_12)));
                        }
                        arr_47 [i_0] [i_1 - 2] [i_1] = var_12;
                    }
                    var_30 = (((arr_42 [i_11 - 1] [i_11] [i_1] [i_1] [i_0] [i_0] [i_0]) | var_4));
                }
                /* LoopNest 3 */
                for (int i_15 = 3; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 8;i_17 += 1)
                        {
                            {
                                arr_55 [i_17] = (arr_22 [i_0] [i_15]);
                                var_31 = (arr_25 [i_0] [i_1] [i_0] [i_17 + 1]);
                                arr_56 [i_0] [i_0] [i_1] [i_0] [i_15] [i_0] [i_17] = var_3;
                            }
                        }
                    }
                }
                arr_57 [i_0] [i_1] &= ((((max((var_13 != var_11), (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))) >= (~var_2)));
            }
        }
    }
    var_32 = var_13;
    var_33 = (min(((max(var_3, (min(var_2, var_0))))), ((((max(var_7, var_10))) ? (var_5 * var_7) : var_10))));
    var_34 = (max(var_34, ((min(255, ((var_8 / ((min(var_1, var_14))))))))));
    #pragma endscop
}
