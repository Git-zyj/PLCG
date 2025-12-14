/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((0 ? 1 : -2147483637));
    var_18 = -22247;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((((((2 || (arr_0 [i_0] [i_0]))) ? ((7798719180855938123 ? (arr_2 [1]) : (arr_2 [i_0]))) : var_14))) || ((((15 || (arr_0 [i_0] [i_0]))) || (arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((var_7 ? (((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : (max(-7798719180855938113, var_0))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = ((((((max(7, (arr_4 [i_1])))) ? ((-623072191 ? (arr_6 [i_1] [i_1]) : var_10)) : (-2147483647 - 1))) / ((((((((arr_5 [i_1]) ? (arr_5 [i_1]) : 7798719180855938124))) && 524288))))));
        var_21 = (max(var_21, ((min((((((var_15 ? (arr_4 [1]) : (arr_5 [i_1])))) ? (arr_6 [i_1] [i_1]) : (((arr_5 [i_1]) / var_2)))), ((min((arr_4 [i_1]), ((1324789901 - (arr_6 [i_1] [i_1])))))))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_22 |= -1975160506;
        var_23 = (max(var_23, -7548));
        var_24 = (max(var_24, ((min(-var_0, 2025542364)))));
    }
    #pragma endscop
}
