/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((9223372036854775802 & -43) * var_6));
    var_18 = ((((((min(-22, var_11)) ^ (var_11 / 93)))) & (max((43 & var_13), -var_16))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : -43))) ^ var_2)), ((((~var_12) ^ (-43 & 1673861766))))));
        var_20 = (max((((-792660252413476093 | 124) ^ (arr_0 [i_0 - 1] [i_0 - 1]))), ((((((var_6 | (arr_2 [i_0])))) ? ((min((arr_1 [i_0]), var_9))) : var_16)))));
    }

    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_21 = ((((2150236900307563235 ^ ((var_4 ? var_1 : 536870911)))) & 46060));
        var_22 = (arr_1 [i_1]);
        var_23 = (((((((arr_3 [i_1]) & (-127 - 1))) ^ (var_5 / var_11))) < (arr_2 [i_1 - 3])));
    }
    #pragma endscop
}
