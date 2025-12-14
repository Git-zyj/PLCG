/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_3;
    var_19 = (((((((var_10 ? var_6 : var_7))) ? (var_6 % 1) : (((var_2 ? var_14 : 127)))))) ? var_15 : (((var_8 << (((~var_2) + 125))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -97;
        arr_4 [i_0] = (((arr_2 [i_0]) ? (arr_0 [i_0]) : (var_6 / var_9)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 = ((((!var_3) ? (arr_1 [i_1]) : var_6)));
        arr_7 [18] [i_1] = ((((!(arr_0 [16]))) ? (min((arr_0 [8]), var_3)) : (((~(arr_0 [1]))))));
        var_21 = var_9;
        var_22 ^= ((((max(-997705824, (((arr_0 [18]) - 0))))) - ((((max((arr_1 [i_1]), var_9))) + (min(var_15, (arr_0 [2])))))));
        var_23 = (((!4294967295) ? ((((var_12 && (arr_2 [18]))) ? ((max(var_4, (arr_1 [i_1])))) : (((arr_6 [i_1] [i_1]) ? (arr_0 [10]) : (arr_5 [i_1]))))) : (((arr_1 [i_1]) << (((arr_6 [i_1] [i_1]) - 228))))));
    }
    var_24 = (16 ^ (min(var_9, ((min(var_8, 64))))));
    #pragma endscop
}
