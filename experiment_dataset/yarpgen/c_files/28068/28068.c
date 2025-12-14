/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (!-1);
        var_15 = ((!(!var_0)));
        var_16 = (max(var_16, (((!(var_4 | var_10))))));
        var_17 = (max(var_17, (((826182756 ? (arr_2 [i_0 - 1]) : 170755550)))));
    }
    #pragma endscop
}
