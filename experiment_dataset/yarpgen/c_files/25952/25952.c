/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((var_0 ? var_1 : var_3)) + (~253)));
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (min(var_12, ((max((arr_1 [i_0] [i_0]), ((((((arr_0 [i_0] [i_0]) ? (arr_0 [6] [i_0]) : (arr_3 [2]))) * (arr_3 [2])))))))));
        var_13 |= (arr_3 [0]);
    }
    var_14 = (min(var_6, (((-((var_6 ? 1 : var_1)))))));
    #pragma endscop
}
