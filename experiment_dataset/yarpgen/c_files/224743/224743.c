/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = ((max(255, (max(var_2, var_11)))));
        var_21 |= -var_13;
    }
    var_22 = var_14;
    #pragma endscop
}
