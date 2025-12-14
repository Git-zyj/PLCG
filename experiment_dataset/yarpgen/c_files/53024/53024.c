/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 963395498;
    var_21 = var_16;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_22 = 96507194;
        var_23 = var_3;
    }
    #pragma endscop
}
