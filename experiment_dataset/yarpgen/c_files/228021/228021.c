/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [6] [i_4] = (min(75, var_16));
                                arr_16 [i_0] [1] [i_2] [1] [i_4] = ((var_4 >> (var_13 == var_7)));
                                arr_17 [i_3] [i_1] [i_4] [i_3] [i_0] [i_3] [i_1] = ((((min(81, 241))) || (((1 ? 1 : var_9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] [i_1] = (min(var_11, (var_9 ^ var_11)));
                                arr_24 [i_0] [i_5] [i_2] [i_1] [i_2] [i_2] [i_0] = 9223372036854775807;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_31 [i_8] [i_1] [i_2] = (((!((min(var_9, 17))))));
                                arr_32 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8] = -4593806689881257762;
                                arr_33 [i_1] = ((var_13 >> ((((1 ? var_16 : var_4)) - 16179))));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((max(var_7, -9223372036854775805))) && -47)) ? var_5 : ((((max(var_14, var_5))) ? var_9 : 576460752303407104))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [i_2 - 1] [i_9] [i_10] = (((max(var_8, (var_16 < var_7)))));
                                arr_42 [i_10] [i_9] [i_2] [i_0] = ((-(var_4 == var_12)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 4; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 11;i_15 += 1)
                        {
                            {
                                arr_55 [i_12] [i_14] [i_13] [i_14] [i_15 + 2] [i_13] = ((17870283321406144516 ? 17870283321406144520 : var_15));
                                arr_56 [i_11] [i_12] [i_13] [i_13] [i_14] [i_15] [i_15] = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                arr_61 [i_16] [4] &= (max(var_1, ((var_11 ? ((var_1 ? var_7 : var_11)) : (0 < 1)))));
                                arr_62 [i_16] [i_16] [i_16] [1] [i_16] |= (-9223372036854775807 - 1);
                                arr_63 [i_13] [i_16] [i_16] [i_13] [i_13] [i_12 + 2] [i_13] = (min(((898687926488893205 ? var_4 : var_11)), var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        for (int i_19 = 2; i_19 < 9;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            arr_75 [i_18] [i_20] [i_19] = (((var_13 < 34186) & var_7));
                            arr_76 [i_20] [i_20] = (((var_12 ? (var_1 || var_3) : (8089046969388160818 && var_13))));
                            arr_77 [i_18] [i_20] [i_18] [i_21] = (((898687926488893205 * 1) - (~var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 13;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        {
                            arr_84 [i_18] [i_19 + 3] [i_18] = var_13;
                            arr_85 [i_18] [i_22] [i_22] [i_23] = var_9;
                            arr_86 [i_22] [i_19] [i_22] [i_23] [i_19] [i_22] = ((var_7 <= ((((44 * var_3) << (16715175493780622885 - 16715175493780622870))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 20;i_24 += 1)
    {
        for (int i_25 = 1; i_25 < 18;i_25 += 1)
        {
            for (int i_26 = 2; i_26 < 18;i_26 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_27 = 1; i_27 < 19;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 20;i_28 += 1)
                        {
                            {
                                arr_101 [i_25] [i_28] = ((-(min(((min(var_16, (-127 - 1)))), (var_5 + 165)))));
                                arr_102 [i_25] [i_25] [i_24] [i_25] [i_24] = (((min(0, var_11)) << (-898687926488893206 + 898687926488893235)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 20;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 20;i_30 += 1)
                        {
                            {
                                arr_108 [i_29] [i_25] [i_30] [i_25] [i_29] [i_30] [i_29] = var_1;
                                arr_109 [i_25] [i_29] [i_25 + 1] [i_26 + 2] [i_25 + 1] [i_25] [i_25] = (max((((((-40 ? var_7 : 140))) ? var_7 : var_14)), (((min(543080323, var_13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
