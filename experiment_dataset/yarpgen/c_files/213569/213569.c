/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        arr_4 [i_0] = ((+(min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_13 = ((124 ? (arr_6 [i_1 + 2]) : (((~(-32767 - 1))))));
        arr_7 [i_1] [i_1] = ((((((arr_3 [i_1] [i_1]) ? var_7 : (-127 - 1)))) ? (arr_6 [i_1 + 2]) : ((((arr_1 [i_1 - 1]) - (arr_2 [i_1 + 2] [i_1]))))));
        arr_8 [i_1] = (((arr_1 [i_1 + 2]) <= ((1 >> (var_0 - 1012432059)))));
    }
    var_14 = ((((var_11 >= ((min(-31860, -14772))))) ? var_8 : var_6));
    var_15 = (((((var_8 | var_4) ? ((var_3 ? var_4 : -13)) : ((var_10 | (-127 - 1))))) >> (((((~1) >> var_1)) - 2147483646))));
    #pragma endscop
}
