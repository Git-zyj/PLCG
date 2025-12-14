/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 / ((532676608 ? (((var_2 ? var_6 : var_8))) : ((var_3 ? var_3 : var_14))))));
    var_17 = (-23430 ? -23430 : -23428);
    var_18 = ((-(((~var_6) ? var_4 : var_4))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((((arr_1 [2] [5]) ? var_6 : var_15))) ? ((23429 ? (arr_0 [4]) : (arr_1 [2] [i_0]))) : var_3));
        var_20 = (min(var_20, (((-(arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_21 = (arr_3 [i_1]);
        var_22 ^= ((0 >> (18439 - 18435)));
    }
    #pragma endscop
}
