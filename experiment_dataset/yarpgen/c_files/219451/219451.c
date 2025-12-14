/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (arr_2 [6]);
        var_14 = (((2 >> 30720) ? (arr_1 [i_0]) : -2097136));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_15 = ((12 ? 21 : var_0));
        arr_7 [i_1] [i_1] = var_1;
        arr_8 [i_1] = (!2097136);
    }
    var_16 = var_8;
    var_17 = (max(var_17, var_8));
    var_18 = (min(var_18, var_3));
    #pragma endscop
}
