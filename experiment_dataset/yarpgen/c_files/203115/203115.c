/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, var_4));
                                arr_14 [i_1] [i_3] = 2147483647;
                                arr_15 [i_1] [i_3] [i_2] [i_3] [i_2] [i_2] = (~-var_10);
                            }
                        }
                    }
                    var_14 &= var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_15 = var_8;
                                var_16 = ((var_1 ? ((var_2 ? -26 : 22281)) : -27));
                            }
                        }
                    }
                    var_17 = -2147483647;
                    arr_23 [i_0] &= (~((((var_0 + var_8) != var_11))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_18 *= (-2147483647 - 1);
                            var_19 = (min(var_19, -26));
                            var_20 = ((-((-((var_3 ? var_2 : -127))))));
                        }
                    }
                }
                arr_34 [i_8] = (-2147483647 - 1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 21;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max(var_8, (((var_2 * var_10) / var_1)))))));
                                var_22 = (min((((-2147483647 - 1) | 1)), ((2 ? var_3 : 1))));
                                var_23 = ((var_1 ? (var_8 | var_7) : (((var_5 ? (-2147483647 - 1) : 20007)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            {
                                var_24 ^= ((var_3 == (((!(var_5 - 1))))));
                                var_25 = var_3;
                                var_26 &= 1;
                                arr_51 [i_11] [i_11] [i_13] [i_13] [i_17] = ((var_9 % (1 && 29)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_27 = ((max(var_9, 480)));
                                var_28 *= ((!(var_1 && 9223372036854775799)));
                                var_29 ^= (-(((1 != ((var_3 ? var_2 : 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
