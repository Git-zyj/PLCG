/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((((max(-1324912284477201860, -1324912284477201875))) ? (arr_0 [i_0] [i_0]) : ((min(var_17, var_0)))));
        var_22 = (min((-1324912284477201860 ^ -71), (-127 - 1)));
    }
    #pragma endscop
}
