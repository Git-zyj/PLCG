/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = 12959;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, ((((arr_1 [i_0]) || -72)))));
        arr_3 [i_0] = ((var_2 ? var_4 : (arr_1 [i_0])));
    }
    #pragma endscop
}
