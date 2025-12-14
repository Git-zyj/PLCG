/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 ^= 65280;
        var_16 ^= 67;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_17 = (max(var_17, 184));
        var_18 = (min(var_18, 740682754));
    }
    var_19 = (min(var_19, 71));
    #pragma endscop
}
