/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = (~var_8);
        arr_2 [i_0] = (((!var_8) ? var_8 : (!11611206971134557568)));
    }
    var_13 = ((((max(123, 45484))) || ((((((var_0 ? var_4 : var_11))) ? var_0 : ((max(var_6, var_10))))))));
    #pragma endscop
}
