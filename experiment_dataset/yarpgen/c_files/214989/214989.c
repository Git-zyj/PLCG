/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_10 = (max(var_10, (1 | 31)));
        arr_2 [i_0] [i_0] = 0;
    }
    var_11 = ((((min((min(var_5, var_5)), 1))) ? ((var_3 ? var_1 : -1)) : var_1));
    #pragma endscop
}
