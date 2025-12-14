/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((11543 ? ((((max(2292946642989819201, var_4))) ? (((var_7 ? var_8 : var_2))) : (min(var_3, 9223372036854775803)))) : var_8));
    var_11 = ((((((((min(var_2, var_1))) ? var_7 : ((-566391142210072803 ? var_2 : var_3)))) + 9223372036854775807)) >> (var_9 - 26915)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = var_7;
        arr_2 [i_0] = ((((-(min((arr_1 [0] [0]), var_3))))) ? (arr_0 [i_0]) : (((((max((arr_0 [i_0]), 0))) ? 511 : (((arr_0 [i_0]) ? var_1 : -20637))))));
        arr_3 [i_0] = var_3;
    }
    var_13 = ((var_4 ? (min(var_2, var_4)) : (((((min(var_3, var_6))) ? var_8 : var_1)))));
    #pragma endscop
}
