/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? ((1 ? var_0 : var_14)) : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((var_4 ? var_10 : (~var_9)));
        var_21 = ((0 ? 2 : 31));
        arr_2 [i_0] [i_0] |= (((((arr_0 [i_0]) | var_6)) <= var_14));
    }
    #pragma endscop
}
