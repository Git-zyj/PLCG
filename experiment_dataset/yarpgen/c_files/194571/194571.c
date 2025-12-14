/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 *= ((146 ? 101 : (arr_5 [i_0] [i_0] [i_0])));
                var_11 = (arr_1 [i_0]);
                arr_6 [i_1] [i_1] [i_1] |= var_9;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_12 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = 238;
                                arr_13 [i_0] = (arr_5 [i_0] [i_3] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_6;
    #pragma endscop
}
