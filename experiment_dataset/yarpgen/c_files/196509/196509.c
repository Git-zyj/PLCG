/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = -1;
                            var_10 = (((((1807109427 ? -15696 : 1))) + var_1));
                            arr_11 [i_0] [i_2] [i_1 + 2] [i_0] = (((max(var_2, var_1)) << (65534 - 65527)));
                            arr_12 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] = (max(((min(2487857869, -32760))), ((((3 | var_8) >= (((min(var_4, 1)))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_11 = var_9;
                                arr_21 [i_0] [i_0] [i_4] = (min((((var_1 ? var_6 : 2487857880))), var_6));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_29 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] [i_8] = ((-(min(var_3, (((var_6 ? -1 : 2487857869)))))));
                                var_12 = 2487857869;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_13 = var_7;
                            arr_36 [i_0] [1] [i_0] [1] [i_0] = var_6;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                arr_50 [i_13] [i_12] [i_14] [i_13] [i_13] [i_12] [i_12] = (min(((min(((2487857869 ? -1 : var_1)), ((4294967278 >> (576460750155939840 - 576460750155939835)))))), var_8));
                                var_14 = var_7;
                                var_15 = ((~((-18923 ? var_8 : 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_16 ^= (max((min(var_9, 2487857869)), 511));
                                var_17 &= var_6;
                                var_18 = (min(524287, 0));
                                arr_58 [i_12] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 3; i_19 < 19;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 22;i_23 += 1)
                        {
                            {
                                var_19 = ((((max(-var_4, (min(var_2, 4294967272))))) ? (max(576460750155939829, ((4294443009 ? 25046 : 576460750155939814)))) : var_1));
                                var_20 = (max(var_20, ((((((((min(31028, var_8))) ? -1 : var_1))) ? (0 > var_9) : ((1 ? 63 : 1807109427)))))));
                                arr_70 [i_19] [i_19] [i_19] [i_21] [1] [i_19] = ((((1 ? 0 : 4294967295))) ? -1 : (((-127 - 1) - var_4)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 22;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 22;i_26 += 1)
                        {
                            {
                                var_21 ^= 576460750155939836;
                                arr_80 [i_19] [i_19] [i_24] [i_19] [i_19] = ((((max(((0 ? var_2 : 576460750155939845)), ((max(7680, 127)))))) ? -7252528983917750179 : (((9223372036854775807 ? ((var_3 ? var_1 : var_0)) : var_1)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_27 = 3; i_27 < 21;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 22;i_28 += 1)
                    {
                        {
                            var_22 = (min((((((var_7 ? 8 : -2147483642))) ? (min(1, var_8)) : (!-576460750155939841))), -var_5));
                            arr_87 [1] [1] [1] [i_19] [i_28] = var_9;
                            arr_88 [1] [i_19] [i_27] [i_27] [i_27] = (-((max(2020, var_0))));
                            arr_89 [i_19] [i_19] [i_19] [i_28] [i_20] = ((3044 ? ((((max(25958, var_7))) ? (min(9600, var_2)) : var_5)) : (((((var_6 ? -4 : 127))) ? ((var_1 ? var_4 : var_3)) : (((0 ? var_1 : 126)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_29 = 2; i_29 < 13;i_29 += 1)
    {
        for (int i_30 = 0; i_30 < 16;i_30 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 16;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 16;i_32 += 1)
                    {
                        {
                            var_23 = (min(3044, -17));
                            var_24 = ((-1 ? -0 : ((0 ? 1 : 3024))));
                            var_25 = (min(var_25, 1));
                            arr_100 [i_29] [i_30] [1] [i_29] = (min(((127 ? ((0 ? 1787082876 : var_1)) : (!var_6))), ((((((24 ? var_8 : 4294967270))) ? var_0 : ((min(8192, -20314))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_33 = 0; i_33 < 16;i_33 += 1)
                {
                    for (int i_34 = 2; i_34 < 14;i_34 += 1)
                    {
                        {
                            var_26 = (var_8 | 65535);
                            arr_107 [i_29] [i_29] [i_29] [1] [i_29] = 511;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_35 = 0; i_35 < 18;i_35 += 1)
    {
        for (int i_36 = 0; i_36 < 18;i_36 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 18;i_37 += 1)
                {
                    for (int i_38 = 0; i_38 < 18;i_38 += 1)
                    {
                        {
                            var_27 *= ((((max((min(var_2, 23)), 18117))) ? ((var_5 ? var_7 : 18117)) : ((((min(var_6, -18132))) ? var_4 : ((min(var_6, 1)))))));
                            var_28 = (max(9223372036854775807, ((min(1, 0)))));
                            var_29 = ((!(((7 ? (((max(var_4, 1)))) : ((var_1 ? 9223372036854775807 : var_7)))))));
                            arr_118 [6] [i_37] [i_36] [15] [i_35] [i_35] = (min(-8091301109430284896, 0));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_39 = 2; i_39 < 17;i_39 += 1)
                {
                    for (int i_40 = 1; i_40 < 17;i_40 += 1)
                    {
                        {
                            var_30 = (max(-22495, -777536372));
                            arr_127 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] = (max((min((((var_0 ? 1 : var_1))), var_2)), (18120 + var_0)));
                            var_31 = (~var_8);
                            var_32 = (max(var_32, var_2));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
