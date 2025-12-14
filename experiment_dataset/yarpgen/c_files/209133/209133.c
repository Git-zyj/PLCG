/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_0 ? var_11 : var_15))) ? ((var_4 ? 12 : var_14)) : var_7)));
    var_19 |= (((((-127 - 1) ? (max(var_10, var_3)) : (min(var_17, var_1)))) - var_11));
    var_20 = ((var_11 ? 73 : 63));
    var_21 ^= ((((12454234771664378638 ? 183 : 67)) >= (((var_0 + var_3) ? var_8 : var_14))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = (arr_1 [i_0] [i_0]);
        var_23 = (min(var_23, (arr_0 [i_0])));
        var_24 = (((var_6 || var_8) ? var_10 : (arr_2 [15])));
        var_25 = (((arr_1 [i_0] [i_0]) < ((18446744073709551603 ? (arr_2 [i_0]) : var_12))));
    }
    #pragma endscop
}
