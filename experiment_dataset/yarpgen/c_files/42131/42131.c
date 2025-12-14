/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (~5);
        var_18 = 65530;
    }

    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_19 = max((!20345), (var_14 ^ var_2));
        var_20 = var_0;
        var_21 = var_4;
    }
    var_22 = ((var_0 ? ((var_14 ? var_5 : var_0)) : (~var_2)));
    #pragma endscop
}
