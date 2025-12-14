/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = (1 && 175);
        var_11 = (min(var_11, ((max(92, 164)))));
        var_12 = (min(((~((-424810024 ? 237 : -19963)))), (((min(var_8, 98))))));
        var_13 = (arr_1 [i_0]);
        var_14 = ((251 ? (min(((1 ? 5 : 1)), 1)) : 28));
    }
    var_15 = 1;
    var_16 = ((max(((min(253, 1))), (0 << var_8))) / (((9223372036854775806 && ((min(var_8, var_0)))))));
    var_17 = var_6;
    #pragma endscop
}
