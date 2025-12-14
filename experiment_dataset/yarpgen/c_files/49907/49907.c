/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_21 = (min(var_21, ((((((arr_0 [i_0 - 1]) ? (min((arr_0 [i_0]), 1702490753)) : var_5)) % -var_0)))));
        arr_2 [i_0] = ((-(!-698558631)));
        var_22 = (arr_0 [i_0 + 1]);
        var_23 = (min(var_23, var_14));
        var_24 = ((((arr_0 [i_0 - 4]) ? (arr_1 [i_0 - 4] [i_0 - 1]) : var_1)));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_25 = 1;
        var_26 = (max((arr_5 [i_1]), ((((arr_5 [i_1]) ? ((var_10 ? var_9 : 168)) : 0)))));
        var_27 = ((-(arr_0 [i_1])));
        var_28 = ((+((var_0 ? var_7 : ((var_1 ? (arr_3 [i_1]) : 110))))));
    }
    var_29 = (min(var_29, var_15));
    #pragma endscop
}
