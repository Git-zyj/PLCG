/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (min((((118 <= (arr_1 [i_0])))), ((255 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = var_3;
        var_12 = (~(max((arr_2 [i_0]), (min(15, (-2147483647 - 1))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (25877 && 96);
        var_13 = (-2114775904 ? (arr_1 [8]) : ((54 ? -122 : 1102878977)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = 11357;
        arr_12 [i_2] = ((47 ? 66 : -99));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_14 = (max(var_14, ((((arr_15 [i_3] [i_3]) - (arr_15 [i_3] [i_3]))))));
        var_15 = (max(var_15, (~208)));
    }
    var_16 = var_3;
    #pragma endscop
}
