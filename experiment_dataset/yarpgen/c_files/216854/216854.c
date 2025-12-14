/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_10 = ((!(((((var_0 ? (arr_10 [i_0] [i_0]) : 15)) & ((42630 ? 42630 : -29737407407012090)))))));
                            var_11 &= var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_12 = var_2;
                            var_13 = ((((min(22907, 0))) ? (max(var_6, var_0)) : ((min(var_3, (arr_7 [4] [i_4 - 1] [i_4 - 1]))))));
                            var_14 = var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_15 = ((-(arr_1 [i_0])));
                            var_16 = 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_17 = 23057;
                            var_18 = var_5;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_19 ^= ((-23051 ? 18 : 3082));
                                var_20 = (~var_9);
                                var_21 = (-62183 & (((arr_26 [i_11 - 1] [i_11] [i_11 + 2] [i_11 - 1]) ? (arr_4 [i_10] [i_10]) : ((var_5 ? (arr_25 [i_14] [i_13 - 1] [12] [24] [2] [i_10]) : var_7)))));
                                var_22 += ((((min((((var_1 ? (arr_33 [i_11] [i_13 - 1] [i_14]) : var_1))), (arr_19 [i_13] [i_13 + 2] [i_14] [i_13 + 3])))) ? (arr_22 [i_10] [i_13 - 2] [i_12]) : (~8032324842341252075)));
                                var_23 = ((((min((!var_7), (arr_33 [i_13 - 1] [i_11 - 1] [i_12])))) ? (max((arr_7 [i_11 + 2] [i_11 + 2] [i_11]), ((var_2 ? -597711026 : 1)))) : (max(var_6, (var_2 ^ 0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_24 = ((-((((((arr_8 [i_12]) ? var_7 : (arr_29 [i_12]))) < ((max(122, var_0))))))));
                                var_25 = ((-29737407407012075 / 1) ? ((var_1 - (arr_25 [i_10] [i_10] [i_11 + 1] [i_10] [i_16 + 3] [15]))) : var_6);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            {
                                var_26 -= (min((max(var_4, var_7)), (((!(1107316538365973346 < 29737407407012079))))));
                                var_27 = (max(((((arr_40 [i_10] [i_10] [i_11 - 1] [17] [i_12]) && -2108477042))), (max(var_3, var_5))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 3; i_19 < 19;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 21;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        for (int i_23 = 3; i_23 < 20;i_23 += 1)
                        {
                            {
                                var_28 = (((((min(18446744073709551613, -121))) ? (arr_24 [i_19 - 3] [i_21 - 2] [i_23]) : ((min(1, -961))))) < ((max((15872 <= var_1), -953))));
                                var_29 = var_6;
                                var_30 = ((!((max(((var_1 ? 15 : var_8)), (~46))))));
                                var_31 = ((~((~(-9223372036854775807 - 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 23;i_25 += 1)
                        {
                            {
                                var_32 = ((~(max(30719, 25))));
                                var_33 = (min(var_33, (((var_7 ? ((var_5 ? (var_5 - -121) : var_3)) : (63 != -23050))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 2; i_26 < 22;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 23;i_27 += 1)
                        {
                            {
                                var_34 = (max(var_0, (var_7 == var_3)));
                                var_35 = (arr_67 [i_26 - 2] [i_26 + 1] [1] [i_26] [i_26 - 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 23;i_29 += 1)
                        {
                            {
                                var_36 = ((!((((arr_68 [i_19 - 1] [i_21 + 1] [i_21 + 1] [i_19 - 1] [i_29] [i_29]) ? (arr_68 [i_19 - 3] [i_21 + 2] [i_28] [i_29] [i_28] [i_29]) : var_0)))));
                                var_37 = ((var_7 + (0 && 23051)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 23;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 23;i_31 += 1)
                        {
                            {
                                var_38 = var_6;
                                var_39 = ((~(19 == 268435455)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
