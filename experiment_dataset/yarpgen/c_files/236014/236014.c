/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (((var_7 * 28107) ? var_9 : -var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((arr_2 [i_0]) ? (((((arr_0 [i_0]) == (arr_1 [i_0]))))) : (arr_1 [i_0]))) & (((max((!var_1), 53507)))))))));
        var_14 = var_9;
        arr_3 [i_0] = ((((max((arr_0 [i_0]), var_3))) ? (((arr_2 [12]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : 1));
        var_15 = var_0;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_16 ^= (28107 || var_7);
        var_17 = ((((+((-46881276 ? (arr_4 [i_1 - 1]) : var_1)))) == (arr_4 [i_1 + 1])));
        arr_6 [i_1] = (((((!((((arr_4 [i_1]) >> (-28107 + 28110))))))) | ((((max((arr_5 [i_1]), (arr_4 [i_1])))) ? (arr_5 [i_1 - 1]) : (((-28107 <= (arr_4 [i_1]))))))));
    }
    #pragma endscop
}
