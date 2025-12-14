/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((max(var_1, 48369))), var_0));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = -2147483646;
        var_16 = (max(16777215, (max(var_11, ((-(arr_1 [i_0] [i_0])))))));
    }
    var_17 = ((~((((min(-211980471797121739, 184))) ? var_10 : var_8))));
    #pragma endscop
}
