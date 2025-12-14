/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (((max(1, ((8 ? 4 : 2462928127)))) % var_16));
    var_22 = ((-18446744073709551612 * ((((max(var_15, -8226))) ? ((min(var_5, var_16))) : (32381 * var_17)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) <= ((18446744073709551610 ? -22005 : (arr_1 [i_0])))));
        arr_4 [i_0] = arr_2 [i_0];
        var_23 = ((!(arr_2 [i_0])));
        var_24 = (max(var_24, ((((((var_11 + (arr_0 [i_0])))) - 3618987105)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = (min((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1]))), ((max(23, var_16)))));
        arr_9 [i_1] [i_1] = (min(((var_11 ? (var_18 < var_7) : (arr_0 [i_1]))), (arr_6 [i_1])));
        var_25 = (max(var_25, (((!(arr_7 [i_1] [i_1]))))));
    }
    #pragma endscop
}
