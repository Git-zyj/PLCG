/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(var_7 + var_2)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((174 ? (min((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_16)), (((var_8 < (arr_1 [i_0])))))) : 64));
        arr_3 [i_0] = -4023016741;
    }
    var_21 = var_13;
    #pragma endscop
}
