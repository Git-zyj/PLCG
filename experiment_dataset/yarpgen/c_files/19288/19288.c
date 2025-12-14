/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_3, var_8))) || 11982482130636516096)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        var_18 = -790179547550982871;
    }
    var_19 = ((((max(790179547550982893, -790179547550982873))) ? (min(((min(var_7, var_6))), -2039033072)) : (((-790179547550982881 ? -790179547550982882 : var_1)))));
    #pragma endscop
}
