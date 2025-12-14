/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, (((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (((!(arr_2 [i_0]))))))) || 8925)))));
        var_21 = (min((((arr_0 [i_0] [i_0]) * ((var_9 ? var_15 : var_15)))), (((arr_2 [i_0]) / (arr_0 [i_0] [i_0])))));
        var_22 = (((min(32748, ((var_18 ? var_0 : (arr_1 [i_0]))))) - (((min(var_6, -21450))))));
        arr_4 [i_0] = (((((min((arr_3 [i_0] [i_0]), var_8)))) ? ((((((var_18 ? (arr_2 [i_0]) : (arr_1 [i_0])))) && var_17))) : -13909));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_23 = ((18608 ? (min(var_10, ((18620 ? var_12 : var_11)))) : ((((-4570 ? var_9 : var_0))))));
        var_24 = (max(var_24, ((min(var_0, (arr_6 [i_1]))))));
    }
    var_25 = ((((-var_16 ? ((-18610 ? var_13 : var_10)) : (var_11 - 18608))) > ((-4050 ? (!var_4) : var_3))));
    #pragma endscop
}
