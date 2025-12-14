/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (max((min(var_1, (~var_0))), ((max((((var_5 < (arr_0 [i_0])))), (((arr_0 [i_0]) | (arr_0 [i_0]))))))));
        arr_2 [i_0] = (((1 + 1) << -0));
    }
    var_18 = ((var_11 ? (max(var_12, ((2147483647 ? var_15 : var_10)))) : (((((var_11 ? var_8 : var_0))) ? var_11 : var_1))));
    var_19 = (max(((274877906943 ? (var_5 - 1) : ((511 ? 3 : var_9)))), (9223372036854775807 - 3009)));
    #pragma endscop
}
