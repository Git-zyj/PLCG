/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((var_11 - (((((13624 ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_18 -= (((~0) ? 0 : (arr_0 [i_0])));
    }
    var_19 = (max(var_19, ((((((var_6 ? 3632673695 : var_6))) ? (((((2772009479981526738 ? var_1 : var_2))) ? ((var_2 ? var_12 : 15674734593728024873)) : var_6)) : (((~((2772009479981526743 ? var_4 : var_9))))))))));
    var_20 = var_17;
    #pragma endscop
}
