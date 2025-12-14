/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 32505856;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((-1 ? (var_5 * var_7) : 7));
        var_17 = (((-(((var_0 < (arr_0 [i_0] [i_0])))))));
        var_18 = (min(var_18, (arr_1 [i_0])));
        var_19 = ((2973080976 ? 6 : 36209));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = (max(var_20, ((min(var_10, var_2)))));
        var_21 = 3446889894794834722;
        arr_4 [1] = var_1;
    }
    #pragma endscop
}
