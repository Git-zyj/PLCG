/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_3] [i_0 + 4])));
                        var_14 = (((var_0 | (arr_1 [i_3 - 1] [5]))));
                        var_15 = ((((((arr_0 [i_0]) && var_11)) && (-1082343998 || -1082343998))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_16 = (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & 3315383317));
                    var_17 = ((((((((arr_11 [i_0] [i_0] [i_0] [i_0]) < 1107373173)))) % (((arr_16 [i_0] [i_0] [i_5]) & (arr_3 [i_4]))))));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_18 = (((arr_8 [i_6] [i_6] [i_6 + 2] [17] [i_6] [i_6]) || (arr_7 [i_6] [i_6] [i_6])));
        var_19 = (1468085782 / 1082344009);
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_20 = ((92 * (var_12 || 4037)));
        var_21 |= (var_5 | var_5);
        var_22 = (min(var_22, (var_12 - var_8)));
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            {
                var_23 = (max(var_23, (((((arr_10 [i_8] [i_8] [i_8] [i_9] [i_8 - 1] [7]) % (var_10 <= var_9)))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_24 = var_8;
                            var_25 = var_4;
                            var_26 |= ((((arr_23 [i_8] [i_8]) >= (arr_30 [i_11] [i_8 + 1]))));
                        }
                    }
                }
                var_27 = -18883755;

                for (int i_12 = 2; i_12 < 22;i_12 += 1)
                {
                    var_28 = ((((7455888560906778955 / (((((arr_19 [i_8] [i_8 - 2]) != var_2)))))) == (1468085782 / 3315383317)));
                    var_29 = ((-3956919127464034440 && (-7802321442524124429 & 4037)));
                    var_30 = 960;
                    var_31 = (7122 / -1061321540);
                    var_32 = ((((((((arr_24 [i_9]) <= -7455888560906778956)))) ^ (var_10 - var_12))));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_33 ^= (((var_0 / (var_6 >= 62914560))));
                    var_34 += 7013423489712498407;
                    var_35 = (((14904285669670856035 & (arr_5 [i_8 + 1] [i_8] [9]))));
                    var_36 = (var_2 > -20181);
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    var_37 = ((((((arr_36 [17] [i_9] [i_9 - 1]) - 16384))) % ((((arr_1 [i_8] [i_9]) - 1073479680)))));
                    var_38 = 638229278;
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                var_39 = (3347740842108400204 != 64);
                                var_40 = ((((((arr_0 [i_8]) < -3956919127464034440))) & (var_5 != 27635)));
                            }
                        }
                    }
                    var_41 = (arr_23 [i_8] [i_8]);
                    var_42 = (((((((arr_34 [i_9] [i_9] [i_14]) != 3347740842108400204)))) / ((15762598695796736 << (1008657889 - 1008657883)))));
                }
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_43 = 224;
                    var_44 = 130;
                }
            }
        }
    }
    #pragma endscop
}
