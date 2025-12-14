/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = -473020662991418124;
    var_18 = ((((var_8 ? (var_8 / var_7) : -5453)) + var_0));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (4320867815334876062 > var_11);
        var_20 = (max(var_5, ((((((-2147483647 - 1) ? 1 : var_9))) ? (((arr_1 [i_0]) ? 1 : var_5)) : (arr_1 [i_0])))));
        var_21 = (((1 - 3727310656) == (((((2147483647 ^ (arr_1 [i_0])))) & ((var_10 ? (arr_0 [i_0] [i_0]) : var_3))))));
        var_22 = 9904;
    }
    var_23 = var_3;
    #pragma endscop
}
