/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? ((((min(var_7, var_9))) ? var_0 : var_5)) : ((min(var_9, var_4)))));
    var_12 = ((var_3 ? var_1 : ((((!150) ? var_1 : (~var_6))))));
    var_13 = var_2;
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = arr_1 [i_0];
        var_15 &= ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_16 ^= ((((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? ((((arr_5 [i_1]) & (arr_5 [i_1])))) : ((var_2 ? var_9 : var_0))));
        var_17 = (max(var_17, 106));
        arr_8 [1] = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_18 = (!var_1);
        var_19 = (max(var_19, ((((((var_0 / (arr_6 [i_2])))) ? var_2 : var_0)))));
        arr_11 [i_2] = (arr_7 [i_2]);
        var_20 ^= ((24 ? var_5 : var_6));
    }
    #pragma endscop
}
