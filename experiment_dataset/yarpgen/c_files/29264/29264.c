/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [6] [i_0] &= (!var_2);
            arr_5 [6] |= ((((((((0 ? (arr_0 [6]) : 0))) ? 11844407446161783973 : -1275925975))) ? (((((-(arr_2 [i_0 - 1] [i_1] [i_1])))) ? (arr_1 [1] [6]) : (arr_1 [4] [1]))) : (((var_5 ? (arr_1 [1] [i_1]) : 13594)))));
        }
        var_12 = (max(var_12, (((3368321530 ? 1 : 1)))));
        var_13 = var_9;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_14 -= (((var_6 ? 976235062202268607 : 11844407446161783973)));
        var_15 = (min(var_15, (arr_6 [i_2])));
        var_16 = -5350544928095633874;
        var_17 -= 267911168;
    }
    var_18 = (min(var_18, var_2));
    #pragma endscop
}
