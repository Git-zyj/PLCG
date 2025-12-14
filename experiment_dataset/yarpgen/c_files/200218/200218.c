/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 = ((~(-127 - 1)));
        arr_2 [i_0] = ((((((((65 / (-127 - 1)))) ? ((57623 ? var_17 : var_13)) : (arr_1 [i_0 + 1])))) ? var_2 : (arr_1 [11])));
        var_21 = ((var_19 ? var_5 : (var_11 / var_1)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_22 = 119;
        var_23 -= (((((var_4 ? var_16 : -1))) ? (arr_3 [5]) : ((var_7 ? (arr_0 [i_1]) : var_18))));
        var_24 = (((!(-127 - 1))));
    }
    var_25 = (!((((((~var_9) + 9223372036854775807)) << (var_0 - 4826253088970463848)))));
    var_26 &= var_13;
    #pragma endscop
}
