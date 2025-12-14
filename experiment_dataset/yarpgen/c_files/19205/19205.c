/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 ? ((var_2 ? var_2 : 3)) : -var_6))) ? ((var_5 ? var_9 : var_6)) : ((((var_8 & var_0) ? ((var_2 ? var_1 : var_8)) : ((0 ? var_8 : 1)))))));
    var_11 = ((var_6 ^ (((~var_0) ? (max(var_5, var_9)) : (((var_5 ? var_8 : var_0)))))));
    var_12 = ((((max(var_5, (min(var_0, var_2))))) ? (((65529 ? 1 : 1))) : var_2));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((!(((1 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_14 -= (((arr_1 [i_0]) ? ((2147483639 ? 192 : 28216)) : (1 / -14039)));
        arr_2 [i_0] [2] = (arr_1 [i_0]);
    }
    #pragma endscop
}
