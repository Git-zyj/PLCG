/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_5 ? (max(var_16, -3560)) : ((((!((min(var_0, var_14))))))))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_20 = ((+(max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_21 = (((((((var_11 ^ var_13) == (min(6058624850815454708, -1450194146)))))) >= ((~(arr_0 [i_0])))));
    }
    #pragma endscop
}
