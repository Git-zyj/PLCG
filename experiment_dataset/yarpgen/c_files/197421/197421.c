/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((min(var_13, ((1381124268251191424 ? -1381124268251191424 : 0)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 *= (!3);
        var_21 = (max(var_21, (((~(min((1640637637 & -194883172), (~var_13))))))));
    }
    var_22 &= var_11;
    var_23 = (min(var_23, (((18446744073709551600 ? var_11 : 187)))));
    #pragma endscop
}
