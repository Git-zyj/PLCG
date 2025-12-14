/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? var_0 : (max(-var_1, ((0 ? var_0 : 55253))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((~(((55253 & 2059334328) ? (((-9109970921672558511 + 9223372036854775807) >> (-1000272452 + 1000272455))) : -5537001638623580737)))))));
                                arr_12 [i_0] [i_1] [i_2] [i_4] = (max(1526454313, (max(6796, (arr_9 [i_0 - 2] [i_2] [i_3] [i_4])))));
                                var_12 = (~1716067528);
                                arr_13 [i_0 - 4] [i_0] [i_1] [10] [i_3] [i_3] [i_4] = ((max((1477006358 != -9109970921672558511), (225 ^ -9109970921672558511))));
                                arr_14 [1] [i_3] [i_1] [1] = (max(((2059334351 != (max(-71197312, 106753787)))), ((var_0 < ((((arr_9 [i_4] [0] [i_1] [i_0]) <= 887631594)))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((((-((0 ? 1 : 10283))))) ? (65535 - 4941602926391312941) : (((max(133, var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
