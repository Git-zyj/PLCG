/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = (max(var_21, var_2));
    var_22 = (!var_3);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) % ((((arr_0 [i_0]) - var_8)))));
        arr_3 [i_0] [i_0] = (min((((arr_0 [i_0]) ? (arr_1 [i_0]) : ((var_19 ? 21705 : (arr_1 [i_0]))))), (-1 & 43812)));
        var_23 = (min(var_23, (((((((((arr_1 [20]) <= (arr_1 [1]))) ? (((arr_0 [22]) ? (arr_0 [18]) : (arr_0 [18]))) : (~7168)))) ? (((((arr_0 [10]) == (arr_0 [8]))))) : (500 * 255))))));
        var_24 = ((((((65535 ? 1 : var_7)) << (96 - 95))) == (arr_0 [i_0])));
        var_25 ^= (min(((((arr_1 [1]) != (arr_1 [4])))), ((((min(524288, (arr_1 [20])))) ? (arr_0 [14]) : (max((arr_1 [4]), 121))))));
    }
    var_26 = (min(var_26, var_18));
    #pragma endscop
}
