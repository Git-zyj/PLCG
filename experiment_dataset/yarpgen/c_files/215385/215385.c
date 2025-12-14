/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [i_1 + 1] [i_2] [i_2] [i_4 + 1] = ((~(~5756746008455833023)));
                                arr_15 [i_0] [i_1] [4] [i_2] [i_3] [i_4 - 1] = var_14;
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] [i_2] = 1008;
                    arr_17 [i_0] [i_0] &= (((arr_4 [i_0]) + (~-1697539968)));
                }
            }
        }
    }
    var_16 = var_13;
    var_17 = (-2147483647 - 1);
    #pragma endscop
}
