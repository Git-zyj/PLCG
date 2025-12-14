/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [1] [1] = (((arr_2 [i_0]) ? 20 : (arr_2 [16])));
        arr_4 [i_0] = var_17;
        var_19 = (((arr_1 [i_0]) / (arr_1 [i_0])));
    }
    var_20 = -11285;
    var_21 = var_8;
    var_22 = var_12;
    #pragma endscop
}
