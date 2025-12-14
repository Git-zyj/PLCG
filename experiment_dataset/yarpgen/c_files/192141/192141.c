/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [9] [i_0])))));
        var_16 |= (((~var_11) ? ((max((arr_1 [i_0]), var_8))) : (min((~5), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 &= ((((((21 + (arr_1 [i_1]))))) - ((-((max((arr_2 [13]), 65525)))))));
        arr_6 [i_1] = ((!(((-(((!(arr_0 [11] [8])))))))));
        var_18 = ((var_10 & (((arr_2 [i_1]) ^ (arr_2 [i_1])))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_19 = (min(var_19, (arr_8 [i_2])));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 = ((0 && (arr_7 [i_3])));
            arr_11 [i_3] [i_2] = (((arr_9 [i_2] [i_2] [i_3]) ? (arr_9 [i_2] [i_3] [i_2]) : var_13));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_14 [i_2] [13] [i_4] &= var_3;
            arr_15 [i_4] = ((-(arr_7 [i_2])));
        }
    }
    var_21 &= -var_7;
    #pragma endscop
}
