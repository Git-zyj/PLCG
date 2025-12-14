/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((((var_7 ? var_7 : 1916770750))) ? var_0 : ((var_7 ? var_4 : var_9)))) + (((198 ? 1 : 23877)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (-1916770751 ? 255 : (arr_0 [i_0]));
        var_14 = ((65535 ? var_2 : var_4));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 *= (((var_8 ? var_3 : var_11)));
        var_16 -= (~237);
    }
    #pragma endscop
}
