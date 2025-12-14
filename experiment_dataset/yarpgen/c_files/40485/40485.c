/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 -= (min(303690736550156695, (arr_1 [i_0 + 1] [i_0 + 1])));
        var_17 = var_9;
        var_18 = ((((var_13 ? (arr_1 [i_0 + 1] [i_0]) : var_12)) - (arr_1 [i_0 + 1] [i_0])));
        arr_4 [i_0] = (!255);
        var_19 = (max((arr_0 [i_0]), ((var_0 ? 90 : ((var_10 ? var_10 : (arr_1 [i_0] [i_0])))))));
    }
    var_20 = (min(var_20, (((var_10 ? (var_3 ^ var_1) : var_15)))));
    #pragma endscop
}
