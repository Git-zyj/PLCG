/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((~var_7), (min(((max(var_14, var_14))), var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (min(((max((min(var_5, var_14)), 1066876712))), (max(var_14, (~4085343186)))));
                                var_18 ^= ((-(max(var_5, var_14))));
                                var_19 = (max(var_19, 3228090567));
                                arr_17 [i_1] [i_3] [i_4] = (max((min((min(var_2, var_3)), 4085343186)), (min(var_1, var_9))));
                            }
                        }
                    }
                    var_20 = ((~(min((max(var_12, var_7)), var_4))));
                }
            }
        }
    }
    #pragma endscop
}
