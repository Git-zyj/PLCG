/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((49 == -540757178) ? var_12 : -var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((-((var_8 ? 123 : var_3))));
                var_15 = ((~(max((1 & var_3), (123 & 140737488355327)))));
            }
        }
    }
    var_16 = (min(var_16, 106));
    var_17 = var_9;
    var_18 = (!var_12);
    #pragma endscop
}
