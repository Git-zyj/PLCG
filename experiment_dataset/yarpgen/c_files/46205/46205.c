/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = arr_1 [i_1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max((~var_12), -var_10));
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = (((max(var_1, -77)) < (1 >= -31202)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
