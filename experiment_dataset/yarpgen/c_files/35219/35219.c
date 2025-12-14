/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 -= (((var_11 >= var_8) * (16383 | 16396)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 *= (((var_11 * var_8) + 56));
                var_16 += (((((((var_1 + var_9) + var_9)) + 2147483647)) >> (((16383 << var_5) - 32739))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [5] [i_0] = var_2;
                            var_17 = 3047474822810972262;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
