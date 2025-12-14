/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = ((var_1 ? -35 : (arr_1 [i_0])));
        var_12 = var_1;
    }
    var_13 &= var_2;
    #pragma endscop
}
