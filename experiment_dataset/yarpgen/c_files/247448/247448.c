/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 = (var_5 & var_5);
                                arr_14 [i_0] [9] [i_2] [i_3] [i_2] [i_2] = ((((var_3 << (var_13 - 14741930952745405239))) << (var_8 - 890048401)));
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_3] = ((((((var_10 >> (var_9 - 2461236818550711823)))) && var_5)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_5] [i_6] [i_7] = (var_5 / var_13);
                                var_17 = var_6;
                            }
                        }
                    }
                }
                var_18 = (min(var_18, var_0));
                var_19 = (max(var_19, (((var_5 > (((var_2 >= var_4) - ((var_13 >> (var_8 - 890048349))))))))));
                var_20 -= (((var_6 | var_5) | (var_2 >> 15)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            {
                var_21 ^= (var_12 < var_13);
                var_22 = var_3;
            }
        }
    }
    #pragma endscop
}
