/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_9, var_6))) ? (min(-18446744073709551615, var_15)) : (((max(var_11, var_15)) >> (var_1 - 2260691047424226445))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = ((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]));
        var_20 = (5328807607709099688 ? var_16 : (arr_1 [i_0]));
        var_21 = (-(4284548579375176820 / 18317409810339758780));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = (1220621487723647573 << (5328807607709099674 - 5328807607709099635));
        var_23 = (var_8 * (arr_2 [i_1]));
        var_24 = (min(var_24, var_4));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_25 = (var_2 ? ((((5203785228466299665 << (13117936466000451953 - 13117936466000451950))) & (arr_7 [i_2]))) : (((arr_5 [16] [1]) ? 5137171299271799548 : (arr_3 [i_2]))));
        var_26 = (((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))) ? 5328807607709099695 : (((var_10 ? var_6 : (arr_7 [i_2])))));
        var_27 = ((((var_4 + (arr_6 [i_2])))) | var_9);
    }
    #pragma endscop
}
