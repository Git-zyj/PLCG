/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = ((((min((((arr_2 [i_0]) - var_14)), var_7))) ? (arr_0 [i_0]) : (((-2 - var_7) << (var_16 - 4145799489)))));
    }
    var_19 = var_1;
    var_20 = (max(var_20, ((min(var_12, var_14)))));
    #pragma endscop
}
