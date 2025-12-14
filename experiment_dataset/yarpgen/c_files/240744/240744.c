/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((-31479 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((8602354223455463483 ? -99 : var_12))));
        var_18 = (var_12 ? (((-(arr_2 [i_0])))) : var_7);
        var_19 = (max((var_3 % var_15), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = var_8;
        var_21 = ((~(arr_1 [i_1])));
        arr_5 [i_1] = ((!((!(arr_2 [i_1])))));
    }
    var_22 = (min(-var_13, var_3));
    var_23 = (min(var_23, (((31478 ? ((((!(1637361677 & 87))))) : ((var_4 ? (((var_15 ? var_4 : 31503))) : (min(var_15, var_16)))))))));
    #pragma endscop
}
