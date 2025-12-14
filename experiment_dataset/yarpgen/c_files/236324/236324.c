/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (!15364971002801107228);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] = 8155205004504816163;
                    var_15 += (max((arr_0 [i_2]), 8155205004504816147));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = ((-(130 == 2723)));
                                var_17 = (arr_1 [i_0] [i_3 + 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_5));
    #pragma endscop
}
