/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 -= ((!127) & (((var_10 < (~var_6)))));
                                var_14 ^= (((((var_7 <= var_6) - (~var_9))) * (var_12 < var_1)));
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_4 - 3] [i_4] [i_4 - 1] = ((-(var_11 < var_12)));
                                var_15 = ((!var_8) - ((1010048118 - (-127 - 1))));
                            }
                        }
                    }
                    arr_15 [i_1 + 2] [i_2] = ((~var_11) << (var_12 - 46970));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_16 = ((~(2480983163763713238 - 2480983163763713216)));
                    arr_25 [i_5] [i_5] = var_11;
                    var_17 *= var_5;
                }
            }
        }
    }
    #pragma endscop
}
