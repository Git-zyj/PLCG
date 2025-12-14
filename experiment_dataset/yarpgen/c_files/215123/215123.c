/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (var_11 | -1)));
    var_16 = var_3;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 ^= (var_11 ? (((((((arr_1 [12]) < var_0))) >> ((((-(arr_1 [8]))) + 554))))) : ((10445 ? -1 : 18446744073709551615)));
        var_18 = var_14;
        arr_3 [12] |= var_4;
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_19 = (((((((var_8 ? var_5 : var_3))) ? (arr_1 [i_0]) : (arr_1 [i_0]))) * ((((((~(arr_1 [i_0]))) + 2147483647)) >> ((((~(arr_2 [0] [0]))) - 17202111171627950048))))));
    }
    #pragma endscop
}
