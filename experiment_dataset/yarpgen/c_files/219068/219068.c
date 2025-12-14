/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -28181;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 = (((((var_1 ? var_9 : 7552443793994035367) - ((max((arr_0 [i_0 + 1]), var_10)))))));
        arr_2 [7] [i_0] = (17882961887719583366 / 13682558947111527442);
        arr_3 [1] [1] = (((arr_1 [i_0]) ? ((((max(var_4, var_0))) ? (min(var_7, 2629271200)) : 1)) : ((max(var_8, (arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = var_8;
        var_14 = ((((min(-28181, (arr_0 [i_0 - 3])))) ? (var_2 / var_8) : ((var_7 ? (arr_1 [i_0 - 1]) : var_8))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 |= var_0;
        var_16 = (((~1686279745165734794) >> (((!(arr_6 [i_1] [i_1]))))));
        var_17 += (max(var_6, ((var_3 ? (arr_5 [i_1]) : 0))));
    }
    var_18 = var_0;
    #pragma endscop
}
