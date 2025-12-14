/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    var_10 = var_3;
                    var_11 = var_4;
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (var_8 >= -869318499);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2 + 2] [i_3] = (6014 && var_1);
                        var_12 = (var_3 < var_3);

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_13 = (max(var_13, (((var_8 >> (var_4 - 16975645629845159481))))));
                            var_14 = ((1752211025 >= ((var_2 >> (var_9 - 42)))));
                            var_15 = (((var_0 & var_3) > 869318498));
                            var_16 = (max(var_16, (var_3 * 1)));
                        }
                        var_17 *= ((var_4 || (var_6 && var_5)));
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_21 [i_7 + 1] [i_1] [i_6] [i_5] [i_1] [i_0] = var_4;
                                var_18 = (min(var_18, var_5));
                                var_19 *= ((var_5 - var_4) & 14702242782174320505);
                                var_20 = var_8;
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_1] = (((((869318499 != (var_7 - var_5)))) != (10759378800407907342 && 69)));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_21 = ((var_3 + (1659920564 + var_8)));
                    arr_26 [i_8] [i_1] [i_1] [i_0] = var_5;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_29 [7] [i_1] [i_1] [i_8] [i_8] [i_1] = var_4;

                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_22 = var_1;
                            arr_34 [i_0] [i_0] [i_1] [9] [i_0] = (((0 >= var_5) - (var_3 < var_1)));
                            var_23 *= (((var_6 ^ 79) << (((28054 + var_9) - 28123))));
                            var_24 = ((var_8 - (3744501291535231111 > 952521580)));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        var_25 = (((var_9 - var_2) + (var_0 - var_2)));
                        var_26 *= var_5;
                        arr_41 [i_12] [i_11] [i_1] [i_0] [i_0] = ((var_2 & ((var_2 - (4212568507 - 3744501291535231117)))));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_44 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = var_1;
                        arr_45 [i_0] [i_0] [i_1] [i_13] [i_1] [2] = (((var_4 & var_8) <= (((200255675 >= 4294967295) / var_4))));
                        var_27 *= (var_4 != var_8);
                    }
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        var_28 = (((var_3 - var_5) ^ var_2));
                        var_29 = var_3;

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_30 = ((var_1 == (var_7 < var_2)));
                            var_31 = var_4;
                        }
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_32 = var_2;
                            var_33 *= (((var_0 > var_9) + (var_3 < var_9)));
                            var_34 = (max(var_34, var_0));
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                        {
                            var_35 *= (((18 - var_5) < var_0));
                            var_36 *= (((4294967295 / 12170857026372397678) <= 3239));
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                        {
                            arr_61 [i_0] [i_1] [i_11] [i_1] [i_18] = var_6;
                            arr_62 [i_0] [i_1] [i_14] [i_14 - 1] [i_14] = (((21 ^ var_4) != var_5));
                        }

                        for (int i_19 = 3; i_19 < 8;i_19 += 1)
                        {
                            var_37 = 3744501291535231117;
                            var_38 = var_5;
                        }
                    }
                    var_39 = (max(var_39, var_5));
                    arr_66 [i_1] [i_1] [i_11] [i_1] = ((var_9 << (((-28055 + var_1) - 24336))));
                    arr_67 [i_1] [i_1] [i_11] = ((var_7 ^ (var_4 / -34100838)));
                }
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    var_40 = ((var_3 >= var_3) % (var_2 % var_0));
                    var_41 = ((var_9 * (var_4 / 1560618429)));

                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        arr_76 [i_0] [i_1] [i_20] [i_1] [i_21] [i_21] = (((var_6 % 205) / (2065663730 || var_7)));
                        arr_77 [i_21] [i_21] [i_21] [i_1] [i_21] = 0;
                        var_42 = (var_2 && 16899054038507729164);
                    }
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        arr_81 [i_0] [i_1] [i_0] [i_0] [i_0] = (((var_8 != var_9) && (var_2 & 7)));
                        var_43 = var_5;
                    }
                }
                arr_82 [i_1] = var_1;
                arr_83 [i_0] [i_1] [i_1] = var_3;
                var_44 = (((((45129 - 1) - 17)) - var_7));
            }
        }
    }

    for (int i_23 = 0; i_23 < 10;i_23 += 1)
    {
        arr_88 [i_23] [i_23] = 12170857026372397685;
        arr_89 [i_23] = 28055;
    }
    for (int i_24 = 0; i_24 < 14;i_24 += 1)
    {
        arr_94 [i_24] [i_24] = (var_9 && 15);
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 14;i_25 += 1)
        {
            for (int i_26 = 1; i_26 < 13;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    {
                        var_45 = ((3744501291535231122 + (var_4 / 1737154031)));
                        arr_103 [i_24] [i_24] [i_24] = ((var_4 == var_0) & var_5);
                        var_46 = (max(var_46, 1));
                        arr_104 [i_24] [i_25] = var_6;
                        var_47 *= var_8;
                    }
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 16;i_28 += 1)
    {
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 16;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 16;i_30 += 1)
            {
                {
                    var_48 *= ((var_8 || (3744501291535231140 & 34)));
                    arr_115 [i_28] [i_29] [i_30] = (1 * -107);
                }
            }
        }
        arr_116 [i_28] [i_28] = var_2;
        var_49 *= (var_1 - var_5);
    }
    #pragma endscop
}
