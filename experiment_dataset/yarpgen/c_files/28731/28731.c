/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((~(~var_8)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 ^= (((((-7515093638631243142 > -4) < var_13)) ? ((-(~var_8))) : var_15));
        var_19 = ((((1810596267 ? 32737 : 3)) + var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1]);

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_20 = (arr_6 [i_1] [i_2] [i_2 - 1]);
            var_21 = (arr_6 [i_1] [6] [i_1]);
            var_22 = var_15;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_23 = ((1557471230 | (arr_9 [i_1])));
            var_24 = ((!((((arr_10 [i_1]) ? 1792 : var_16)))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 = var_3;
            arr_15 [i_1] [i_4] = (var_4 == var_10);
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_26 = 17179803648;
                            var_27 += ((arr_14 [i_5 - 3]) | -3331160392065982027);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_28 = (max(var_28, var_11));
                            var_29 = (!var_9);
                            var_30 = (min(var_30, var_16));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_31 = (arr_13 [i_4] [i_8]);
                            var_32 = ((var_11 >= ((18446744073709551612 << (156 - 151)))));
                            arr_32 [i_1] [i_4] [i_8] &= var_2;
                            var_33 = ((-(arr_4 [i_1])));
                        }
                        var_34 = (((arr_9 [i_9]) << (((arr_13 [i_9] [i_8]) - 8621623430688723117))));
                    }
                }
            }
        }
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_35 = (min(var_35, ((((~0) && (((0 ? 2484371029 : -1793))))))));
                            var_36 = ((((((arr_3 [i_13]) - (arr_31 [i_1] [i_12 - 1] [i_12] [i_13] [i_13] [3])))) ? ((var_5 ? (arr_36 [i_13]) : 214)) : -64));
                        }
                    }
                }
            }
            arr_44 [7] [i_12] [i_12] = var_10;
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 4; i_17 < 10;i_17 += 1)
            {
                {
                    arr_50 [i_16] [i_16] [i_16] [i_1] = ((2113709135 ? ((((var_8 <= (arr_24 [i_1]))))) : -7515093638631243123));
                    var_37 |= (((51701577824224604 >> 1) <= (arr_6 [i_16] [i_17 + 2] [i_17 - 1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 0;i_20 += 1)
                {
                    {
                        var_38 -= (((arr_29 [i_20] [i_20] [i_20 + 1] [i_20] [i_20 + 1]) ? (arr_29 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20]) : (arr_29 [0] [0] [i_20 + 1] [0] [i_20])));
                        arr_58 [i_1] [1] [11] [i_18] [3] [i_1] = 60;

                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            arr_62 [i_1] [1] [i_19] = (arr_30 [6] [i_20 + 1] [12] [i_21] [12]);
                            var_39 ^= 8996464029023823259;
                        }
                        for (int i_22 = 2; i_22 < 11;i_22 += 1)
                        {
                            var_40 += 8811270637109916562;
                            var_41 = (arr_7 [i_1] [i_1]);
                            var_42 = (((arr_17 [i_18] [i_20 + 1]) >= var_5));
                            var_43 = (max(var_43, var_15));
                        }

                        for (int i_23 = 0; i_23 < 13;i_23 += 1)
                        {
                            var_44 *= 3;
                            var_45 = (~var_0);
                            var_46 = (max(var_46, (((var_8 ? ((4113393105 ? (arr_11 [i_1] [i_18] [i_23]) : 173)) : var_14)))));
                            var_47 = var_8;
                        }
                    }
                }
            }
        }
    }
    for (int i_24 = 0; i_24 < 19;i_24 += 1)
    {
        arr_71 [i_24] = ((-(arr_69 [i_24])));
        var_48 = var_4;
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 19;i_25 += 1)
        {
            for (int i_26 = 1; i_26 < 17;i_26 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        for (int i_28 = 2; i_28 < 15;i_28 += 1)
                        {
                            {
                                var_49 = (((arr_82 [i_24] [i_24] [i_24] [i_28 - 2] [i_28]) - (var_5 - var_13)));
                                var_50 = ((((min((((-(arr_73 [i_28] [i_24] [i_24])))), -2308206879889093925))) ? (((arr_77 [i_25] [i_25] [i_27]) ? 0 : (arr_72 [18] [1] [i_26]))) : ((((((arr_69 [11]) ? var_0 : 1))) + (arr_68 [i_26 + 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 19;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 19;i_30 += 1)
                        {
                            {
                                var_51 &= ((((+(((arr_78 [10] [10] [i_26]) - var_13)))) - -var_13));
                                var_52 -= (((((4 && -1) < var_8)) ? -var_10 : 15872));
                            }
                        }
                    }
                    var_53 = (((arr_83 [i_24] [i_24] [8] [i_24] [i_24] [i_24] [13]) ? var_0 : var_10));
                }
            }
        }
    }
    #pragma endscop
}
