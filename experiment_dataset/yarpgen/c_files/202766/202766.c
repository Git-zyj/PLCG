/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 ^= var_8;
        var_18 |= (!0);
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 *= 63034;
        var_20 = (min(((max(var_11, var_11))), ((var_14 ? 17628434813922861219 : var_12))));
    }
    #pragma endscop
}
