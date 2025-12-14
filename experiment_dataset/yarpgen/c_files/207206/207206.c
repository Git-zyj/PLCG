/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((17590 - (((((arr_1 [i_0] [i_0]) && var_10)) ? var_8 : 1))));
        arr_3 [i_0] = (min(0, 1));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [10] &= (min((max((arr_0 [i_1] [i_1]), var_11)), (arr_0 [i_1] [i_1])));
        var_16 = ((-((min((arr_5 [i_1]), (arr_5 [i_1]))))));
    }
    var_17 = (((((var_1 ? (var_8 || var_11) : -var_14))) ? ((4095 ? -585355600 : 1)) : (((var_4 || var_11) ? var_9 : ((var_10 ? var_5 : var_14))))));
    #pragma endscop
}
