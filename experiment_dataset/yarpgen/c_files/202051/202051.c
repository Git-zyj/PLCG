/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = var_2;
        var_18 += ((((max((min(var_13, var_9)), var_13))) ? ((((var_1 >> (var_0 - 12676727279610010549))) / (arr_0 [i_0]))) : ((min(4294967295, 1)))));
        var_19 = (((((var_14 ? ((var_3 ? var_7 : var_15)) : (arr_0 [i_0 - 1])))) ? (((arr_1 [i_0] [i_0 - 1]) >> (((arr_1 [i_0 - 1] [i_0 - 1]) - 2193547756)))) : (((var_14 ? (arr_0 [i_0 - 1]) : ((((arr_0 [1]) == (arr_0 [i_0])))))))));
        var_20 = (max(var_20, (((((((arr_0 [i_0]) || (var_6 | var_9)))) ^ ((((var_3 / var_9) < ((var_13 ? (arr_0 [i_0]) : var_12))))))))));
    }
    var_21 = (max(var_21, (((var_2 ? var_6 : (((((var_13 ? var_6 : var_8))))))))));
    var_22 = var_2;
    #pragma endscop
}
