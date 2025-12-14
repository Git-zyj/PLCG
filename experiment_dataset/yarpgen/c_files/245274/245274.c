/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, var_1));
        var_21 *= (-11 * 9402758886568303947);
    }
    var_22 = var_6;
    #pragma endscop
}
