/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 *= ((((((arr_1 [i_0]) ? var_8 : (arr_1 [i_0])))) ? ((((arr_1 [i_0]) ? 39 : var_13))) : (max(var_2, (arr_1 [i_0])))));
        var_19 = (max(var_19, (((((-(arr_1 [i_0]))) + ((-1833898206 / (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = (((((((min(126, (arr_4 [i_1]))))) ^ ((1360248291 ? (arr_2 [i_1]) : -106)))) ^ -106));
        var_20 = (max((((arr_2 [i_1]) ? 1990029148 : (arr_2 [i_1]))), 127));
        arr_6 [1] [i_1] |= (((((arr_4 [i_1]) || (var_10 || var_5))) && (1926960788 || 97)));
    }
    var_21 = (max(var_21, (((((((~var_5) & (((max(var_12, 31216))))))) ? -2992210323 : ((((max(var_15, var_15))) ? ((-1661834013 ? -11422365648838295 : -106)) : (((var_10 ? var_2 : 1302756972))))))))));
    #pragma endscop
}
