/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [8] [8] [i_2] [i_3] = -var_11;
                            arr_10 [i_0 - 1] [i_1] [i_2 - 1] [i_3] [i_1 + 1] = max(var_6, var_11);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = var_2;
                                var_18 = var_5;
                                var_19 *= ((((min(2039, 65512))) * (var_13 / -1)));
                            }
                        }
                    }
                }
                var_20 += (min((((-10 + var_8) / 62)), (max(-70, 10))));
            }
        }
    }
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_22 = (min(var_22, ((max((((!((max(var_7, 39)))))), (min((~10), -62)))))));
                var_23 = var_15;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_31 [i_7] [17] [17] [17] [i_10 - 1] = (min(((min((var_8 <= var_11), 1))), (max((max(59, 10)), (var_11 - 65535)))));
                            arr_32 [i_7] [i_8] [12] [12] [i_9] [i_8] = (0 - var_14);
                            arr_33 [21] [i_8] [i_8] [i_9] [i_7] = (0 != 0);
                            arr_34 [i_7] = var_7;
                            arr_35 [4] [i_8] [i_7] [i_10 - 4] = (max(((0 * (0 ^ 857259531400065727))), ((((var_9 ^ 1) ^ (!var_7))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            {
                var_24 += (((((10861581297277163938 == (3 - 1073741823)))) | 1));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_47 [i_12] [14] [19] [19] = 69;
                            var_25 = (var_15 & -126);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_57 [i_17] [i_12] [i_12] [i_16] [i_16] [i_12] [14] = (((((max(-1, var_14)) ^ (var_5 / 1046344917))) == (((0 & ((min(var_5, 70))))))));
                                var_26 += 7585162776432387677;
                                var_27 = (max(var_27, (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
