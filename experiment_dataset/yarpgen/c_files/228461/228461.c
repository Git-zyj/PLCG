/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((min(1, var_9)) ? var_2 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = 1;
                var_15 -= (min((((arr_0 [i_0]) | (arr_0 [i_1]))), 1));
                var_16 = var_3;
                var_17 |= (max((arr_4 [4]), (((arr_3 [i_0] [i_1]) ? var_4 : (arr_3 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_10 [16] [8] [10] &= (!996340614);
                arr_11 [i_2] = (min(((max(1, 77))), (((((12682 ? 2474610046 : 1))) ? (!var_1) : ((var_7 ? var_11 : (arr_7 [i_2])))))));
                var_18 = ((var_0 | (~var_13)));

                for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_2] = (min(((((arr_12 [i_4 + 2] [i_2] [i_2] [i_2]) && (arr_12 [i_2] [i_3 + 1] [i_4] [i_2])))), -4294966784));
                    var_19 = ((((min(var_8, var_9))) == (((var_9 ^ 1) ? 1008 : 1))));
                }
                for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_20 = ((var_4 ? ((max((arr_8 [i_3 + 1]), 50))) : ((~((var_9 ? var_4 : var_0))))));
                                var_21 = (-1 & var_12);
                                var_22 = ((((-((var_0 ? (arr_20 [i_2] [i_2] [i_2] [8] [i_2] [i_2] [12]) : var_2)))) == (((1733536314 ? -8590602612617881594 : 1)))));
                                arr_22 [2] [i_3] [i_2] [i_3] [i_2] = (((-(arr_12 [i_5 - 3] [i_5 - 3] [i_5] [i_5 - 2]))));
                            }
                        }
                    }
                    arr_23 [i_2] [i_3] [i_2] [i_2] = (((min((-2147483647 - 1), var_9)) + var_0));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_28 [i_2] [i_8] [7] [i_3 + 1] [i_2] = (max((((arr_18 [i_2] [i_3] [i_3 + 2] [i_2]) ? (arr_9 [i_3 - 1]) : var_1)), (arr_9 [i_3 - 1])));
                                arr_29 [i_2] [i_2] = ((2147483647 ? (-2147483647 - 1) : 1));
                                arr_30 [2] [2] [i_2] [i_2] [i_8] [i_8] [14] = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                arr_35 [i_2] [i_3 + 2] [i_5] [i_10] [12] [i_3 + 2] &= var_12;
                                arr_36 [i_2] [4] [4] [9] [9] [i_11] [i_11] = (max((((var_5 != (arr_14 [i_11 + 1])))), var_4));
                                var_23 = (arr_26 [i_2] [i_3] [i_5] [i_10] [i_11]);
                            }
                        }
                    }
                    arr_37 [i_2] [15] [i_2] = ((!((min(var_11, (arr_31 [i_2] [3] [i_3] [i_3 + 1] [i_5 + 1]))))));
                }
                for (int i_12 = 3; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    var_24 = (arr_6 [i_3]);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_47 [i_14] [i_2] [9] [i_12] [i_2] [i_2] = ((((min(77, 1))) & (12080 || var_6)));
                                var_25 = (arr_19 [i_2] [i_12 + 2]);
                            }
                        }
                    }
                }
                for (int i_15 = 3; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 15;i_17 += 1)
                        {
                            {
                                var_26 = (var_2 - var_12);
                                var_27 = ((-(((!(arr_24 [i_3 + 2] [i_15 + 1] [i_15 - 1] [i_2] [i_3 + 2]))))));
                            }
                        }
                    }
                    arr_56 [i_15] [i_2] [i_2] [i_2] = ((((max(54334, 1))) > (~56)));
                    arr_57 [4] [i_2] = min(0, -843106267705995065);
                }
            }
        }
    }
    #pragma endscop
}
