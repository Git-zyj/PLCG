/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min((max(var_16, var_7)), var_8)), var_15));
    var_20 = (min(var_15, var_8));
    var_21 = (max(var_21, ((max(var_0, 65535)))));
    var_22 = ((var_1 ? (((var_16 - var_1) ? 1 : (var_13 % var_1))) : var_16));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((-(arr_1 [i_0] [i_0])))) ? ((-(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [1])));
        var_23 *= var_15;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((var_17 ? var_15 : (arr_1 [7] [i_1]))));
        var_24 = var_15;
        var_25 = (min(var_25, var_0));
        var_26 = var_16;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_27 = (min(var_27, ((min(((((((arr_5 [16] [18]) ? 18801 : -18813))) ? ((((arr_2 [i_2]) ? (arr_5 [i_2 + 1] [10]) : (arr_0 [i_2])))) : (max((arr_2 [i_2 + 2]), 34054)))), -31141)))));
        var_28 = (min(var_28, (((!((!((min((arr_0 [i_2 + 1]), (arr_0 [i_2])))))))))));
    }
    #pragma endscop
}
