/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((141 ? 7643817773327867565 : 114))) || (((((min(var_6, var_10))) ? (var_15 - 2041710472) : (((-2830718898836783451 ? 114 : 4269598159))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = 3841917612140390245;
                var_18 = var_10;
            }
        }
    }
    #pragma endscop
}
