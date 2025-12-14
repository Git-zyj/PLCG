/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = ((+(max((((var_5 + 2147483647) << (var_8 - 46))), var_4))));
        var_20 = 127;
    }
    var_21 ^= ((var_16 << ((((((min(var_13, var_12))) ? (110 | var_10) : (var_13 ^ -105))) - 116))));
    var_22 = var_17;
    #pragma endscop
}
