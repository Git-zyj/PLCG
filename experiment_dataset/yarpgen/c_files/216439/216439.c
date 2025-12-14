/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = var_10;
        var_16 = (max(var_16, (-127 - 1)));
    }
    var_17 = (min(var_17, ((((((-((19307 ? 3019885136 : 3320920107228716691))))) ? var_6 : (var_1 - var_1))))));
    #pragma endscop
}
