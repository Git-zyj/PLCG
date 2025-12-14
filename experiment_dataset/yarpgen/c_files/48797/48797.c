/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((max(var_3, ((var_4 ? 1485364532 : 132)))) >> (-9 - 4294967272)));
        var_19 = (((((((var_5 ? 32752 : var_10))) ? ((var_0 ? var_12 : var_3)) : (min((arr_0 [i_0]), var_9))))) ? (((((max(var_1, 11798145570344470660)) < ((max(4294967290, -32756))))))) : var_1);
    }

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_20 = ((+((max((arr_4 [i_1 - 1]), var_4)))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] &= (arr_6 [i_1 + 1] [i_1 + 1]);
            var_21 = (((min(141, (arr_0 [i_2])))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_5] = ((((((arr_3 [i_1 - 1]) ? var_9 : (arr_3 [i_1 - 1])))) ? (arr_3 [i_1 + 1]) : (arr_3 [i_5 + 1])));
                        var_22 |= ((+(((1089054977 ? (arr_17 [i_1] [i_1] [i_1 + 1] [i_1 - 1]) : 32748)))));
                        arr_19 [i_1 - 1] [i_1 - 1] [i_5] [i_5] = (((min((((var_10 ? var_5 : var_10))), ((var_3 ? var_15 : var_16))))) ? (((var_3 ? 11798145570344470648 : var_1))) : (arr_13 [i_1 + 1] [i_5 - 2]));
                    }
                }
            }
            var_23 = (arr_12 [i_3]);
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_24 |= (((((var_14 ? var_4 : var_10)))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_25 = var_9;
                        arr_31 [i_8] [i_8] [i_7] [i_7] [i_6 + 1] [i_6 + 1] [i_8] = (((arr_17 [i_1 - 1] [i_1 - 1] [i_6 - 1] [i_6 + 2]) - (arr_17 [i_1 + 1] [i_6] [i_6 + 2] [i_6 + 2])));
                        var_26 = var_4;
                        var_27 *= (arr_14 [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_28 = 10;
                        arr_34 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_8] [i_1] [i_1] = var_12;
                        arr_35 [i_1] [i_8] [i_1] [i_8] [i_1] = (min(((max(var_7, var_17))), (((~(((arr_26 [i_1] [i_1] [i_7] [i_1]) ? (arr_26 [i_6] [i_7] [i_8] [i_7]) : var_12)))))));
                        var_29 |= ((((-109 ? (arr_33 [i_1] [i_7] [i_7] [i_6 - 1] [i_6 - 1]) : var_0)) != (min(var_15, (min(var_16, var_10))))));
                        arr_36 [i_8] [i_6] [i_8] = ((~(min(2929682707, ((4 ? 34 : var_4))))));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_30 = ((+(min(((var_14 ? (arr_21 [i_7] [i_7]) : (arr_14 [i_6] [i_7] [i_7] [i_11]))), (arr_37 [i_1 - 1] [i_1 - 1] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_1 - 1] [i_11])))));
                        var_31 = (((max(-114, (arr_30 [i_1] [i_1] [i_1] [i_8] [i_1]))) & ((min((max(var_2, 6184820518852044101)), var_12)))));
                    }

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        arr_42 [i_8] = (((arr_1 [i_12 - 2]) ? var_9 : 119));
                        arr_43 [i_8] [i_1 + 1] [i_8] [i_1 + 1] [i_12 + 1] [i_8] = (arr_4 [i_8]);
                        arr_44 [i_8] [i_1] [i_6] [i_6] [i_8] [i_12 + 1] [i_6] = (5 | 98);
                        var_32 |= (116 && var_15);
                        arr_45 [i_8] [i_8] [i_7] [i_1] [i_8] = (-(var_7 % var_14));
                    }
                    var_33 |= 2;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_34 = (-(((arr_51 [i_1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_13]) ? 18 : (arr_51 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_14] [i_14]))));
                            var_35 = (arr_32 [i_6 + 2] [i_6 - 1] [i_6 - 1]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_15 = 2; i_15 < 22;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        {
                            var_36 = var_13;
                            arr_60 [i_1 + 1] [i_1 + 1] [i_17] [i_17] [i_16 + 2] [i_16] [i_17] = ((~((979368097 ? var_12 : var_4))));
                            var_37 = ((!(arr_51 [i_16 + 1] [i_16 + 1] [i_17] [i_17] [i_17])));
                            var_38 = var_0;
                            arr_61 [i_1] [i_1] [i_1] [i_1] [i_17] [i_1] [i_1] = (arr_41 [i_1] [i_6 + 2] [i_6 - 1] [i_15 - 1] [i_1] [i_16 + 2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_39 = (min(var_39, (~var_2)));
                            var_40 = var_5;
                        }
                    }
                }
                var_41 = (min(var_41, ((((!var_14) ? (arr_41 [i_15 - 2] [i_15] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 - 1]) : var_2)))));
                var_42 = (~1);
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 20;i_22 += 1)
                    {
                        {
                            arr_77 [i_22] = (arr_2 [i_21]);
                            var_43 = max(var_5, var_5);
                        }
                    }
                }
                var_44 = (max(var_44, (((+(((arr_74 [i_1] [i_6 + 1] [2] [2] [i_1 - 1]) ? (arr_74 [i_1] [i_6 + 1] [18] [i_20] [i_1 + 1]) : var_10)))))));
            }
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                var_45 = ((-(((var_1 % var_0) + ((var_15 ? (arr_51 [i_1] [i_1] [i_6] [i_6] [i_23]) : var_9))))));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 23;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 23;i_25 += 1)
                    {
                        {
                            var_46 = (((max(var_10, (arr_6 [i_1] [i_1])))));
                            arr_84 [i_1] [i_23] [i_1] [i_24] [i_23] = ((-(max(var_2, (arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
                            var_47 += (max(((((max(var_6, var_16))) ? (max(var_3, var_13)) : (113 / var_6))), -32733));
                        }
                    }
                }

                for (int i_26 = 0; i_26 < 23;i_26 += 1)
                {
                    arr_87 [i_1] [i_6] [i_23] = max(((var_0 ? 255 : var_1)), (((~(arr_25 [i_6] [i_6 - 1] [i_1 - 1] [i_23])))));
                    var_48 *= (max(-var_6, ((var_15 ? (arr_47 [i_1 + 1] [i_1 + 1] [i_1] [i_6 + 1]) : var_17))));
                }
                var_49 = var_10;
            }
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 23;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 23;i_28 += 1)
                {
                    {
                        var_50 = (var_5 ? (max(var_5, ((var_13 ? var_13 : var_0)))) : ((((arr_47 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]) << (1214714946 - 1214714934)))));
                        arr_95 [i_27] = 4294967287;
                    }
                }
            }
            var_51 *= -32749;
        }
        arr_96 [i_1 - 1] [i_1 - 1] &= (((32759 >> (165 - 137))));
        var_52 = (var_5 * var_9);
    }
    var_53 = (max(var_53, var_5));
    /* LoopNest 3 */
    for (int i_29 = 0; i_29 < 18;i_29 += 1)
    {
        for (int i_30 = 0; i_30 < 18;i_30 += 1)
        {
            for (int i_31 = 2; i_31 < 15;i_31 += 1)
            {
                {
                    var_54 = ((((127 ? 18446744073709551602 : 15354649216390746644)) << (((((min(var_1, (arr_91 [i_29]))) ^ var_9)) - 448946597178691711))));
                    /* LoopNest 2 */
                    for (int i_32 = 3; i_32 < 14;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 1;i_33 += 1)
                        {
                            {
                                var_55 += (~var_8);
                                var_56 = (+((((((arr_107 [i_29] [i_29] [i_31 + 3]) ? var_15 : var_4))) ? (var_7 < 4294967288) : ((var_13 ? var_5 : var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
