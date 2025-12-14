/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = -20102;
                    arr_9 [i_0 + 3] [i_1] [i_1] = -1;
                    arr_10 [i_0] [i_0 + 3] [i_0] [i_0 + 3] = (((arr_0 [i_2 + 4]) != (72057044282114048 ^ var_5)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_20 [i_3] [8] [i_4 + 2] [i_3] = (((var_10 + var_6) + ((((arr_14 [i_4 - 2] [i_4 - 1]) + (arr_12 [i_3 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_16 = -1;
                                var_17 = ((((max(-67, -67))) + (((var_14 + var_9) - (((arr_15 [i_3] [i_3]) - var_5))))));
                                arr_26 [i_3] [i_6] [i_3] [i_4 - 1] [i_3] [i_3] [i_3] = ((((1 & ((((arr_17 [i_3] [i_3]) >= var_10))))) > 562812514467840));
                                var_18 -= ((var_0 ? (((213 ? var_8 : var_11))) : (max(15, var_14))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_33 [8] [i_4] [8] [0] [8] &= (arr_25 [i_3] [i_4] [i_5] [i_4] [i_5]);
                                arr_34 [6] [6] [i_3] [6] = (min((((65535 <= (-17199 & var_5)))), 77));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
