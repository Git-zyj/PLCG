/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 + ((var_2 ? 13181136843614489789 : ((max(var_0, var_12)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [0] = ((var_5 & (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0])));
        var_21 = arr_2 [i_0] [1];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 = ((0 ? 2110570681 : 1116892707587883008));
        var_23 = (max(var_23, (arr_0 [i_1] [i_1])));
        arr_7 [i_1] [i_1] = (min((min(var_8, (arr_2 [i_1] [i_1]))), (((-(arr_2 [i_1 - 1] [i_1 - 1]))))));
        arr_8 [i_1] = (min(-7952369977187207197, 0));
    }
    var_24 = var_3;
    var_25 = var_17;
    #pragma endscop
}
