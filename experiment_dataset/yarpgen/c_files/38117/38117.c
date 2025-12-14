/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_0] = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = var_6;
                            var_19 = ((((((arr_8 [i_0] [i_1 + 2] [i_2] [i_2]) ? var_6 : (arr_8 [i_0] [i_1 + 2] [i_0] [i_0])))) ? ((~(-2147483647 - 1))) : (arr_8 [i_0] [i_1 + 2] [i_0] [12])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_5] = (max(var_6, (arr_1 [i_1] [i_1])));
                            var_20 += max((var_10 | 2147483647), (min((arr_1 [i_0] [i_5]), (arr_8 [i_1] [i_1 + 1] [i_1 - 1] [5]))));
                        }
                    }
                }
                var_21 = ((((((arr_1 [i_0] [i_0]) ? 2147483639 : (arr_8 [i_0] [i_0] [11] [i_0])))) ^ ((var_15 ? (arr_14 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 + 1]) : (min(581368016966826773, (arr_8 [i_0] [i_0] [i_1] [i_1])))))));
                var_22 = (arr_0 [i_0] [i_1 - 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_23 &= ((((((arr_10 [i_6]) ? var_7 : (arr_12 [i_6 + 2] [i_6 + 2] [i_7] [i_6] [i_6])))) ? 0 : (arr_16 [20])));

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_24 = (max(var_24, 18446744073709551615));
                                var_25 ^= (min((min((min((arr_0 [i_9] [i_8]), 18446744073709551613)), (((arr_21 [i_9] [i_8] [i_9]) + var_5)))), -6946556693508501858));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_26 = (max(var_26, (arr_14 [i_12] [6] [i_8] [21] [9])));
                                arr_33 [8] [i_7] [i_12] [8] [i_6] [i_6 - 1] = var_16;
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_27 *= (max((((min((arr_30 [i_6] [18] [18] [18] [i_6] [i_13]), var_12)) - (min((arr_23 [i_13] [i_6]), var_5)))), (arr_16 [2])));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_41 [i_6] [3] [i_13] [i_7] [i_6] = var_12;
                                var_28 ^= ((((min((arr_19 [i_15] [i_13]), (arr_19 [7] [i_7])))) ? (((((arr_31 [i_6] [i_7] [i_13] [i_13] [i_14] [i_13]) / 2147483647)) | (((arr_25 [i_14] [i_14] [i_14] [i_7] [i_14]) ? 2147483647 : (arr_2 [i_6 + 1]))))) : 4260607557632));
                                var_29 ^= (arr_6 [i_13] [i_7] [11]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            {
                                var_30 = var_17;
                                arr_48 [i_6] [i_7] = (arr_37 [i_6] [i_7] [14] [i_13] [i_16] [14]);
                                var_31 ^= ((((max(32765, (arr_8 [i_17] [i_16 - 1] [i_13] [i_6 + 3])))) ? ((min((arr_26 [18]), (arr_26 [14])))) : ((((max(var_7, (arr_40 [i_6] [i_7] [i_13] [i_16] [2])))) ? (((((arr_45 [i_6 + 1] [2] [i_17]) != var_13)))) : var_6))));
                            }
                        }
                    }
                    arr_49 [i_6] [i_7] [i_6] [i_6] = (arr_28 [i_6] [i_13] [i_13] [i_7]);
                    arr_50 [10] |= (var_9 ? -32765 : ((((arr_34 [i_6] [8] [i_13]) <= var_8))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 8;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 4; i_20 < 9;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 8;i_21 += 1)
                    {
                        {

                            for (int i_22 = 0; i_22 < 10;i_22 += 1)
                            {
                                var_32 -= (arr_29 [i_18] [i_18] [i_18 - 2] [i_18] [i_18 + 1] [i_18]);
                                var_33 = 1454995875;
                                arr_64 [6] [6] [i_20] [6] [i_18] [2] [i_18] = (max(((((arr_26 [i_18]) == var_7))), (((arr_26 [i_18]) ? (arr_26 [i_18]) : (arr_26 [i_18])))));
                                var_34 += -32765;
                            }
                            var_35 = arr_38 [3] [23] [i_20] [3] [i_18] [i_18];
                            var_36 |= arr_2 [i_18 + 1];
                        }
                    }
                }
                arr_65 [i_18] [i_18] = (arr_8 [i_19] [i_19] [i_19] [i_19]);
                var_37 &= -2147483645;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 10;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 9;i_24 += 1)
                    {
                        {
                            var_38 = (min(var_38, 10));
                            var_39 += (max(2147483639, 32765));
                            arr_72 [i_18] [i_18] = ((((((arr_8 [i_18 + 2] [i_18 - 1] [i_18] [i_18 + 2]) ? var_6 : var_4))) ? (arr_22 [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18 - 2]) : (arr_22 [i_18 + 2] [i_18 - 1] [i_18] [i_18 - 1])));
                            var_40 = min((((arr_3 [i_19] [i_19]) ? (var_1 != var_7) : (((arr_9 [i_18] [i_19] [19] [i_19]) ? (arr_3 [i_23] [12]) : (arr_44 [i_18] [i_19] [i_18] [i_19]))))), (((((min((arr_8 [i_18] [i_19] [i_18] [5]), (arr_3 [i_18] [i_23])))) ? var_13 : (arr_30 [i_24 - 1] [23] [i_23] [i_18 + 2] [i_18] [i_18 + 2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
