/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, (!var_1)));
        var_17 = (max((((!(((var_2 ? 42 : var_13)))))), ((var_14 ^ (~var_13)))));
    }
    var_18 |= var_2;
    #pragma endscop
}
