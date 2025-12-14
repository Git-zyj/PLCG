/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-((var_8 ? var_11 : var_8)))) + -65535);
    var_14 = ((var_4 + ((var_12 ? (max(var_5, var_1)) : ((var_4 ? var_10 : var_5))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_15 = var_3;
        arr_3 [i_0] [i_0] = ((((max(var_3, (arr_1 [i_0])))) + (min((max((arr_0 [i_0] [i_0]), var_3)), (min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    #pragma endscop
}
