/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 |= var_4;
        var_21 = (min(var_21, (((2755 ? 245760 : 0)))));
        var_22 = ((-1 ? var_19 : var_7));
    }
    var_23 = var_17;
    #pragma endscop
}
