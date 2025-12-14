/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 1001809771442481136;
        var_17 -= (!33421);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((var_5 ? (min((arr_3 [i_1] [i_1]), 0)) : (((-(((!(arr_3 [1] [i_1 + 3])))))))));
        arr_7 [i_1] = 0;
    }
    var_18 = (((((var_11 ^ ((min(var_5, var_3)))))) ? var_14 : var_12));
    #pragma endscop
}
