/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (((225129622 ? 225129649 : (arr_1 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (max((~225129622), 1147231665));
                                var_15 = (max(var_15, (arr_10 [i_0] [i_3] [i_2] [i_3 - 4] [i_4] [i_4])));
                                var_16 ^= ((max(((var_4 ^ (arr_3 [i_4] [i_4] [i_2]))), 397480052)));
                                var_17 ^= (max((225129612 - -1), ((max((arr_7 [i_0] [i_3] [i_3] [i_3 - 4]), var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-(((!1816626596) ? var_1 : 408239457))));
    #pragma endscop
}
