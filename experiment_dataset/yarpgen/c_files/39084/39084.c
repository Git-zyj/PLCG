/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((((((var_4 ? 28946 : var_5)) << ((((0 ? var_3 : var_16)) - 62482)))) * (((((var_12 ? var_14 : var_6)) >> (((~var_13) + 60377)))))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = (((((arr_0 [i_0 + 1]) <= (arr_0 [i_0 - 3]))) ? ((~(arr_0 [i_0 + 1]))) : (((((arr_1 [i_0 - 4]) >= -32765))))));
        var_19 += ((((((arr_0 [i_0 - 2]) > var_2))) & var_9));
        var_20 = ((var_10 ? 2475419424 : (!var_15)));
        var_21 = ((var_6 | (min((((63 ? var_13 : var_14))), (max(var_15, 1069175860))))));
        arr_3 [i_0] = ((((var_3 ? (arr_0 [i_0 - 2]) : var_8))) ? (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : var_10)) : (((((-9223372036854775807 - 1) < (arr_0 [i_0 - 4]))))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = ((min(9223372036854775807, -72)));
        var_23 = ((((((min(var_12, var_6)) * var_6))) ? ((((min(var_7, 46501))) ? ((min(1197, var_16))) : (((arr_7 [i_1] [i_1]) ? -4096 : (arr_4 [i_1 + 2] [i_1]))))) : ((1 << (1 < 1)))));
    }
    #pragma endscop
}
