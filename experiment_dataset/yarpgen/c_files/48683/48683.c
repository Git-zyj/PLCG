/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((~(20573 | var_8))) | var_13));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, ((min(((27912 >= (arr_1 [i_0] [i_0]))), (!1121775464))))));
        var_22 = (min((min((arr_1 [i_0] [i_0]), (((4357171740521229022 || (arr_1 [i_0] [i_0])))))), (((!3173191831) >> ((((4357171740521229027 ? 6135005990622120758 : (arr_1 [i_0] [i_0]))) - 6135005990622120742))))));
        var_23 = var_7;
        var_24 = (min(var_24, (((((min((arr_0 [i_0]), (arr_0 [i_0])))) == (arr_1 [i_0] [i_0]))))));
        var_25 = (min(var_25, ((min(((-(((var_3 != (arr_1 [2] [i_0])))))), (((var_17 || ((min(var_17, var_1)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_26 += (16364449503977485133 & 9223372036854775807);
        var_27 = ((1 | 4427) ? (var_13 | -596887320) : (((arr_2 [i_1 - 1] [i_1]) - (arr_4 [i_1]))));
    }
    #pragma endscop
}
