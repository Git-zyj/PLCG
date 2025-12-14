/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 && (!1)));
        arr_3 [i_0] [i_0] = ((483743482 ? -2 : var_4));
    }
    var_18 = (var_17 ? var_10 : var_6);
    #pragma endscop
}
