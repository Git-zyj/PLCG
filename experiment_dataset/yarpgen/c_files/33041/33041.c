/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? (((var_1 ^ var_8) ? var_6 : (var_1 | 7040879575583581146))) : (max((min(var_6, 7040879575583581148)), ((2147483647 ? var_5 : var_11))))));
    var_16 ^= ((var_10 ? ((var_13 - (4556632545777637888 | var_3))) : (((-(!1))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (~(((max(13890111527931913727, var_0)) ^ var_8)));
        var_18 ^= ((((-(min((arr_1 [14]), 0))))) ? ((((arr_0 [i_0] [10]) ? (arr_1 [i_0]) : var_12))) : (min((arr_0 [i_0] [i_0]), var_2)));
        arr_2 [i_0] = (var_14 ? 3 : ((((0 < 6843226471105709151) / (~0)))));
        arr_3 [i_0] = (min(((((arr_1 [i_0]) == (arr_1 [i_0])))), ((var_6 ? var_1 : (((var_7 ? var_12 : var_13)))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_19 = 3;
        var_20 ^= var_9;
    }
    var_21 |= var_3;
    #pragma endscop
}
