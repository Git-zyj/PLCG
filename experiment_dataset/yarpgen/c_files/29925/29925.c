/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_0 - 1] [i_0 - 1] = ((((!(((var_4 << (((arr_3 [i_0] [i_0]) - 1998093250318575602))))))) ? ((32754 ? (arr_1 [i_1]) : (arr_1 [i_1 - 1]))) : ((((122 >= 32754) != ((min((arr_1 [i_0 - 1]), (arr_1 [i_0])))))))));

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] = ((~(((((-9223372036854775807 - 1) % 18446744073709551612)) % (arr_7 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] = (((((((var_1 ? var_8 : var_3))) ? (max(-32755, 0)) : ((((!(arr_3 [i_0 - 1] [i_3 + 3])))))))) ? ((1 ? ((max(var_9, var_9))) : ((~(arr_9 [i_0] [3] [i_0] [i_4]))))) : 1855112429);
                                arr_14 [i_0] [i_4] [18] [i_3] [i_3] &= 9223372036854775807;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_0 - 1] [i_2] [i_2] [i_0] [8] = (((var_5 ? ((32763 ? var_6 : (arr_16 [i_6] [i_5 + 2] [i_1] [i_1]))) : (arr_17 [i_1 + 1] [i_1 + 1] [23] [20]))));
                                var_11 = (!var_0);
                            }
                        }
                    }
                    var_12 = ((-(max((((!(arr_16 [i_0] [i_2 - 1] [i_1] [i_0])))), (min((arr_7 [i_2 - 2]), var_9))))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_13 |= (((arr_0 [i_0 - 1]) < var_9));
                                arr_29 [6] [i_8] [i_7 - 1] [18] [18] &= arr_20 [i_7] [i_8] [i_0] [i_7] [i_7] [i_0] [i_0];
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_14 *= var_9;
                        var_15 = (arr_23 [i_0 - 1]);
                        arr_32 [i_10] [i_10] [i_7] [i_10] [i_10] [i_7 + 2] = ((arr_4 [i_0] [i_0 - 1] [i_0 - 1]) / (113 | 149));
                    }
                    var_16 = arr_3 [i_0] [i_0 - 1];
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_17 = -var_0;
                                var_18 = (~(arr_28 [i_0] [i_0] [10] [0] [i_11 - 1] [i_0]));
                                var_19 = var_4;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_20 = (((arr_21 [1] [i_14] [i_13] [i_0] [i_0]) * (((!((((-127 - 1) | -1366158802))))))));
                                var_21 = (((arr_31 [i_0] [i_1] [i_15 + 1]) ? ((var_4 | (arr_6 [i_0] [i_1 + 1] [i_13]))) : (((((min((arr_6 [i_0 - 1] [i_1] [i_0 - 1]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) < (var_0 || -32755))))));
                                arr_45 [i_0] [i_0] [i_13] [i_14] [i_15] &= (((min(var_4, (!1855112429))) ? ((((arr_20 [i_15] [i_14] [i_14] [i_13] [i_13] [i_1] [i_0]) == var_0))) : (((!(((~(arr_37 [i_14] [i_13] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            {
                var_23 = (arr_23 [i_16]);
                arr_52 [i_16] [i_16] [8] = (min((((!((!(arr_39 [i_17] [i_17] [i_16])))))), (arr_40 [i_17] [2] [i_16] [i_16] [i_16])));
                var_24 = ((((min(-24, (arr_44 [i_16] [i_16] [i_16] [i_16] [i_16])))) ? 9223372036854775799 : ((((!8932515711214499838) << ((((var_8 ? (arr_50 [15]) : var_2)) - 730870497)))))));
            }
        }
    }
    #pragma endscop
}
