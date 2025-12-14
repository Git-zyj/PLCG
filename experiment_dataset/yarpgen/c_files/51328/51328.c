/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = 4527194405549151638;
                    var_15 = (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                }
            }
        }
        var_16 = 4527194405549151652;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, var_13));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 &= 13919549668160399938;
                                var_19 = (max(((((2086301360 / var_13) / var_1))), ((((min(var_8, var_3))) | ((var_9 ? var_13 : 4527194405549151632))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_20 = (((var_2 != ((221 ? 1 : 320985554927701206)))));
                        var_21 ^= (+-32750);

                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_22 ^= (((arr_23 [7] [i_7] [i_0]) ? var_12 : (arr_1 [8] [8])));
                            var_23 = var_4;
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_24 |= var_4;
                            var_25 = ((13919549668160399969 < (var_3 >= var_13)));
                            var_26 = ((+(((var_5 && ((((arr_25 [i_0 + 2] [i_7] [i_7] [i_9] [i_11]) ? var_9 : var_6))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 7;i_16 += 1)
                        {
                            {
                                var_27 = (((~(max(var_6, var_9)))));
                                var_28 = (min(-32750, 13919549668160399963));
                                var_29 = ((1 ? (arr_24 [i_15] [i_13] [i_14] [i_15]) : ((13919549668160399977 * (arr_5 [i_14] [i_16 + 2] [i_16 + 2] [i_16 - 1])))));
                            }
                        }
                    }

                    for (int i_17 = 1; i_17 < 7;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            var_30 = (min((max((min(-2086301360, -2028491510)), (4527194405549151638 == 9223372036854775807))), (max(var_2, var_4))));
                            var_31 += ((var_3 * ((((arr_26 [1] [i_13] [i_18] [i_17 + 2] [i_14]) ? var_7 : (arr_48 [9] [i_17 + 2] [i_17] [i_12] [i_18] [i_12]))))));
                        }
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            var_32 |= ((9223372036854775792 ? (min(var_9, var_13)) : (((((((-9223372036854775807 - 1) > var_8))) | ((var_5 ? var_5 : var_10)))))));
                            var_33 |= ((min(var_2, (arr_46 [7] [i_17 + 1] [i_17 + 3] [i_17 + 1]))));
                            var_34 = (min((arr_4 [i_12]), ((((min(0, var_1)) * (var_2 * var_3))))));
                            var_35 |= (((min((arr_4 [i_12]), var_6)) & (((((var_12 << (var_9 - 4549766562344797298))))))));
                            var_36 = ((!(!var_4)));
                        }
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            var_37 = ((((max(var_5, (arr_25 [i_17 + 1] [i_17] [i_17 + 2] [i_17 - 1] [i_20])))) ? (max((arr_5 [i_17 + 1] [i_17] [i_17 + 2] [i_17 + 1]), var_3)) : (arr_5 [i_17 + 3] [i_17] [i_17 - 1] [i_17 - 1])));
                            var_38 = (((var_8 || var_3) >> (37 - 28)));
                            var_39 |= (min((((arr_6 [i_12]) - (arr_6 [i_13]))), (arr_6 [i_13])));
                            var_40 = (min(1256528087, (min((arr_53 [i_12] [i_12] [i_13] [i_13] [i_13] [i_17] [i_13]), (min((arr_53 [6] [i_13] [6] [i_12] [i_20] [i_17] [i_12]), var_6))))));
                            var_41 = min(54, var_12);
                        }

                        for (int i_21 = 3; i_21 < 8;i_21 += 1)
                        {
                            var_42 = (max((min(var_7, (arr_18 [i_17 - 1] [i_17 + 1]))), (max((arr_18 [i_17 - 1] [i_17 - 1]), var_8))));
                            var_43 = ((75 ? 65535 : 1693639057));
                            var_44 = min(-var_10, ((-(arr_16 [i_17 + 3] [i_17 + 2]))));
                        }
                    }
                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_45 -= (((var_10 ? (((var_12 ? (arr_9 [8] [i_13] [8]) : var_13))) : (arr_53 [i_23] [i_23] [i_23] [i_23] [8] [i_23] [i_23]))));
                            var_46 = ((((((arr_65 [i_23] [i_23] [i_22] [6] [i_13] [i_12] [i_12]) ? var_7 : (arr_45 [i_12] [i_13] [i_14] [i_22])))) ? 13 : ((max(var_7, var_5)))));
                            var_47 -= ((75 % (var_11 < var_0)));
                        }

                        for (int i_24 = 3; i_24 < 9;i_24 += 1)
                        {
                            var_48 = ((((((((var_9 ? (arr_50 [i_12] [i_13] [i_22] [i_22] [i_24]) : var_1))) ? (arr_43 [i_13] [i_13] [i_22] [i_24]) : 1))) ? (((min((var_2 != var_1), 188)))) : (arr_11 [i_12])));
                            var_49 = 4224027671743415698;
                        }
                        /* vectorizable */
                        for (int i_25 = 3; i_25 < 9;i_25 += 1)
                        {
                            var_50 = var_10;
                            var_51 += ((var_4 + (var_12 + var_1)));
                            var_52 = var_0;
                            var_53 = ((var_10 ? (64 * -27993) : (((arr_7 [i_12] [i_12] [i_12]) ? var_7 : 3848130330))));
                            var_54 = (max(var_54, var_4));
                        }
                        var_55 = var_13;
                    }
                    for (int i_26 = 2; i_26 < 8;i_26 += 1)
                    {
                        var_56 = var_4;
                        var_57 |= (min(((min(var_3, var_4))), ((var_1 ? (((arr_6 [i_13]) ? (arr_55 [i_26 - 2] [i_26] [i_13] [i_26] [i_12]) : var_3)) : var_3))));
                        var_58 ^= ((((min((arr_60 [2] [i_13] [i_26] [2]), var_8))) ? var_3 : (arr_54 [i_12] [i_26 - 1] [i_26 - 2] [i_26 - 2])));

                        for (int i_27 = 2; i_27 < 7;i_27 += 1) /* same iter space */
                        {
                            var_59 = ((var_12 / (((var_5 ? var_9 : var_13)))));
                            var_60 = min(var_10, ((+((var_11 << (((arr_15 [i_27] [6] [i_14] [4] [i_12]) - 37811756)))))));
                            var_61 ^= (+(((arr_41 [i_27 + 3]) ? var_6 : (arr_25 [1] [i_26 - 2] [i_14] [i_26] [i_27]))));
                            var_62 = ((max(30, var_6)));
                            var_63 = ((-30 ? (max((arr_2 [i_14]), ((var_3 ? var_6 : var_13)))) : (arr_53 [i_26 + 2] [i_13] [i_26 - 1] [i_26 + 2] [4] [i_26 - 1] [i_27 - 1])));
                        }
                        for (int i_28 = 2; i_28 < 7;i_28 += 1) /* same iter space */
                        {
                            var_64 |= (((min(var_1, (arr_1 [i_12] [i_28 + 3])))) ? var_4 : (arr_43 [0] [1] [5] [i_26 + 2]));
                            var_65 = (((var_2 | var_9) || ((min(1380715267, -2416)))));
                        }
                        /* vectorizable */
                        for (int i_29 = 2; i_29 < 7;i_29 += 1) /* same iter space */
                        {
                            var_66 |= var_3;
                            var_67 = ((var_1 ? var_4 : 36));
                        }
                        var_68 = (max(var_68, ((max(var_0, (min(-15846, var_5)))))));
                    }
                    var_69 = (((((var_5 ? var_9 : (arr_63 [i_12] [i_13] [i_13] [i_13] [i_13] [i_13])) / ((max(var_7, var_4)))))));
                    var_70 += ((min((max(var_9, (arr_35 [i_14] [1] [1])), (arr_9 [i_14] [i_13] [i_12])))));
                }
            }
        }
    }
    var_71 = var_12;
    var_72 *= (min((min(var_10, ((var_9 ? var_8 : 28)))), (((((max(var_6, var_8))) || var_4)))));
    #pragma endscop
}
