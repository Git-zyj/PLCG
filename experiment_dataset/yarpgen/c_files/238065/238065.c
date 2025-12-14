/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((1 ? var_16 : var_16))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!0);
        arr_3 [0] = -62491685;
    }
    var_21 = (min((!var_5), (((var_2 ? var_4 : var_11)))));
    #pragma endscop
}
