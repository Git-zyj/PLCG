/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 -= ((max((((var_5 + 9223372036854775807) >> (221 - 184))), (min(var_4, var_10)))));
    var_20 = (min(var_20, var_5));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_21 = ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0 - 1]) : 255))) ? (0 % -1978365337) : ((((!(arr_1 [i_0] [i_0])))))));
        var_22 = (((((arr_1 [i_0] [i_0 - 2]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0 + 1]))) & var_2));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
