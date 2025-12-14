/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 -= (arr_0 [i_0] [i_0]);
        var_11 = (max(var_11, -2694932327479716095));
        var_12 = ((-(arr_0 [i_0] [i_0])));
    }
    var_13 = 1;
    var_14 = var_8;
    #pragma endscop
}
