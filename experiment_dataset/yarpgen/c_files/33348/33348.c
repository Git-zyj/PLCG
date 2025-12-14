/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (min(var_13, ((min(127, ((~(arr_2 [i_0] [i_0]))))))));
        var_14 = (min(var_14, (((var_8 < ((var_7 ? 3377503083196407825 : (15 && var_8))))))));
    }
    var_15 |= (((((var_4 ? (var_10 / var_1) : 117))) ? var_4 : ((((var_3 ? 60 : var_0)) << (var_10 - 14586230068195079595)))));
    #pragma endscop
}
