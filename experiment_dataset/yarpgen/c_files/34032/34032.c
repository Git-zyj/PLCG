/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 -= var_4;
        var_15 &= (((5431511833767198496 & var_9) ? (arr_0 [i_1]) : var_5));
    }
    var_16 = (min(((var_12 - ((var_9 ? var_7 : 4192256)))), ((((!var_10) ? -28070 : var_10)))));
    #pragma endscop
}
