/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min(var_9, ((((~var_2) ? var_2 : 3478)))));
    var_11 *= var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = arr_3 [i_0] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [1] = (min(((-(arr_2 [i_0] [i_0]))), (arr_6 [i_0])));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [3] [i_0] = ((((arr_2 [i_2 - 1] [i_0 + 1]) / (arr_9 [i_0] [i_2] [i_2 + 1] [i_4 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
