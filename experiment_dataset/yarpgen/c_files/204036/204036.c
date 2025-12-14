/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!((min(var_4, ((4170716121 ? var_5 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = 2233180683;
                var_14 = var_0;
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
