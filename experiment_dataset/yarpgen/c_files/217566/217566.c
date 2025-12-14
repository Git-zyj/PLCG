/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = 0;
                                var_11 = 6;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_12 |= -117;
                                var_13 = 7;
                                var_14 = 250;
                                var_15 = 108;
                                var_16 -= 3;
                            }
                        }
                    }
                }
                var_17 -= 3670;
                arr_21 [i_1] [i_1] = 6;
                var_18 = 0;
            }
        }
    }
    var_19 += var_5;
    var_20 = var_9;
    #pragma endscop
}
