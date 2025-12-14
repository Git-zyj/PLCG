/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_13 && var_6);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [2] [i_0] = var_14;
        arr_3 [i_0] = (((-127 - 1) >= (arr_1 [i_0])));
        arr_4 [5] = arr_0 [i_0] [i_0];
    }
    var_17 = var_10;
    #pragma endscop
}
