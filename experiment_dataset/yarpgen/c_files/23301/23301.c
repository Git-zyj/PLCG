/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(117, ((1099444518912 ? 10763271417062688796 : -120))));
    var_20 = (max(var_5, (1099444518910 << var_5)));
    var_21 *= (min((((((var_12 ? var_8 : var_18))) ? (min(2147483639, var_17)) : (max(var_14, -1)))), ((max(var_10, var_16)))));
    var_22 = (min(((-var_17 ? var_11 : var_0)), (((-127 ? 112 : var_15)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_23 &= ((((((!-2147483640) ? ((2147483647 ? 62 : var_9)) : var_14))) || ((((((-33 ? 18446744073709551611 : 8))) ? (!var_14) : (!var_0))))));
        var_24 = (min(((((max(var_14, var_16)) > (var_2 <= var_2)))), 165));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] = var_16;
        arr_6 [i_1] = (16320 - var_3);
    }
    #pragma endscop
}
