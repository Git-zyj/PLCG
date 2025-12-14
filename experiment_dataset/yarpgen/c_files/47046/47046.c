/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 |= -1979264713;
        var_13 = (min(var_13, 3225919625));
    }
    var_14 = ((-(((4252750471 ^ -45) ? (var_1 & var_5) : -45))));
    var_15 = var_8;
    #pragma endscop
}
