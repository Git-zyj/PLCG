/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((max(((min(var_12, 59687))), var_19))) ? var_12 : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0]) ? var_16 : var_12));
        var_22 = (max(var_22, var_6));
        var_23 = ((-1 ? ((8371 ? -23 : (arr_0 [i_0]))) : 30));
        var_24 = (arr_1 [i_0]);
    }
    var_25 += ((((max(1, 16))) ? var_7 : (((((var_5 ? -2 : 57)) / var_7)))));
    #pragma endscop
}
