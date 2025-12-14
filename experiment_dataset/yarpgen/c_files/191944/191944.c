/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? (((61029 ? var_11 : (0 >= 305150552)))) : ((-var_3 / (min(9223372036854775781, (arr_0 [i_0])))))));
        var_20 -= (((arr_0 [i_0]) ? (max((min(var_6, var_5)), ((min((arr_0 [i_0]), (arr_1 [i_0])))))) : ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 27043))) % (arr_1 [i_0])))));
    }
    var_21 = (max(var_21, ((min((((((var_7 ? 27044 : 0))) ? 1857077867 : ((max(var_4, var_8))))), var_16)))));
    #pragma endscop
}
