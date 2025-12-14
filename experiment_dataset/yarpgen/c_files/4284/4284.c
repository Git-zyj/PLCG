/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (min(1051700960, -99));
    var_15 *= (var_11 ? ((var_7 | ((min(var_6, var_5))))) : (((((min(var_10, var_0))) ? -var_6 : (!var_12)))));
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((((min(2083981548, var_9))) ? (min((arr_1 [i_0] [i_0]), var_11)) : (arr_1 [i_0] [i_0])))) <= (((((~(arr_1 [i_0] [i_0])))) ? (((2898751837 ? var_6 : 4294967266))) : var_9)))))));
        var_18 = (((min((((~(arr_1 [i_0] [i_0])))), ((var_2 ? var_7 : 0)))) + (((((arr_1 [i_0] [i_0]) == var_3))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = var_6;
        var_20 = ((((((-5969586114771445464 || 5) ? var_7 : var_13))) ? (arr_3 [i_1]) : var_7));
        var_21 = (max(var_21, ((((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? -var_10 : (var_2 - var_1)))));
        var_22 = (((arr_1 [i_1] [i_1]) && var_10));
        var_23 = (((((-(arr_2 [i_1])))) ? (2210985740 | var_2) : (min((arr_2 [i_1]), (arr_2 [i_1])))));
    }
    var_24 -= (~var_10);
    #pragma endscop
}
