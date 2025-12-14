/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] [i_0] = (((arr_1 [i_0]) ? var_10 : var_15));
        arr_6 [i_0] = (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        var_19 *= -11090;
        var_20 = var_15;
        arr_10 [i_1] [i_1] = ((var_11 ? (arr_2 [i_1]) : var_7));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_13 [i_2] = (+(((~1) ? ((max(-11090, var_4))) : (arr_2 [i_2]))));
        arr_14 [i_2] [i_2] = -var_11;
        arr_15 [i_2] = ((((((((arr_3 [i_2 + 1] [i_2 + 2]) ^ (arr_0 [3]))) & ((max(var_15, var_15)))))) ? (min((((arr_12 [i_2] [i_2 + 1]) ? 5741743596340507307 : (arr_0 [i_2]))), (!var_4))) : (arr_12 [i_2 + 2] [i_2 + 2])));
    }

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_18 [6] |= ((~((-6901757786783591800 ? (arr_16 [0]) : (arr_17 [12])))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_23 [i_3] [i_3] = ((1 ? (arr_16 [i_3]) : (arr_16 [i_3])));
            var_21 |= ((~(arr_22 [i_4 + 1] [i_3 + 1])));
            arr_24 [i_3] = (((arr_16 [i_3]) ? (arr_21 [i_4] [i_3]) : -11084));
            arr_25 [i_3 - 3] [i_3] = (arr_16 [i_3]);
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_29 [i_3] [i_3] = (((arr_17 [i_3]) ? ((~(min((arr_19 [i_3] [i_3] [i_5]), var_15)))) : (((arr_27 [i_3 - 3]) ? (max(-6901757786783591813, (arr_19 [i_3] [i_3 + 1] [i_5]))) : ((((!(arr_26 [i_3] [i_3] [i_3])))))))));
            arr_30 [i_3] = (max((min(var_10, -11069)), -var_14));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_33 [i_3] = (arr_32 [i_3] [i_3]);
            var_22 = ((1488399082 ? (arr_32 [5] [i_3]) : (arr_17 [i_3])));
        }
        arr_34 [i_3] [i_3] = (max((arr_20 [i_3] [i_3 + 1] [i_3 - 2]), ((-(arr_20 [i_3] [i_3 - 1] [i_3 - 2])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_23 = (arr_21 [i_7] [i_7]);
        var_24 = (((arr_36 [i_7]) ? (arr_21 [i_7] [i_7]) : (arr_21 [i_7] [i_7])));
        var_25 *= (((arr_17 [20]) ? (arr_17 [20]) : -11105));
    }
    var_26 = min(var_1, -var_6);
    #pragma endscop
}
