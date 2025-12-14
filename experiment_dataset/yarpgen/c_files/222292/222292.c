/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min(((min((((var_10 ? var_7 : var_2))), var_9))), (max(var_10, var_2)))))));
                var_13 = (max(var_0, (var_1 * var_6)));
                var_14 = (max(var_14, (7218653823223200201 - -30681)));
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
