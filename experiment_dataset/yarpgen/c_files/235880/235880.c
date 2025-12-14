/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (arr_2 [5]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = ((~(min((arr_12 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), ((max(10008, (arr_9 [9] [i_1 - 2] [i_3] [i_0]))))))));
                            var_19 -= ((10012 ? (-9223372036854775807 - 1) : 8));
                            var_20 = (arr_0 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_21 = var_0;
                            arr_18 [7] = (((10823496802699391329 ? 8160 : 0)));
                            arr_19 [i_0] [i_1 - 2] [i_4] = (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((arr_6 [i_0] [i_4] [i_5]) ? ((var_10 ? (arr_12 [i_0] [i_1 + 1] [i_4] [i_0] [i_4] [i_0]) : (arr_15 [i_0]))) : (arr_14 [i_0] [i_1] [i_1] [i_0])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_22 = (max((max((arr_16 [1] [i_1] [i_7] [i_1 + 1]), (max(10823496802699391355, var_5)))), ((((((arr_9 [i_1 + 1] [i_6] [i_7] [4]) && var_6)) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ^ (arr_17 [i_0]))) : (arr_1 [i_1]))))));
                                var_23 = (arr_7 [i_1 - 3] [i_1 + 1] [i_1 + 1]);
                                arr_30 [8] [8] [i_8] [i_8] [7] [i_0] = ((!((((max((arr_12 [i_0] [i_1] [i_6] [0] [i_8] [i_8]), -6813346844223178103)) ^ var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_24 ^= (arr_35 [i_9]);
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_25 = (max((((((1 ? (arr_38 [i_9]) : (arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) ? -10012 : (((arr_34 [i_11] [i_11]) ? var_12 : (arr_40 [i_9] [i_10]))))), (((arr_34 [i_13 + 1] [i_12 - 1]) + (arr_31 [i_13 + 1])))));
                                var_26 = (max(var_26, (((!((((arr_42 [i_9] [i_10] [18] [i_12 + 1] [9] [i_13 - 2]) ? 0 : (arr_41 [5] [i_10] [i_11] [i_12 + 1] [i_13] [i_13 - 2])))))))));
                                arr_44 [2] [i_9] = (((((arr_36 [i_9] [i_10] [15] [i_12 - 3]) & (arr_42 [i_9] [i_10 - 2] [1] [i_12 - 3] [19] [i_13 - 2]))) | (((arr_42 [i_9] [i_10] [20] [i_12 - 3] [i_13] [i_13 - 2]) ? (arr_42 [18] [4] [i_11] [i_12 - 3] [18] [i_13 - 2]) : (arr_36 [i_9] [i_10 + 1] [1] [i_12 - 3])))));
                            }
                        }
                    }
                    var_27 -= var_3;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_28 = (min(var_28, 5));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_29 ^= (max((((arr_39 [i_15 - 1] [i_15 - 1]) ? ((var_10 ? 48419 : var_15)) : (arr_49 [i_17] [i_15] [i_16] [i_17]))), (arr_52 [i_14] [i_14] [i_18] [i_17] [1])));
                                var_30 = 5143790514881331064;
                                var_31 = (max(var_31, ((((((arr_48 [i_17] [i_15 - 1]) * -32765)) >> var_3)))));
                                var_32 -= ((-(max((arr_39 [i_15 - 1] [i_16]), (arr_49 [i_17] [i_18 + 1] [i_18 + 2] [i_18])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                var_33 = (((var_14 == 6813346844223178102) ? var_12 : ((0 ? 10012 : 8160))));
                                var_34 = (min(var_34, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
