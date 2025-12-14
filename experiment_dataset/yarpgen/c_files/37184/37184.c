/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((0 ? var_5 : -1615174573))), var_15));
    var_18 = ((((var_4 != (var_5 <= 17))) || (((!8) && 33292288))));
    var_19 -= ((min((max(var_7, var_9)), ((var_10 ? var_6 : 15)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_20 -= -124;
        var_21 = (arr_1 [i_0 - 1] [i_0 + 3]);
    }
    #pragma endscop
}
