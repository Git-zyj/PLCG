/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_4, (var_11 - var_0)));
    var_14 = ((-3051097809 * (((((43 == 1) && -var_8))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : var_4))));
        var_16 ^= var_11;
    }
    var_17 = ((~(max((((var_4 ? var_2 : var_0))), ((var_4 ? var_3 : 1243869486))))));
    var_18 = var_6;
    #pragma endscop
}
