/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((~((var_8 ? var_15 : var_2))))) ? var_4 : (((((var_8 ? var_7 : var_6))) | ((var_15 ? var_14 : var_10))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_20 = 288230376151711744;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [11] = (((arr_4 [i_1] [i_1]) * (arr_4 [i_1] [i_1])));
        var_21 = (((((arr_4 [i_1] [i_1]) - (arr_2 [i_1])))) ? ((((((arr_3 [2]) ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1])))))) : (max((((arr_3 [i_1]) ? (arr_1 [i_1]) : (arr_4 [i_1] [i_1]))), (arr_1 [i_1]))));
    }
    #pragma endscop
}
