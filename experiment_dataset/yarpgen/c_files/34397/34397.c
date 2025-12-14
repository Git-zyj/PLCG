/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 0));
                    arr_6 [16] [16] &= -17;
                    var_21 = (0 <= 24576);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((~(-24582 != 24589))))));
                                var_23 = ((((((var_8 / (arr_12 [i_0] [i_1] [i_3] [0] [i_0]))))) * 4294967295));
                            }
                        }
                    }
                    var_24 = (max(var_24, -7));
                }
            }
        }
    }
    var_25 = var_6;
    var_26 = 163;
    #pragma endscop
}
