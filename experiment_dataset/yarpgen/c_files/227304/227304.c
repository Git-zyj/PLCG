/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_7 ? var_0 : var_3))) ? var_13 : ((min(var_6, 37))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = -1534077938798863641;
        var_20 = (max(1534077938798863623, 534));
        var_21 = (((arr_0 [i_0 - 1]) < (((arr_2 [i_0]) ? ((min(0, 0))) : (max(var_0, 22049))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 = ((var_4 >= var_7) > ((((arr_0 [i_1]) && var_16))));
        var_23 = var_4;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_24 = ((((((arr_0 [i_2]) >> (arr_1 [0])))) ? ((~(arr_0 [i_2]))) : ((0 ? (arr_1 [4]) : -22734))));
        var_25 = (((-(1 > var_13))));
    }
    var_26 = var_9;
    var_27 -= var_15;
    var_28 = (min(var_28, ((((var_12 / var_8) != (max(1, var_10)))))));
    #pragma endscop
}
