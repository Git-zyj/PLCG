/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-(((((-9223372036854775807 - 1) ? var_12 : -1313295597)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 &= var_3;
        arr_4 [i_0] = (((((var_14 ? 9223372036854775807 : var_8))) ? (min((arr_1 [i_0] [i_0]), var_9)) : (arr_1 [i_0] [i_0])));
        var_21 = ((!(((var_8 ? (arr_3 [i_0]) : -9223372036854775807)))));
        var_22 |= (min(((((2389106561 & var_15) ? ((var_5 ? (arr_0 [i_0]) : var_8)) : var_7))), (arr_2 [8])));
        arr_5 [i_0] = var_1;
    }
    #pragma endscop
}
