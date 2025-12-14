/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((~((var_2 ? var_7 : var_3)))), ((((((var_5 ? var_3 : var_5))) ? var_8 : 497)))));
    var_11 = (min(var_11, (((var_8 ? (((-var_4 ? ((var_2 ? var_7 : var_2)) : ((min(var_5, var_0)))))) : (((var_3 ? var_2 : var_4))))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = ((!((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : var_1)))));
        var_13 = var_7;
        var_14 = ((var_8 ? var_0 : ((+((min((arr_1 [i_0]), -497)))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 = ((!(((((((arr_3 [i_1 + 1]) ? var_8 : (arr_3 [i_1])))) ? var_7 : (arr_4 [i_1]))))));
        var_16 = ((((var_0 ? var_2 : var_0)) & (((arr_0 [4]) ? (arr_5 [i_1 - 1] [i_1]) : var_1))));
    }
    #pragma endscop
}
