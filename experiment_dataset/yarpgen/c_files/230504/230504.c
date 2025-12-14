/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((~((((var_0 ? var_10 : 216)) | ((var_3 ? var_12 : var_2))))));
                                var_14 *= (!16963714454005053219);
                                arr_13 [i_0] = 1;
                                var_15 = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 = ((max(-9223372036854775791, -9223372036854775791)) - 1);
                                arr_21 [i_0] [i_0] [i_5] [i_5] [i_6] = ((((((((var_2 ? var_3 : var_3))) ? ((var_12 ? var_4 : var_3)) : (max(var_0, -9223372036854775794))))) ? (((~(!var_8)))) : ((((max(var_11, 21083))) ? (!49805) : ((var_6 ? 9223372036854775790 : var_0))))));
                                arr_22 [i_0] [i_1] [i_0] [i_0] [i_5 - 2] [i_0] [i_5 + 2] |= ((211 ? (!1) : (-6810259124863261102 && 1001691545)));
                                var_17 = ((-((1 ? 1 : 11638212881695575290))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_8, (((((1 ? -1001691545 : var_2))) ? (var_1 - 0) : ((var_3 ? var_6 : 6327955258158216389))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_18 = (((var_11 ? 1 : (!var_6))));
                                var_19 = (max(var_19, var_3));
                                arr_32 [i_0] [i_0] [i_2] [i_7] [i_0] = -2147483636;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 8;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_49 [i_9] [i_10] [i_10] [i_9] [i_9] [i_12] = ((11638212881695575317 ? var_12 : 0));
                                var_20 = var_5;
                                var_21 = var_6;
                                var_22 = 65535;
                                var_23 &= (!var_11);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 6;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_24 |= ((var_4 ? ((8727373545472 ? ((7429203398566452715 ? var_0 : var_1)) : var_12)) : ((((!(((var_8 ? var_4 : var_12)))))))));
                                var_25 = var_7;
                                arr_54 [i_14] = (((((var_12 % var_11) ? 6808531192013976342 : (var_12 ^ var_9)))) ? ((((!11017540675143098927) ? ((var_1 << (9053 - 9053))) : var_6))) : ((var_1 ? 6808531192013976342 : (~var_3))));
                                arr_55 [i_9] [i_9] [i_11 - 2] [i_14] [i_15] = (((((-(0 < var_7))) + 2147483647)) >> (var_6 - 6555963720339504208));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 8;i_17 += 1)
                        {
                            {
                                arr_61 [i_9] [i_9] = ((~((((var_0 ? var_11 : var_1)) | 6108447916178943900))));
                                var_26 = (((~var_2) ? (((((1 ? var_6 : var_2))) ? ((-993526312668391197 ? var_12 : var_11)) : ((var_12 ? 11017540675143098900 : var_4)))) : var_12));
                                var_27 = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 9;i_19 += 1)
                        {
                            {
                                arr_67 [i_9] [i_9] [i_10] [i_11 + 1] [i_18] [i_19] = ((((min(-1, (max(var_4, var_4))))) ? ((((var_0 + var_1) ? 2147483624 : (var_1 || 1)))) : (((((var_8 ? var_0 : var_11))) ? (var_12 | 11638212881695575290) : (((min(var_8, var_10))))))));
                                arr_68 [i_9] [i_10] [i_11] [i_18] [i_19] = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 9;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                arr_76 [i_9] [i_10] [i_10] [i_9] = (((((~(min(var_3, var_9))))) ? ((((1 ? 95 : 8)) + (((var_8 ? var_3 : var_9))))) : ((min(var_6, (~var_1))))));
                                var_28 *= ((((var_0 ? var_5 : (!1483029619704498399)))) || ((((!var_10) ? 1 : (103 || var_12)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
