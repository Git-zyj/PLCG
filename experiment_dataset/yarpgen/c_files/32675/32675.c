/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = 255;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((1752165727 ? 1 : (-9223372036854775807 - 1)));
        arr_4 [i_0] [i_0] = (~0);
    }
    var_12 = var_8;
    #pragma endscop
}
