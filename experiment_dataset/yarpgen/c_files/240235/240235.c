/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((2256013438 + 127) & ((((min(var_2, 2263023277))) + 7284764230880643036))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 -= var_4;
        var_12 = ((var_7 ? (((((arr_1 [i_0]) != var_9)) ? var_3 : 108)) : -114));
        var_13 = var_0;
        var_14 = (!-126);
    }
    var_15 = (max(var_15, var_6));
    var_16 |= ((((max(267655855125929417, var_6))) ? ((var_2 ? var_5 : -95)) : var_9));
    #pragma endscop
}
