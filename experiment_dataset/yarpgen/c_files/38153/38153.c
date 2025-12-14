/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 181;
    var_18 = ((4294967295 << (2829741637569954229 - 2829741637569954198)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = var_16;
        var_20 &= 12;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_21 = 4294967282;
        var_22 = var_4;
    }
    var_23 &= var_15;
    #pragma endscop
}
