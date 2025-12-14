/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((var_12 ? (var_9 + var_4) : var_2));
                arr_5 [i_0] [i_1] = (var_6 - var_2);

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 |= ((var_13 << (var_12 - 27268)));
                                var_17 = ((var_9 ? ((var_4 >> (var_5 - 26))) : (((((((var_9 ? var_8 : var_0))) || (((var_5 ? var_8 : var_10)))))))));
                                var_18 = (((var_1 == var_7) + (var_6 / var_4)));
                                arr_12 [i_3] [i_3] [i_3] [i_0] = ((-((24 ? ((var_2 ? -415993526 : var_3)) : var_12))));
                            }
                        }
                    }
                    var_19 = 50119;
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_20 = (((var_7 + var_12) >> ((((var_13 ? var_4 : var_6)) - 2567305580))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = ((((var_5 ? (var_10 || var_11) : var_11)) != (((var_2 >> ((var_0 >> (var_9 - 38162))))))));
                                arr_21 [i_1] [i_0] [i_5] [i_1] = (min(((var_13 ? var_7 : var_12)), (((((-1758750627 + var_9) + 2147483647)) << (((-var_3 + 19) - 18))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_22 = (var_10 - var_5);
                                var_23 = (var_3 != var_0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_24 *= 2588030355;
                                arr_36 [i_0] [i_0] [i_0] [i_11] [i_12] = var_12;
                            }
                        }
                    }
                    arr_37 [i_0] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
