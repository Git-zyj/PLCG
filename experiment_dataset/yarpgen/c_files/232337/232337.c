/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (max((((min(24, 65525)))), (min(((min((arr_1 [i_0]), 0))), (0 | 3104742659)))));
        arr_4 [2] [i_0] = ((8192 ? -1563624819 : 49617));
        var_19 = (min(var_19, var_4));
        var_20 = (max(var_20, ((((((arr_2 [i_0] [i_0]) & (arr_1 [i_0]))) - (arr_0 [i_0] [1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = ((-17049658983503818036 ? (arr_5 [i_1]) : var_1));
        var_21 = (((arr_1 [2]) ? (arr_2 [i_1] [i_1]) : ((198 << (16266530451759526910 - 16266530451759526902)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = (((arr_7 [i_2] [i_2]) * (arr_7 [i_2] [i_2])));
        var_22 ^= ((!(arr_0 [i_2] [i_2])));
        arr_12 [i_2] [i_2] = 7900239974156513401;
        arr_13 [0] [i_2] = ((!(arr_7 [i_2] [i_2])));
    }
    var_23 = var_12;
    var_24 = (min(2116253710, var_10));
    #pragma endscop
}
