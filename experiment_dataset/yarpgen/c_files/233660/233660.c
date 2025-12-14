/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((var_14 ? -var_2 : (var_7 | 44196)));
                    arr_8 [i_0] [i_1] [i_1] = (!var_12);
                    var_18 = (var_0 ? (var_3 | var_9) : var_5);
                    var_19 ^= var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (1837853090 && var_4);
                                var_21 = (-38 + -38);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 *= var_14;
    #pragma endscop
}
