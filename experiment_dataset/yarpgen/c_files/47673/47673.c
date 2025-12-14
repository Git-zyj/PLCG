/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = var_8;
    var_16 *= ((var_6 ? 106 : ((((1 | var_11) <= (!var_7))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 |= var_7;
        var_18 = ((51766 / ((13769 ? 3940 : 3940))));
    }
    var_19 = ((((min(var_11, (3940 ^ var_12)))) ? var_9 : (61595 - var_0)));
    #pragma endscop
}
