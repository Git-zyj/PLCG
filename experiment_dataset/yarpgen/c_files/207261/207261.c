/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (max((min((min(130, 1891450932)), ((min((arr_0 [i_0 + 2]), (arr_1 [i_0])))))), (max(((max((arr_0 [1]), 48179))), (min(-879914393, var_8))))));
        arr_2 [i_0] = (min((min((min(1, 17360)), (max((arr_0 [i_0 - 1]), (arr_0 [i_0]))))), (min((max((arr_0 [i_0]), (arr_1 [i_0 + 2]))), (min((arr_1 [4]), var_8))))));
    }
    var_17 = (min(((max((max(var_10, 17192)), (min(48174, 163))))), (min((min(-6949163600935861434, -185022047)), (min(var_14, 6949163600935861416))))));
    var_18 = min(((max(((max(var_1, var_0))), (min(var_14, var_11))))), (min((min(var_13, var_1)), ((min(var_1, var_3))))));
    #pragma endscop
}
