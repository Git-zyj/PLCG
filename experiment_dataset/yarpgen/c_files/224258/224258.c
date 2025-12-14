/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((~(255 & 127)))))));
                                var_16 ^= ((2260322661 | ((((!((var_4 || (arr_9 [i_0 - 1] [i_0] [1] [i_0])))))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = ((~(437896489 != var_6)));
                arr_16 [i_0] [i_1] = (((52487 / 50333) / ((var_6 / (10788853071242620341 / 635659892)))));
            }
        }
    }
    var_17 = -7657891002466931275;
    var_18 += (!-9);
    #pragma endscop
}
