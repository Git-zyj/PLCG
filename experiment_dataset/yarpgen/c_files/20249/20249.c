/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 -= (((((arr_2 [i_4 - 1]) * var_11)) / (min((arr_12 [i_4 - 1] [i_3] [i_2 - 2] [i_1] [i_0]), (-1297621623 / 10)))));
                                var_20 = (((var_9 / (~8718))));
                            }
                        }
                    }
                    var_21 = 0;
                }
            }
        }
    }
    var_22 = (max((~1), ((var_1 & (~56835)))));
    #pragma endscop
}
