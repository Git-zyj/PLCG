/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(61696, -var_9));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_11 = -17;
        arr_4 [i_0] = ((var_3 > (((min((arr_0 [i_0]), var_2))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 |= ((!((min((arr_3 [i_0]), (arr_5 [i_0]))))));
            var_13 = (max(((~(var_1 - var_4))), ((((min(var_6, var_6))) ? ((var_7 ? var_4 : var_9)) : (arr_5 [i_1])))));
            var_14 += (((((5950394261613536496 * var_7) / (((max((arr_2 [i_0 + 2]), 65535)))))) / (((((arr_6 [i_0] [i_0]) && ((((arr_1 [i_0]) & var_4)))))))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_15 = (((arr_1 [i_0 + 1]) ^ (((arr_1 [i_0 - 2]) ^ (arr_1 [i_0 - 4])))));
            arr_11 [i_2 + 2] [2] = (max(11, 4294967295));
            var_16 = (~var_5);
            var_17 -= (min((((arr_7 [i_2 - 1]) / var_1)), (((arr_7 [i_2 + 4]) ? (arr_7 [i_2 + 4]) : (arr_7 [i_2 + 1])))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_18 = ((!(arr_8 [i_3] [i_2] [9])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_18 [9] [i_4] [1] [i_2] [15] = var_0;
                            arr_19 [i_0] [6] [i_3] [i_4] [13] [i_5] = ((!var_4) % ((var_6 ? (arr_16 [i_4] [i_0] [i_3] [16] [i_2 + 3] [i_5] [i_2]) : var_4)));
                            var_19 = var_0;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                arr_23 [i_6] = ((((((((16 ? 3853 : (arr_20 [11] [i_2] [16])))) ? (arr_5 [i_2]) : var_1))) | ((19581 ? 0 : 65534))));
                var_20 *= ((((((arr_16 [i_0 - 1] [i_0 + 2] [5] [i_0 + 1] [i_0] [i_0] [i_0 - 3]) | (arr_16 [i_0 + 2] [i_0 - 3] [i_0] [7] [i_0] [i_0] [i_0 - 4])))) ? (var_5 & var_4) : var_4));
            }
        }
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            arr_28 [i_7] [i_7] = (((var_0 == var_4) < var_3));
            var_21 = (((((((min(var_7, var_2))) ? var_1 : (4768 & -112)))) && ((((((arr_7 [i_0 - 4]) ? var_4 : 1479388198)) * (((var_8 ? (arr_16 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]) : (arr_7 [i_7])))))))));
            var_22 = ((-(((!(arr_10 [i_0 - 4] [i_0 - 2] [i_7 - 1]))))));
            var_23 = (max((((((18446744073709551615 ? (arr_1 [10]) : (arr_9 [i_0] [i_7] [i_0])))) ? var_1 : (12876080890497377383 + var_2))), (((((((arr_9 [i_0] [i_0] [i_0]) < var_5))) | (6654 >= var_1))))));
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_24 = (arr_26 [12]);
                arr_37 [5] [i_9] [i_10] = ((-(0 - var_8)));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_25 = (((!17) ? (arr_5 [i_8]) : (!var_2)));
                var_26 = (min(var_4, (arr_25 [i_9 - 1])));
            }
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_48 [i_12] [i_12] [i_12] = (min((max((~var_9), (var_8 * -39))), (((-((min(var_5, var_5))))))));
                            var_27 = var_9;
                        }
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_28 = var_5;

            for (int i_16 = 2; i_16 < 10;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_29 -= var_5;
                            var_30 = (min(((21327 << (((min(var_1, var_0)) - 38347)))), var_7));
                        }
                    }
                }
                var_31 = (min(682438686, ((3829 ? (min(var_7, var_9)) : var_2))));
                var_32 = 3817092637;
                var_33 *= ((((max(((var_4 - (arr_1 [i_15 - 1]))), ((var_0 ? 8976041357382222755 : var_5))))) ? var_3 : (arr_22 [6])));
            }
            for (int i_19 = 3; i_19 < 12;i_19 += 1)
            {
                var_34 = -21328;
                var_35 = ((((min((arr_9 [i_8] [i_15 - 1] [i_19]), (arr_9 [i_19] [i_15] [i_8])))) ? (((((-(arr_9 [i_8] [i_15] [i_8]))) - (min(var_1, 3496549485))))) : var_4));
            }
            arr_65 [i_8] |= (!var_7);
            arr_66 [6] [i_15 + 2] &= (min(var_7, var_3));
        }
        for (int i_20 = 1; i_20 < 12;i_20 += 1) /* same iter space */
        {
            arr_70 [i_8] [0] = 1803727828;
            var_36 += min((max(var_4, 0)), ((((((min(var_8, var_5)))) % (((arr_27 [4]) * var_2))))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    {
                        var_37 = (((min((arr_52 [4] [4]), (max(-17855, var_9)))) - 61696));
                        var_38 = (max((((arr_69 [i_8] [i_20 + 1] [i_21]) ^ (arr_69 [11] [i_20 - 1] [i_21]))), ((((((var_3 ? var_3 : var_6))) ? (arr_15 [i_8] [i_20 + 2] [i_21] [i_22]) : (var_7 > var_0))))));
                    }
                }
            }
        }
        for (int i_23 = 1; i_23 < 12;i_23 += 1) /* same iter space */
        {
            arr_79 [8] [i_23 + 2] |= ((((((arr_63 [i_23 + 1] [i_23 + 1]) & var_8))) != (max(-var_0, (arr_56 [i_8] [i_23 - 1] [i_23 + 1] [i_23 + 2] [i_23 + 2] [12])))));

            /* vectorizable */
            for (int i_24 = 2; i_24 < 13;i_24 += 1) /* same iter space */
            {
                var_39 = var_9;
                var_40 ^= ((-16086 ? (arr_9 [i_8] [i_23 + 2] [i_24]) : (((var_3 == (arr_53 [i_8] [i_8] [i_8]))))));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 14;i_26 += 1)
                    {
                        {
                            var_41 = (((((-28211 ? 61693 : 798417813))) ? ((((!(arr_80 [i_8]))))) : (((arr_13 [8] [i_25]) * var_0))));
                            var_42 = (((arr_12 [i_8] [i_23] [i_24]) ^ var_8));
                            arr_88 [1] [1] [i_23] [i_23] [i_8] = (arr_42 [i_8] [i_24 - 2]);
                        }
                    }
                }
                var_43 |= (((arr_71 [i_8] [i_8] [i_23] [13]) ^ 112));
                var_44 *= var_6;
            }
            for (int i_27 = 2; i_27 < 13;i_27 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_28 = 1; i_28 < 13;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 14;i_29 += 1)
                    {
                        {
                            var_45 += arr_41 [i_8] [i_8] [i_8] [i_8];
                            var_46 = ((-(((!((max(-16087, 18446744073709551615))))))));
                            var_47 = 0;
                            var_48 = (((arr_55 [12] [6] [10]) && ((min(var_8, 2688146770)))));
                        }
                    }
                }
                var_49 = var_1;
            }
            /* LoopNest 2 */
            for (int i_30 = 2; i_30 < 12;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 14;i_31 += 1)
                {
                    {
                        var_50 ^= (var_4 % var_7);
                        var_51 = (((min(((max(var_5, 798417832))), ((16086 ? (arr_38 [i_8] [i_23] [i_31]) : 6)))) == 24576));
                        var_52 = -65513;
                    }
                }
            }
            var_53 = (max((((arr_47 [i_8] [i_23] [i_23 + 2] [i_23] [5]) << (var_9 - 1992381420))), var_7));
        }
        var_54 = (((((max((var_8 < 9624732581401841497), (max(var_3, var_7)))))) < (max((max((arr_60 [13] [i_8] [i_8] [i_8] [i_8]), (arr_2 [i_8]))), (max(0, var_0))))));
        /* LoopNest 2 */
        for (int i_32 = 2; i_32 < 10;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 14;i_33 += 1)
            {
                {
                    arr_109 [i_32] [i_32] [i_8] = (((((max(0, var_9))) * (max(var_6, var_2)))) * var_1);
                    var_55 = (18446744073709551600 >= 1606820525);
                }
            }
        }
        var_56 = (min(((var_8 && ((((arr_105 [i_8]) ? (arr_49 [i_8] [0] [i_8]) : var_6))))), (((((var_7 ? var_1 : var_1))) <= (max(var_4, var_9))))));
        var_57 = (arr_61 [10] [i_8] [i_8] [10]);
    }
    for (int i_34 = 0; i_34 < 14;i_34 += 1) /* same iter space */
    {
        var_58 = (max((((var_7 ? var_1 : var_5))), -var_4));

        for (int i_35 = 1; i_35 < 10;i_35 += 1)
        {
            var_59 = 1606820510;
            var_60 = (((((6 >> (31359 - 31345)))) <= ((-115 ? (min(682438686, 0)) : 2097136))));
        }
        for (int i_36 = 0; i_36 < 14;i_36 += 1)
        {
            /* LoopNest 2 */
            for (int i_37 = 0; i_37 < 14;i_37 += 1)
            {
                for (int i_38 = 2; i_38 < 13;i_38 += 1)
                {
                    {
                        arr_122 [i_34] [i_36] [4] [i_36] [i_36] = (((arr_52 [i_36] [i_36]) >> (((min(-var_4, var_1)) - 38323))));
                        arr_123 [i_34] [0] [0] [0] |= (-var_4 ? var_3 : (5581818689658886254 ^ var_4));
                    }
                }
            }
            var_61 -= var_0;
            var_62 = 3590976447;
            var_63 = 31744;
            var_64 = ((22961 ? 1172224046 : 2016));
        }
        for (int i_39 = 0; i_39 < 14;i_39 += 1)
        {
            arr_126 [i_39] = (((((((3590976447 ? 1670 : 49589)) % var_3))) ? (max(var_3, (arr_96 [0] [i_39] [i_39] [i_39] [i_34] [i_34] [i_34]))) : (max((((var_8 ? 18 : (arr_63 [i_34] [i_39])))), (max((arr_9 [i_34] [4] [i_39]), var_9))))));
            var_65 -= var_1;
            arr_127 [i_39] [i_39] = (((((((max(10354171110144273616, var_8))) ? -80 : ((var_9 << (19680 - 19653)))))) ? (((max(var_4, 1172224046)) * (((arr_60 [i_39] [i_39] [i_34] [4] [i_34]) / (arr_54 [i_39]))))) : (((((var_7 + (arr_27 [i_39])))) ? (var_0 - -1) : -2000))));
        }
        var_66 = var_6;
    }
    for (int i_40 = 0; i_40 < 19;i_40 += 1)
    {

        /* vectorizable */
        for (int i_41 = 0; i_41 < 19;i_41 += 1)
        {
            var_67 = 1;
            var_68 = (((arr_128 [i_40] [12]) ? ((var_7 ? var_9 : 39495)) : 61707));
            /* LoopNest 3 */
            for (int i_42 = 1; i_42 < 17;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 19;i_43 += 1)
                {
                    for (int i_44 = 2; i_44 < 17;i_44 += 1)
                    {
                        {
                            arr_142 [i_40] [4] [i_42] [i_43] [i_42] = (var_9 > 4294967295);
                            var_69 &= 66;
                            var_70 = var_8;
                        }
                    }
                }
            }
            var_71 *= ((4532414715845886918 ? var_3 : (arr_136 [i_41])));
        }
        arr_143 [i_40] [i_40] = (max((((((arr_131 [i_40]) ? var_9 : var_9)) + (((max(var_5, var_5)))))), ((((arr_132 [i_40] [i_40]) && var_8)))));
    }
    #pragma endscop
}
