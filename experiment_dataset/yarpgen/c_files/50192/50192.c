/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0 - 2]) + 9318238449118817346));
        var_17 = (arr_1 [i_0 - 3]);
        var_18 = (((((!(arr_1 [i_0 + 2])))) / (arr_1 [i_0 - 2])));
    }
    var_19 = ((((((((14082886943381092457 ? var_2 : 9223372036854775807))) ? var_4 : var_14))) ? -9223372036854775790 : (min((-9223372036854775784 + 2018850301), (-9223372036854775807 * var_6)))));
    var_20 = (min(var_5, ((var_2 >> (9223372036854775807 ^ 9223372036854775797)))));
    #pragma endscop
}
