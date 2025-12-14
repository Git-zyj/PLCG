/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_5;
    var_14 *= var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 ^= 1;
        arr_2 [i_0] = -12;
        var_16 = (~(var_1 + var_6));
        arr_3 [i_0] [i_0] = ((-(((min(var_12, var_12)) ^ (((-31054 ? 1 : 7)))))));
    }
    #pragma endscop
}
