/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = var_10;
        var_12 = ((+((max((arr_1 [i_0] [i_0]), var_4)))));
    }
    var_13 = var_8;
    var_14 = (min(var_2, ((var_0 ? var_5 : var_2))));
    var_15 = (var_10 < var_9);
    #pragma endscop
}
