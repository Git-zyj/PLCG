/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-((min(var_1, var_4))));
    var_12 = 23;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = -9223372036854775800;
        arr_2 [i_0 + 4] = (((arr_0 [i_0 + 2]) ? (((arr_0 [4]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 0)) : ((min((arr_1 [12]), (arr_0 [i_0])))))) : (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0 + 1])))));
    }
    var_14 = ((14879907254326230986 >> (-683920890 || 59817)));
    #pragma endscop
}
