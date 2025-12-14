/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (max(43062, 4080));
        arr_3 [i_0] = 65525;
        arr_4 [i_0] = (min(((((((arr_0 [i_0]) / var_4)) != ((min((arr_0 [0]), 40471)))))), ((-(arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (min(var_18, (arr_6 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_19 += (arr_5 [i_2]);
                                var_20 = ((-((10 | (arr_15 [i_2 - 1] [i_4])))));
                                var_21 = (min(var_21, (((65530 / (65526 != 1125865547104256))))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2 + 1] [i_3] = (arr_13 [i_2] [i_1]);
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 9;i_9 += 1)
                {
                    {
                        var_22 &= 0;
                        var_23 = (min(((var_16 | (arr_20 [i_6 + 1] [i_6 + 1]))), ((max((arr_20 [i_6 - 2] [i_6 - 1]), var_3)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 10;i_11 += 1)
            {
                {
                    var_24 = (min(var_24, (((max(var_11, var_5))))));
                    var_25 = ((((min(18959, var_9)) / 10)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((((!(arr_21 [i_6 - 1])))) != (((var_4 != (arr_10 [i_6 - 1] [i_11 - 3]))))))));
                                var_27 = (min((28423 != 2), ((!(arr_19 [i_6 - 2])))));
                                arr_41 [i_6] [i_12] [i_11] [i_12] [i_11] = (min(32748, (max(var_16, var_3))));
                                arr_42 [i_12] = ((!((min(var_2, var_12)))));
                            }
                        }
                    }
                    var_28 = (min(var_28, (~var_2)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    {
                        var_29 |= min(1125865547104256, 1);

                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            var_30 = (min(var_30, ((max(5992594287239808848, (((!(var_1 / 40443)))))))));
                            arr_57 [i_14] [i_15] [i_14] &= (arr_47 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 + 1]);
                            var_31 = (max((((((max(-32012, var_15))) | (arr_44 [i_6 + 1] [i_6 - 2] [i_6 + 1])))), ((-(arr_55 [i_6] [i_16] [i_14] [i_14] [i_6])))));
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            var_32 = var_14;
                            arr_61 [i_16] [i_14] [i_15] [i_16] [i_18] = ((((min((32006 && var_8), (var_13 != var_2)))) << (((max((arr_15 [i_6 + 1] [i_18]), var_12)) - 3266295605))));
                        }
                        for (int i_19 = 1; i_19 < 12;i_19 += 1)
                        {
                            arr_64 [i_19] [i_16] [i_14] [i_14] [i_6 - 2] = (!32011);
                            var_33 += ((0 >> (255 - 248)));
                            var_34 ^= var_7;
                            var_35 = (min(var_35, (!var_0)));
                            var_36 += ((!(((32767 && 40290) || (3802081315825804207 || 65525)))));
                        }
                        var_37 = (((-var_7 + 9223372036854775807) >> (((((arr_10 [i_6 - 2] [1]) << (((arr_10 [i_6 + 1] [i_6 - 2]) - 7645426698216111404)))) - 7645426698216111352))));
                        var_38 &= ((((((var_7 >> (var_3 - 56))) | (-43 != -28951))) | (max((arr_53 [i_6] [i_6 - 1] [1] [i_16] [0] [i_6 - 1]), var_9))));
                    }
                }
            }
        }
        var_39 = (min(var_39, ((((!var_1) | var_15)))));
        var_40 = (min((arr_10 [i_6 + 1] [i_6]), (((var_12 >> (var_16 - 20674))))));
    }
    var_41 = 25081;
    var_42 -= (max(((max(var_14, var_1))), ((min(var_4, (9223372036854775805 != 32006))))));
    #pragma endscop
}
