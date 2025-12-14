/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = var_3;
                    var_19 *= (((((var_13 ^ ((-1022595009 ? (-127 - 1) : -7798345510097608123))))) | (((min(-31253, var_0)) ^ (var_3 & 0)))));
                    var_20 = ((~(min(var_17, var_11))));
                }
            }
        }
    }
    var_21 |= var_11;
    #pragma endscop
}
