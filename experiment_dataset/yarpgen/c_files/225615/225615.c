/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((-(min(18210977973483217653, 111)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (((((((var_3 ? var_9 : var_10))) && 235766100226333963)) ? (((~219) & ((16793 ? 57 : var_8)))) : ((var_8 ? (((!(arr_1 [i_0])))) : (90 && 188)))));
        var_13 = (min(var_13, (((((arr_0 [i_0] [i_0]) ? 4294967295 : -8454763008180092388))))));
        var_14 = (min(var_14, (min((var_4 != 71), (!var_6)))));
        var_15 = ((((((((1 ? var_1 : 7956))) ? (arr_2 [i_0]) : ((1 ? var_6 : var_0))))) ? (max(-8454763008180092388, var_4)) : ((((((~var_3) + 2147483647)) >> (((arr_2 [i_0]) - 73)))))));
    }
    var_16 = (((var_1 / var_8) ? (min(-8454763008180092404, (((var_3 ? var_5 : 2089789110))))) : (~var_2)));
    #pragma endscop
}
