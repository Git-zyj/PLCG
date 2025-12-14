/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = var_3;
                            var_15 = var_4;
                            arr_10 [i_0] [i_1] [i_2 - 2] [i_1] = var_6;
                            arr_11 [i_0] [i_0] [i_0] [i_0] = var_3;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_4] = var_7;
                    var_16 ^= var_13;
                    var_17 ^= var_3;
                    arr_15 [i_0] [1] = var_8;
                }
            }
        }
    }
    var_18 = (min(var_18, var_6));
    #pragma endscop
}
