/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(28232, (var_0 + var_13))), 54736));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((((((28239 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : var_3))), ((var_8 ? ((((arr_1 [i_0] [i_0]) ? var_14 : (arr_1 [i_0] [i_0])))) : var_11))));
        var_19 = (((min((((arr_0 [i_0] [9]) | 1525425542)), (var_13 && var_0)))) ? (arr_0 [i_0] [i_0]) : var_6);
        var_20 &= ((+(max((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_3 [17] = ((var_7 ? (min((arr_0 [i_0] [i_0]), 37468)) : ((~(min((arr_0 [i_0] [i_0]), var_5))))));
    }
    var_21 = var_15;
    #pragma endscop
}
