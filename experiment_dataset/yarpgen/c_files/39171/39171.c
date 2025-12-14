/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 ^= (max(var_12, 4294967295));
    var_16 = (min(var_0, 8191));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += (max((((-(arr_5 [i_0] [i_1])))), 1814898837));
                var_18 ^= var_12;
            }
        }
    }
    #pragma endscop
}
