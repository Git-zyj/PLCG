/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((((((min(-2401077035894685063, var_4)) + 9223372036854775807)) >> (((var_15 | var_12) - 32211))))) ? ((var_7 ? var_10 : 2401077035894685063)) : (((7168908585894822091 ^ var_7) ^ var_13)));
    var_21 -= var_0;
    var_22 = ((var_4 * (((((var_18 >> (var_4 - 4225091418))) / ((var_17 ? var_15 : var_18)))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [15] = ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0 - 2] [10])))) ? var_12 : var_7));
        var_23 = (min(((((4294967295 > var_6) > (var_19 == -2401077035894685063)))), (min((min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))), ((min(512, 4294967295)))))));
        arr_3 [i_0] [i_0] = ((((max((arr_1 [i_0]), (arr_0 [i_0 + 1] [i_0])))) || (((((var_3 ? (arr_0 [i_0 - 2] [i_0]) : (arr_1 [i_0]))) + (max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))))));
        arr_4 [i_0] = var_4;
        arr_5 [i_0] = var_15;
    }
    #pragma endscop
}
