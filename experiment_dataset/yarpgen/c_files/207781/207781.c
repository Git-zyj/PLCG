/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max(((!(~var_5))), (((var_4 <= var_8) || ((min(var_10, var_6)))))));
    var_13 = var_8;
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [1])))) ? var_1 : var_7));
        var_16 = (max(var_16, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [3])))) ? (((arr_0 [i_0]) ? 3404586743 : -8298337141613628794)) : var_10)))));
    }
    #pragma endscop
}
