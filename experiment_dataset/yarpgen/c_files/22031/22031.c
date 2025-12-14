/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_0 [i_0]), 1))) ? ((((arr_0 [i_0]) ? 1 : (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 1))));
        arr_3 [4] = ((((((1 ? 1 : 10489486926424325693)))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (((min(1, (arr_0 [i_1 + 1])))) ? (min((arr_0 [i_1 + 1]), -94)) : ((7957257147285225920 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))));
        var_18 = 2147483640;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (58 ? (~0) : (min(7321638631370678634, ((10489486926424325696 ? 10489486926424325705 : 1)))));
        arr_10 [i_2] [i_2] |= arr_0 [i_2];
        arr_11 [0] [i_2] = (arr_0 [i_2]);
    }
    #pragma endscop
}
