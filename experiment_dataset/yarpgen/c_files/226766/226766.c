/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 = (~var_17);
        arr_2 [i_0] = var_1;
    }
    #pragma endscop
}
