/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((-var_3 / var_9) ? var_8 : var_10));
    var_15 += var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 15)) == var_10)))) | (min(((var_10 & (arr_1 [i_0]))), 3459874024)));
        var_17 = (((min((((arr_0 [i_0]) ? var_2 : var_9)), (arr_1 [i_0]))) >= (((0 == 3459874024) ? (min((arr_1 [10]), var_13)) : (3459874024 > 1)))));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = ((!((((arr_2 [i_0]) * (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = (min(var_18, (((241 ? (((arr_7 [1]) * (arr_7 [i_1]))) : ((~(arr_7 [i_1]))))))));
        arr_9 [i_1] [i_1] = ((255 - (((max(254, 192))))));
        arr_10 [i_1] [i_1] = var_6;
        arr_11 [i_1] [i_1] = var_13;
        var_19 = (max(var_19, (arr_7 [5])));
    }
    #pragma endscop
}
