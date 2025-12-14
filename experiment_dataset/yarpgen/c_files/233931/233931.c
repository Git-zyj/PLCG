/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_5));
    var_12 = -var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, var_1));
        var_14 = (max(var_14, 11225));
    }
    #pragma endscop
}
