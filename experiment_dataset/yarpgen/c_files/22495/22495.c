/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((!((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_12 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) - (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_13 = (arr_0 [i_0]);
        var_14 = ((!((((arr_1 [i_0]) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (arr_0 [i_0]))))));
        var_15 = ((((min((arr_1 [7]), (((arr_0 [i_0]) ? 65535 : (arr_1 [i_0])))))) ? (((((((arr_1 [i_0]) ? 1 : (arr_0 [i_0])))) || ((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))))) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_16 = ((((((((var_6 >> (var_0 - 37360)))) ? 1 : 1))) ? var_1 : ((((var_1 ? var_8 : var_1)) >> ((((1 ? var_0 : var_4)) - 37351))))));
    #pragma endscop
}
