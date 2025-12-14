/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(((((var_2 ? 247 : var_0))) ? var_7 : ((0 ? var_2 : var_1)))));
    var_12 = (min(((min((max(var_1, var_3)), (min(var_1, 237))))), (min((~251), var_9))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (min(((~(arr_1 [i_0 + 1]))), ((max(8, var_3)))));
        arr_2 [i_0] = (max(((((max(10, 18195544906584590880))) ? (min(28, 264629406)) : 17)), 1));
    }
    #pragma endscop
}
