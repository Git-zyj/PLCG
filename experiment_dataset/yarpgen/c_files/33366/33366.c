/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((36 / (((7970679505023779153 % var_7) | var_1))));
    var_11 = ((((((var_3 ^ 18446744073709551615) ? 12 : var_4))) && 99));
    var_12 = (max(var_12, var_4));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 |= (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 0)) >= (arr_1 [i_0]))) ? (-9223372036854775807 - 1) : (((((min(0, 3085135031316876674)) < 255))))));
        arr_2 [i_0] = (((((arr_0 [i_0]) && 18446744073709551598)) ? (var_6 * 18446744073709551615) : (arr_1 [i_0])));
    }
    #pragma endscop
}
