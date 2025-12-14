/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 *= (arr_0 [i_0 + 1] [i_0 + 2]);
        var_22 ^= ((((((((arr_0 [i_0] [i_0]) | (arr_0 [i_0 - 1] [i_0 + 2]))) | ((339483851 ? (arr_0 [i_0] [i_0]) : 73))))) + (max(2535582599, var_18))));
        var_23 = (((((arr_0 [i_0 - 1] [i_0]) - 73))) ? (((arr_1 [1] [i_0]) ? 1688 : (arr_1 [i_0 - 1] [14]))) : 1677);
    }
    var_24 = ((var_14 ? 1 : (((1648358858 * 255) ? var_6 : var_12))));
    var_25 = (max(var_25, ((min((((max(var_0, 1)) ? (min(var_3, var_14)) : var_8)), (((!(var_19 & 142)))))))));
    #pragma endscop
}
