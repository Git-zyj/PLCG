/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_18 = (~var_15);
        var_19 = ((-(((arr_0 [i_0 - 1]) ? (arr_0 [i_0]) : 16211520668014153052))));
        var_20 = (((-25 & 240) ? -3 : (((arr_1 [i_0 + 2]) & -2462))));
    }
    var_21 = var_9;
    var_22 = var_8;
    var_23 = (min(var_23, var_13));
    var_24 = (-(max(var_4, (!var_16))));
    #pragma endscop
}
