/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(14, (((((7246273435137236307 ? var_7 : var_11))) ? ((min(var_11, 108))) : var_1))));
    var_18 = (max(var_4, var_13));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = 3;
        var_20 = (arr_1 [i_0]);
        arr_2 [i_0] = (arr_1 [11]);
    }
    #pragma endscop
}
