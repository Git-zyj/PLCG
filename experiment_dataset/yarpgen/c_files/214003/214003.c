/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, ((((((max(var_12, (arr_1 [i_0] [i_0]))) | var_14)) >> ((((min(1, 21))) ? ((((arr_1 [i_0] [i_0]) > 5083779213017954159))) : var_0)))))));
        var_20 = (((((1 ? 1 : (9 | 21)))) ? (((arr_0 [i_0] [5]) ? ((var_15 ? (arr_1 [i_0] [i_0]) : var_8)) : (((arr_0 [i_0] [i_0]) & var_14)))) : var_2));
        var_21 = (min(var_21, ((max(1, 1)))));
        var_22 *= ((((max(34326183936, (-17328 || 1)))) || ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    var_23 = (max(var_23, var_8));
    var_24 = (min(var_8, ((var_8 ? ((var_0 ? var_6 : 90)) : (63 == var_14)))));
    #pragma endscop
}
