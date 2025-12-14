/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-679579406448372013 + var_0) ? 8269 : var_4));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (((--1936204532441518326) ? (arr_2 [i_0]) : (((arr_0 [i_0] [i_0]) << (var_8 - 2128937400312777456)))));
        var_14 = (((arr_2 [i_0]) ? ((((32753 ? 8269 : -74)) | (((arr_0 [i_0] [i_0]) ? var_6 : (arr_2 [i_0]))))) : 16510539541268033289));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_15 = ((((arr_3 [i_1 + 1]) | ((((arr_4 [i_1] [i_1]) ? -84 : 4294967285))))));
        var_16 = arr_4 [6] [1];
        var_17 += ((((((73 ? var_9 : 4294967288)))) ? (min((arr_3 [i_1 - 3]), (arr_3 [i_1 - 1]))) : (((((arr_4 [i_1] [4]) == 679579406448371997))))));
        var_18 = 120;
    }
    #pragma endscop
}
