/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 ? (max(0, -1)) : 0));
    var_21 -= var_18;
    var_22 = (min(var_22, 21));
    var_23 &= var_10;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_24 = var_19;
        var_25 = ((-21 ? 191 : 2947236496414839134));
    }
    #pragma endscop
}
