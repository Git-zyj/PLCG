/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [5] = (4007705204 < 1641477474);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (-968222939 ^ 968222939);
                    var_17 = (max(var_17, (arr_1 [i_1])));
                    var_18 = (max(var_18, (((2016967165 < (arr_0 [i_1] [i_1]))))));
                    var_19 = -2076796966;
                    arr_8 [i_0] [i_1] [21] = (102 / var_0);
                }
            }
        }
        var_20 = 968222968;
        var_21 = var_0;
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_22 = ((var_7 ^ (((arr_10 [i_3]) ^ ((min(var_2, var_4)))))));
        var_23 ^= (arr_1 [i_3 + 1]);
        var_24 = var_3;
        arr_11 [i_3 + 1] = var_9;
    }

    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_25 = ((968222938 * (arr_4 [i_4] [6] [i_4 + 1])));
        arr_14 [i_4 + 1] = var_0;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_26 = (max(var_26, ((min((var_10 && 2278000110), (arr_0 [i_5] [i_5]))))));
        var_27 = (max(var_27, (((((min((arr_0 [i_5] [i_5]), -776008132))) ^ (max((arr_4 [i_5] [i_5] [i_5]), (min(8896959534234176730, 690)))))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_21 [i_6] = 968222939;
        var_28 *= (max(4235161785, 32103));
        var_29 ^= var_0;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (var_0 >= -1651274686);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_37 [i_7] [i_8] [i_8] [11] [i_8] = (min(1392505915, (max(106665797, -1911504210))));
                                var_30 = (max((arr_28 [i_9] [2]), 124));
                            }
                        }
                    }
                    arr_38 [5] [1] [i_9] = ((~((-1474632750 ^ (arr_1 [i_7])))));
                    arr_39 [1] [i_8] [i_8] [1] |= (max(((min((arr_0 [i_7] [i_9]), -1343))), (2333975801 ^ -854)));
                    var_31 += var_3;
                    arr_40 [i_8] = (min(-11235, (((!(arr_36 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                }
            }
        }
        arr_41 [i_7] [i_7] = ((((((arr_31 [i_7] [i_7] [i_7]) * (arr_31 [i_7] [i_7] [i_7])))) * ((var_1 / (((var_6 * (arr_1 [i_7]))))))));
    }
    var_32 = ((var_1 * (120 / var_8)));
    var_33 = (max(var_33, (var_13 < 968222933)));
    var_34 = max(var_12, var_0);
    #pragma endscop
}
