/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min((max(-1672251869, var_14)), (var_14 != var_8))), ((min(((1 ? var_5 : 94)), var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((-21758 ? 17489 : -17461)) < var_16));
        arr_3 [i_0] = ((var_2 + (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (((((var_8 ? var_11 : 6936))) + 14701452285252671318));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] |= (((arr_1 [i_1] [i_1]) ? (48330 || 17500) : (arr_0 [i_1] [i_1])));
        var_19 = (arr_0 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = (((arr_6 [i_1] [i_1]) ? (arr_5 [i_1]) : var_17));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 -= (arr_1 [i_2] [i_2]);
        var_21 = (max((((arr_1 [i_2] [i_2]) | (arr_0 [i_2] [i_2]))), ((((max(5, var_15))) ? (!1) : -1))));
        var_22 = (var_4 + (max(var_12, var_13)));
    }
    var_23 = min((((var_16 + ((var_17 ? 0 : var_11))))), (max(6936, 0)));
    var_24 = (min(var_24, (!var_4)));
    #pragma endscop
}
