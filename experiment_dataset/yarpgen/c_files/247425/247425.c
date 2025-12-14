/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(var_16, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (((min(var_14, var_10))) ? var_2 : var_9);
                var_19 = (max(var_19, (((((var_9 ? var_9 : var_0))) ? (max(var_12, var_15)) : ((0 ? 40254 : 25282))))));
                var_20 = (((var_9 ? var_4 : var_0)));
            }
        }
    }
    #pragma endscop
}
