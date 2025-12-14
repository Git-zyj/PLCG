/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((var_12 != var_9), var_12)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (max(var_16, (!-93398047)));
        var_17 = 4399056256467832007;
        var_18 = ((-1 ? var_7 : ((-8976 ? 0 : var_8))));
    }
    #pragma endscop
}
