/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_13 += var_9;
                var_14 = (max(var_14, (-3335368711625381313 > -8)));
            }
        }
    }
    #pragma endscop
}
