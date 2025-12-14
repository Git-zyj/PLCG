/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (~var_6);
    var_11 = (var_0 > -8147);
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (~var_9);
        var_14 = ((((((var_8 ? (arr_0 [4]) : var_3)))) ? var_6 : ((((771864337428570451 ? (arr_1 [i_0] [i_0]) : var_1))))));
        var_15 = min(((min(6616, (arr_0 [i_0])))), (min((var_3 | var_7), ((min(var_3, var_4))))));
        var_16 = (max(((max((((arr_0 [i_0]) <= var_6)), ((6045358926122388891 < (arr_0 [i_0])))))), ((~((var_4 ? (arr_0 [i_0]) : -1544692022))))));
    }

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_4 [5] [i_1] = var_2;
        arr_5 [i_1] = (!var_3);
        var_17 = (min((((~119) | ((max((arr_3 [i_1]), (arr_3 [i_1])))))), (!3717786482308979427)));
        var_18 = ((((((!var_3) * (((!(arr_0 [1]))))))) ? (((((-54 ? (arr_2 [i_1] [i_1]) : (arr_1 [i_1] [i_1 + 1]))) != (arr_0 [i_1])))) : ((min((arr_3 [i_1]), (((!(arr_0 [i_1])))))))));
    }
    #pragma endscop
}
