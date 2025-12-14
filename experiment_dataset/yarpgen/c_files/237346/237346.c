/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        arr_2 [i_0] = 119;
        arr_3 [i_0] = (((var_10 > 4166017258732035230) << (((arr_1 [i_0]) ? 0 : var_3))));
    }
    var_17 = -30747;
    var_18 = var_15;
    #pragma endscop
}
