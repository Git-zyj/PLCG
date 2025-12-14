/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_3 + 2] [i_4 - 4] = ((var_11 ? var_6 : ((var_16 / (((var_6 ? var_5 : var_12)))))));
                                var_19 = (((((var_10 ? var_8 : var_0))) & (max(var_16, var_11))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] [i_1] [i_5] [i_5] [i_1] = ((var_14 + (((var_3 ? var_8 : var_15)))));
                                arr_27 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_5] [i_0 + 1] = var_12;
                                var_20 = (max(var_20, 24318));
                                var_21 = (((var_18 ? ((var_14 ? var_15 : var_11)) : ((var_11 ? var_3 : var_7)))));
                                var_22 -= (((((1 ? -29498 : 116))) ? 26994 : 0));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((var_6 <= var_7) ? (!var_1) : var_9)))));
                                var_24 = ((65535 ? 14 : 24318));
                                var_25 = (var_0 & var_17);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_26 = ((~(var_1 >= var_2)));
                                arr_45 [i_13] = ((4237618028 ? 366107984 : 2534159778));
                                var_27 = (((((var_16 ? var_9 : var_13))) ? var_11 : ((var_10 ? (((var_9 ? var_2 : var_17))) : var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_28 = (max(var_28, ((((var_0 ? (var_15 ^ var_0) : var_1))))));
                            var_29 = (((((26 ? 7320722086181354297 : (31803 >> 27)))) && (((var_13 ? var_17 : var_1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        {
                            var_30 ^= ((17735 ? (((((var_6 ? var_0 : var_1))) ? var_11 : var_6)) : var_4));
                            var_31 &= ((((~var_4) ? var_5 : var_0)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 18;i_20 += 1)
    {
        for (int i_21 = 4; i_21 < 15;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 17;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 15;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 18;i_24 += 1)
                        {
                            {
                                var_32 = (min(18113, 33731));
                                arr_74 [i_20] [i_20] [i_20] [i_22 + 1] [i_23 + 2] [i_23] [i_24] = ((((((((var_9 ? var_18 : var_1))) ? ((var_6 ? var_2 : var_2)) : var_4))) ? var_3 : ((max(var_13, ((var_15 ? var_1 : var_5)))))));
                                var_33 *= ((((((!var_14) & var_6))) ? (!var_1) : (min((var_17 + var_3), ((var_17 ? var_10 : var_16))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 18;i_26 += 1)
                        {
                            {
                                arr_82 [16] [i_25] [i_25] = ((4227129972 ? 236 : 167));
                                arr_83 [i_25] [i_25] [i_25] [i_25] [i_26] = ((var_13 + ((var_0 - ((-47 ? -26 : 1))))));
                                var_34 = (((!var_13) ? 39559 : (((!(((8 ? 1 : -52))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 18;i_28 += 1)
                        {
                            {
                                arr_89 [i_27] = ((min(var_2, var_11)));
                                var_35 = var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 4; i_29 < 16;i_29 += 1)
                    {
                        for (int i_30 = 1; i_30 < 16;i_30 += 1)
                        {
                            {
                                arr_95 [i_20] [i_21] [i_22 + 1] [i_30 - 1] = var_18;
                                arr_96 [i_21] [i_21] [i_21] [i_21 - 1] [i_21] = (((((((var_2 ? var_0 : var_8))) || var_1)) ? (((var_2 ? var_6 : var_5))) : (!var_7)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 18;i_31 += 1)
                    {
                        for (int i_32 = 0; i_32 < 18;i_32 += 1)
                        {
                            {
                                var_36 = (((var_6 ? var_8 : var_16)));
                                var_37 = (((((var_7 ? var_5 : var_8))) ? ((var_4 ? var_2 : var_0)) : (((var_2 + 2147483647) << (((var_2 + 1631020162) - 17))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
