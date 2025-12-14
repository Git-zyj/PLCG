/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((var_0 ? var_1 : (((177 ? var_9 : var_0)))));
    var_15 = (max(var_15, var_10));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (((~var_10) ? ((min((arr_1 [0] [i_0]), var_8))) : -1));
        var_17 = ((((((((var_9 >> (var_3 - 10839)))) ? -var_0 : ((var_10 ? var_0 : 1))))) ? (((((min((arr_1 [i_0] [i_0]), var_0))) ? (var_5 + var_3) : (arr_1 [i_0] [i_0])))) : (((((var_9 ? (arr_0 [i_0]) : 1))) * 9792475618002504138))));
        var_18 -= (((((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_9))) ? ((var_3 ? (arr_0 [i_0]) : var_2)) : (arr_1 [i_0] [i_0])))) ? ((var_1 ? (3879999200 * var_3) : ((((arr_1 [i_0] [i_0]) ? var_8 : var_8))))) : (((((1 ? 1 : var_9))) ? ((var_6 ? (arr_0 [i_0]) : var_11)) : (arr_1 [i_0] [i_0])))));
        var_19 = ((((max(var_3, var_11))) / (((max(1, 9790868958857777379)) / (arr_0 [i_0])))));
        arr_2 [i_0] = (min(144114913197948928, 1));
    }
    #pragma endscop
}
