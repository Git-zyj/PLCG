/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 ? -1 : ((var_0 ? ((max(var_11, var_14))) : var_11))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [9] = var_1;
        var_17 = ((~(arr_0 [i_0])));
        arr_3 [i_0] = (((arr_0 [12]) % 355234631));
    }
    #pragma endscop
}
