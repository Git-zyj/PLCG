/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_3 ? var_5 : (max(((var_3 ? var_10 : var_9)), (((150 ? var_10 : var_12))))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((-((((547385046 > var_4) > (~-4326574981679048243))))));
        var_15 = (arr_1 [i_0]);
        arr_2 [i_0] = ((!((((4326574981679048243 ? (arr_1 [i_0]) : (arr_1 [9])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = ((((((arr_4 [i_1] [i_1]) - (arr_3 [i_1])))) ? (((arr_3 [i_1]) << (arr_3 [i_1]))) : var_3));
        var_17 = (max(var_17, (((-25987 > (arr_5 [i_1] [i_1]))))));
    }
    #pragma endscop
}
