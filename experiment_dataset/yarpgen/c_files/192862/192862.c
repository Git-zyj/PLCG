/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!(((((min(var_9, var_3))) ? ((var_0 ? var_3 : var_7)) : (max(var_9, 0))))));
    var_18 &= (!var_5);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0] [i_0 + 2]) ^ var_15));
        var_20 = (min(var_20, (((!(arr_1 [8] [8]))))));
    }
    #pragma endscop
}
