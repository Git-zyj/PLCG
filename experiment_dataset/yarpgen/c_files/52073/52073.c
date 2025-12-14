/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_0 || ((((var_10 ^ var_9) ? (var_10 ^ -10) : var_1))))))));
    var_14 = ((((!(((var_9 ? 2810619889 : 12750))))) ? (((~((max(var_11, var_2)))))) : var_4));
    var_15 -= (max((-9223372036854775807 - 1), ((((min(var_9, var_11))) ? var_1 : var_2))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, ((min(((((arr_0 [i_0] [i_0]) + var_11))), (min(223057329, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1] [i_0])))))))))));
        var_17 = ((((((9 ? var_11 : var_11))) ? ((((arr_1 [i_0]) && var_3))) : var_12)));
        var_18 = (min(var_18, (arr_1 [i_0])));
    }
    #pragma endscop
}
