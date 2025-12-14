/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (~255);
        var_18 = var_0;
        arr_3 [i_0] = (((~(((arr_1 [i_0]) >> (-1 + 8))))));
        var_19 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 -= (((arr_5 [i_1] [i_1]) ? (((var_2 && (arr_4 [i_1])))) : (arr_4 [i_1])));
        var_21 = ((!(arr_4 [i_1])));
        var_22 = 6637755324409308430;
    }
    var_23 = var_1;
    var_24 = var_3;
    #pragma endscop
}
