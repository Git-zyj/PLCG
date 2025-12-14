/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (((~-18512) ? (arr_0 [i_0]) : ((var_14 & (arr_2 [i_0])))));
        var_20 += (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((var_14 ? ((((max(5051611742260710403, var_1))) ? (arr_3 [i_1] [i_1]) : ((var_12 ? (arr_4 [i_1]) : var_12)))) : ((0 ? (min(-18505, (arr_4 [i_1]))) : ((((arr_4 [5]) ? var_18 : 31686)))))));
        var_21 = var_15;
        var_22 ^= (arr_3 [i_1] [i_1]);
        arr_6 [i_1] = (min((arr_3 [6] [7]), 65535));
    }
    var_23 = var_4;
    #pragma endscop
}
