/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (0 / (arr_0 [i_0]));
        arr_2 [i_0] = ((~(~-0)));
        var_21 ^= ((-1636432316 > (((65535 != ((min(255, 0))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (((((((!(arr_5 [i_4]))) && 1023))) | (!var_16)));
                                var_23 = var_4;
                                var_24 = 0;
                                var_25 = 0;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_26 = (arr_14 [i_5] [i_2 + 2] [i_2 - 1] [i_1 + 1] [i_0]);
                        var_27 = 730083595;

                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_28 = arr_16 [i_2] [i_2];
                            var_29 = (min(var_29, ((((~(~1023)))))));
                            var_30 = (arr_1 [i_0] [i_1]);
                            arr_19 [i_2] [i_2] [i_2] = (((((var_11 ? var_15 : (arr_10 [i_2] [i_2] [i_2 + 1] [i_2])))) ? ((min((((!(arr_7 [i_6])))), (min(1, 64))))) : 191));
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_31 = (max(var_31, (~var_10)));
                            var_32 += (((arr_10 [i_5] [i_5] [i_1 + 1] [i_5]) * (((arr_21 [i_5] [i_1] [i_1 + 1] [2] [i_1 + 1]) * (arr_11 [i_2 - 2] [i_1] [i_1 + 1] [i_7] [i_1 + 1] [i_7 - 2])))));
                            var_33 = ((((1 ? 176 : -1))) ? -2147483635 : 1);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1 + 1] [i_2] [i_2] [i_8] = (arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 2]);
                            arr_26 [i_0] [i_0] [i_2 - 2] [1] [i_2] = (67108863 + 3733167752);
                            arr_27 [i_2] [i_5] [0] [14] [i_0] [i_2] = ((((arr_24 [i_8] [i_5] [i_2 + 1] [i_1] [i_0]) >= 1)));
                            var_34 += ((!(var_5 / var_1)));
                        }
                        var_35 = ((!(~var_4)));
                        var_36 = (max(var_36, var_6));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_37 = ((((3200642707638482027 ? var_13 : (arr_16 [i_2 + 3] [i_2]))) - (((var_17 / (arr_16 [i_2] [i_2]))))));
                        var_38 = ((-((var_4 ? -var_10 : (arr_21 [i_2] [i_1 + 1] [i_1 + 1] [i_2] [i_9])))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_39 = ((!(arr_15 [i_2 - 2] [i_2 - 1] [i_2] [i_1] [10])));
                        var_40 = var_12;
                        var_41 = (min(var_41, (((arr_31 [i_0]) >= ((~(arr_31 [i_10])))))));
                    }
                    var_42 = (max(var_42, (~var_4)));
                    var_43 = (~1);
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_34 [i_11] [i_11] = (arr_1 [i_11] [i_11]);
        var_44 = (max(var_44, var_6));
        var_45 -= var_16;
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_46 |= var_2;
        var_47 ^= (arr_35 [i_12]);
        arr_37 [18] &= (~1);
        var_48 = (((((var_19 > (arr_36 [i_12]))))));
        var_49 ^= (arr_35 [i_12]);
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_50 += (((((arr_7 [i_13]) ? 1023 : var_8))));
        var_51 -= ((-6826660235804905208 ? var_13 : -1));
        arr_42 [i_13] = (~-1);
    }

    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    var_52 = (min((((((var_7 ? (arr_51 [i_15] [i_15] [i_14]) : (arr_41 [i_14] [i_14]))) > (arr_44 [i_14] [i_16])))), (arr_33 [i_14])));
                    var_53 = ((!(arr_21 [i_14] [i_15 + 1] [i_15] [i_15 + 2] [i_14])));
                    var_54 = ((!(((arr_35 [i_15 + 1]) < (arr_5 [i_15 - 1])))));
                }
            }
        }
        var_55 ^= (arr_50 [1]);
        var_56 = (((((((arr_12 [i_14] [i_14] [i_14] [i_14] [i_14]) ? -7711463285542870967 : (arr_5 [i_14])))) ? ((2483907493 >> (var_0 - 451897159))) : (var_18 || 191))));
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 17;i_18 += 1)
        {
            {
                var_57 = (max(var_57, (((~((((var_8 ? (arr_57 [1]) : (arr_36 [8]))))))))));
                var_58 = ((((((arr_53 [i_17 - 1]) >> (((var_6 || (arr_54 [i_18]))))))) != (min((((arr_53 [i_18]) ? var_6 : (arr_55 [i_17] [i_17] [i_17]))), ((min(var_10, var_8)))))));
                var_59 += (max((min((7711463285542870976 >= 7), 561799544)), (arr_52 [i_17 - 1])));
            }
        }
    }
    var_60 -= (1 % 1);
    #pragma endscop
}
