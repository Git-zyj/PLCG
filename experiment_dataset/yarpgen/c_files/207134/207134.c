/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (~9223372036854775807);

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 4] = -1723859712;
        arr_3 [1] |= ((((max((arr_1 [8]), ((((arr_1 [1]) ? (arr_0 [i_0]) : -1723859710)))))) ? (((arr_1 [8]) & (arr_0 [9]))) : (((-1 ? (arr_0 [i_0 + 1]) : (((2 > (arr_0 [i_0])))))))));
        var_12 = ((+(min((-9223372036854775807 - 1), (((536870911 == (arr_1 [i_0]))))))));
        var_13 = (max(var_13, 63));
    }
    var_14 |= var_4;

    /* vectorizable */
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = arr_7 [1] [i_1];
        arr_9 [i_1] = ((~(arr_7 [i_1 - 1] [i_1 + 1])));
    }
    #pragma endscop
}
