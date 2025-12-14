/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (min(var_9, (!-53)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0 - 2]) - (arr_1 [i_0 + 2])));
        var_13 = (min(var_13, 1));
    }
    var_14 = (min(var_5, ((~((1751400296 ? var_4 : var_3))))));
    var_15 = ((max((var_6 - var_4), 16)));
    #pragma endscop
}
