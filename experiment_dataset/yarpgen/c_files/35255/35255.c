/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(var_1, (max((max(var_0, var_11)), var_5))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 -= var_1;
                    var_14 = (min(var_6, ((min(var_3, var_6)))));
                    var_15 -= var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 ^= var_11;
                                var_17 = (max(var_17, var_1));
                                var_18 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
