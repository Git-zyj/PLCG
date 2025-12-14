/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_16));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0]) / 1006632960));
        var_22 ^= ((41059 ? 64 : (arr_0 [16] [1])));
        var_23 = (max(var_23, ((((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [12]) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))))))));
    }
    var_24 ^= var_11;
    #pragma endscop
}
