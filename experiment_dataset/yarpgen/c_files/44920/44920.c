/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 > (min((61726 / var_11), 1849531771))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (min(var_14, (((((10645118349194932922 ? var_10 : var_2)) | (var_4 | var_10))))));
        arr_3 [i_0] = ((((((arr_1 [i_0]) % 22))) ? (1791405739 / 61716) : ((var_3 + (arr_0 [9])))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = ((!(-127 << 1)));
        arr_7 [i_1] = 99;
    }
    var_16 &= var_5;
    var_17 = var_4;
    #pragma endscop
}
