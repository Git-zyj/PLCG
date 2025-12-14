/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;
    var_11 = max((1 - 24724), var_8);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((((((var_2 ? var_8 : var_0))) ? var_1 : ((min(var_4, var_9))))));
        arr_5 [i_0] = (min(9223372036854775807, ((var_6 ? var_2 : (((arr_0 [22]) ? var_1 : (arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 = (!58094);
        var_13 = ((!(var_3 % var_5)));
        var_14 = (min(var_14, (((!(arr_0 [14]))))));
    }
    #pragma endscop
}
