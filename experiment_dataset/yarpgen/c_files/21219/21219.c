/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((1 || (arr_1 [i_0] [i_0])))), ((17249 + (var_5 % 32505856)))));
        var_12 = (min(var_12, var_6));
        arr_4 [i_0] = (~9223372036854775807);
        var_13 *= (min((((arr_0 [10]) ? (((var_0 - (arr_0 [16])))) : var_11)), (((-(var_4 / -4545135639813415588))))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [0] &= (((arr_0 [i_1]) ? var_5 : ((-(arr_7 [i_1] [i_1])))));
        arr_9 [i_1] = (((((~(arr_2 [i_1])))) ? ((((!((max((arr_1 [i_1] [i_1]), 0))))))) : ((2 ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
        var_14 = (!-4545135639813415587);
        var_15 = (((min((min(var_2, 2712359765)), 978390875)) | (((596539053 < 4545135639813415565) ? (((1 ? -25337 : 0))) : 80195879))));
    }
    var_16 = var_2;
    var_17 = (((((var_5 / (((min(var_3, var_2))))))) / ((-(7192653224901107514 * var_2)))));
    #pragma endscop
}
