/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4318;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((var_0 || ((((arr_4 [i_1]) | 0))))));
                arr_7 [i_1] = 0;
                var_12 = (max(var_12, (arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (((var_8 * var_6) * (max(var_0, 3024061861))));
                                var_14 ^= 120;
                                var_15 = (((((((2165738492 > (arr_4 [i_2]))) && 3894))) * ((((min((arr_10 [i_4 + 1] [i_0 - 1] [i_1 + 2] [i_0 - 1]), var_3))) ? ((-98 ? var_9 : 3894)) : var_10))));
                                var_16 -= 4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
