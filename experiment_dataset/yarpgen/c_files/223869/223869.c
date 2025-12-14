/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 += 3;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    {
                        var_16 |= -2083356938;
                        var_17 += (((((90137466071078285 + (((var_4 - (arr_4 [i_0] [i_1 - 2] [i_2]))))))) ? ((min(1, (min(-12343, (arr_2 [i_0])))))) : 18257));
                        arr_9 [i_0] [i_1] = ((-(((min(-4496061889639069748, (arr_7 [i_3] [i_1] [9] [i_1] [i_1] [i_0]))) ^ (((7 ? (arr_8 [i_0] [i_0] [i_0] [i_1] [i_2] [1]) : 3900)))))));
                        var_18 = 61666;
                    }
                }
            }
        }
        var_19 = (~138);
        arr_10 [i_0] [5] = (arr_0 [i_0]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_20 = (arr_12 [i_4]);
        arr_14 [i_4] = min((min(126, 3893)), (((-(arr_12 [i_4])))));
    }
    var_21 = (var_12 / var_1);

    /* vectorizable */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_17 [1] = (!1437465281653303489);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_22 += 4689141581669978147;

                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 0;
                        var_23 = (max(var_23, -143));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_5] [i_5 + 2] [i_5] [i_5] = var_10;
                        var_24 = (min(var_24, (~-32765)));

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_25 = (min(var_25, var_11));
                            var_26 = (arr_4 [i_5 + 1] [i_5] [i_5 - 1]);
                            var_27 *= (2764689821402462622 ^ 252);
                            var_28 = 108;
                        }
                        for (int i_11 = 1; i_11 < 6;i_11 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, 67108863));
                            arr_35 [i_11 + 3] [i_11] [i_11] [i_5] = -32749;
                        }
                        for (int i_12 = 1; i_12 < 6;i_12 += 1) /* same iter space */
                        {
                            var_30 = (arr_34 [i_6] [i_6] [i_6] [5] [i_12] [i_9] [i_6]);
                            var_31 = var_3;
                            arr_39 [i_5] [i_6] [8] [i_7] [i_7] [2] [i_12 + 3] = ((1437465281653303490 ? 2626651593 : var_5));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_32 = arr_7 [i_5 + 2] [i_6] [i_6] [i_13] [i_5 + 1] [i_7 + 1];
                                arr_47 [i_13] = 246;
                            }
                        }
                    }
                }
            }
        }
        var_33 &= (arr_36 [i_5 + 1] [i_5 + 1] [i_5] [i_5]);
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    var_34 = -var_10;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_35 = (min(var_35, 1668315680));
                                var_36 = -77;
                                arr_56 [i_5] [i_17] [i_5] [i_17] [i_17] [i_5 + 2] = (arr_49 [4] [i_15] [i_15]);
                                arr_57 [9] [2] [i_17] [i_17] [1] [1] = (arr_3 [i_5] [i_15] [i_16]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 10;i_19 += 1)
    {
        /* LoopNest 3 */
        for (int i_20 = 1; i_20 < 9;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 7;i_22 += 1)
                {
                    {
                        arr_68 [i_22] [i_22] [i_22] [i_19] = (arr_42 [1] [i_20 + 1] [1] [i_22 + 2] [i_22] [i_22]);
                        var_37 ^= var_3;
                        var_38 = (((3 << (-136754351265309672 + 136754351265309698))));

                        for (int i_23 = 1; i_23 < 9;i_23 += 1)
                        {
                            arr_71 [i_22] [i_23] = 0;
                            var_39 = (min(var_39, (~261888)));
                        }
                        var_40 = (((min(var_7, 120))));
                    }
                }
            }
        }
        var_41 = (min((((!(((arr_43 [i_19] [i_19]) < 174))))), (((((-1 ? (arr_60 [i_19] [i_19]) : 17570039282835382591))) ? 27583 : ((768513044898804989 ? 4551 : -120))))));
        var_42 = 18241727212122329733;
        var_43 *= ((min(1, 64500556701392366)));
    }
    /* LoopNest 3 */
    for (int i_24 = 1; i_24 < 24;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 25;i_25 += 1)
        {
            for (int i_26 = 3; i_26 < 23;i_26 += 1)
            {
                {
                    var_44 = (((((-136754351265309655 | (0 < 6224537092052403979)))) ? var_5 : 0));
                    arr_78 [20] [20] |= (arr_74 [20]);
                    var_45 += -32757;
                    var_46 = (arr_73 [i_25] [i_25]);
                    var_47 = ((((min((max(var_3, (arr_76 [i_25]))), 661074348686853059))) ? 0 : var_5));
                }
            }
        }
    }
    var_48 = -32766;
    #pragma endscop
}
