/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((1 ? -3822499695340866208 : 7385047901862698852));
    var_14 = ((var_7 ? ((var_7 ? (9223372036854775807 - 18) : 9223372036854775807)) : 55323));
    var_15 = ((((var_7 ? var_12 : var_3)) >= ((((9223372036854775807 - var_9) ? ((var_7 ? var_10 : var_8)) : (var_9 | 1))))));
    var_16 = var_1;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = var_7;
        var_19 = -2165213471200239048;
        var_20 = ((((-9223372036854775794 ? 9223372036854775807 : -9223372036854775806)) << (((((-9223372036854775807 - -9223372036854775790) + 80)) - 63))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (((((((((arr_5 [i_1]) ? -9223372036854775784 : 11))) ? ((((arr_6 [i_1]) ? var_10 : (arr_3 [i_1] [14])))) : (arr_5 [i_1])))) ? (1 ^ 7878930860545275988) : (((var_11 ? ((((arr_3 [i_1] [i_1]) & (arr_4 [i_1])))) : (var_6 / var_4))))));
        var_22 = (arr_5 [i_1]);

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_23 = (arr_6 [i_2]);
            var_24 = var_0;
            var_25 = -9223372036854775807;
        }
        var_26 = 32753;
    }
    #pragma endscop
}
