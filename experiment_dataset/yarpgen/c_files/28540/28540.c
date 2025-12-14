/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 &= (var_9 | 65529);

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] &= (((((8805807626982406811 & (((var_2 << (18446744073709551615 - 18446744073709551606))))))) & var_11));
            var_19 = (var_8 % (arr_3 [i_0] [i_0] [i_0]));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_20 &= (arr_1 [i_1]);
                var_21 = (((arr_3 [i_0] [i_1] [i_2]) - ((-var_3 ? (arr_2 [i_2] [i_2]) : var_5))));
            }
            var_22 = (max(var_22, var_10));
            arr_9 [i_0] [i_0] [i_1] = 51;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_23 &= (-var_7 / var_13);
                        arr_19 [i_0] &= var_5;
                        var_24 = (!-868155733);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_28 [i_6] [i_3] [i_3] [i_3] [i_7] [i_7] [i_8] = (min(((((arr_14 [i_8] [i_7] [i_6] [i_3]) || 4323455642275676160))), (min((arr_8 [15] [i_3] [i_6] [i_7]), 0))));
                            var_25 = (min(((3 | (((max((arr_13 [i_6 - 4] [i_6 - 4]), (arr_1 [i_7]))))))), ((((arr_4 [i_7] [15]) ? (arr_15 [i_6] [1]) : var_13)))));
                            var_26 = (max(var_3, (-3089621405220083340 + var_0)));
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_27 = ((((max(var_13, var_13)))));
                            var_28 = (var_13 | var_4);
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, (arr_12 [i_0])));
                            arr_33 [i_0] [i_0] [i_3] [i_6 - 2] [i_7] [12] &= var_2;
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] = (min(((min(-var_0, (arr_18 [i_0] [i_3] [i_0] [i_6 - 2] [i_7] [i_11])))), 1910933980068725290));
                            arr_37 [i_6] [i_0] [i_6] [i_7] &= var_16;
                        }

                        for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_30 &= var_0;
                            arr_41 [i_0] [i_0] [i_6] [i_0] [i_12 - 1] = (((((var_0 * (arr_35 [i_0] [i_0] [i_6] [i_7] [i_12]))) / (arr_1 [14]))));
                            var_31 &= (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            var_32 = (arr_1 [10]);
                        }
                        for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, -8805807626982406812));
                            var_34 = 4294967281;
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_35 &= (((((var_5 + (arr_24 [i_0] [i_3] [i_6 + 1] [i_7] [3])))) ? var_8 : -58364));
                            var_36 = var_0;
                            var_37 = (max(var_37, ((((1185222397628763708 && var_6) || var_4)))));
                        }
                    }
                }
            }
        }
        arr_46 [i_0] [0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 15;i_16 += 1)
            {
                {
                    var_38 = (((arr_29 [i_0] [i_15] [i_16] [i_0]) * (((arr_44 [i_0] [i_15]) >> (var_7 - 16660990854762396598)))));

                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        arr_57 [i_15] &= var_5;

                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            arr_61 [i_15] [i_16] [i_17] = var_16;
                            var_39 = (min(var_39, ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) / var_14)))));
                        }
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            var_40 = var_14;
                            var_41 = (min(var_41, (((var_8 != (arr_63 [i_19] [i_17] [i_16] [i_15] [i_0]))))));
                            var_42 = ((87 ^ ((((arr_20 [i_0]) > var_4)))));
                        }
                        arr_64 [i_17] [i_0] [i_16] [i_17 + 3] = (arr_26 [i_0] [i_0] [i_16] [i_16] [i_16] [i_16]);
                        arr_65 [i_17] [i_17] [i_17] [i_0] = ((~(arr_30 [i_0] [11] [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        var_43 = 1;
                        var_44 &= var_0;

                        for (int i_21 = 0; i_21 < 16;i_21 += 1)
                        {
                            var_45 = (max(var_45, var_13));
                            arr_71 [i_15] [i_15] [i_20] = var_11;
                            arr_72 [12] [i_16] [i_15] [i_21] [i_21] [i_16] &= (min(-14944177466123888967, (arr_68 [i_0] [9] [i_20] [i_21])));
                        }
                        var_46 = arr_7 [i_20] [i_20];

                        /* vectorizable */
                        for (int i_22 = 1; i_22 < 14;i_22 += 1)
                        {
                            arr_75 [i_0] [i_15] [i_15] [i_20] [i_22] = var_11;
                            var_47 &= var_4;
                        }
                    }
                }
            }
        }
        var_48 = (((arr_55 [7] [i_0] [i_0] [i_0]) ? 20846 : var_15));
    }
    for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
    {
        var_49 &= (arr_29 [i_23] [i_23] [i_23] [i_23]);
        var_50 = (max(var_50, (((var_15 | (arr_7 [2] [i_23]))))));

        for (int i_24 = 2; i_24 < 15;i_24 += 1)
        {

            for (int i_25 = 1; i_25 < 12;i_25 += 1)
            {
                arr_85 [i_24] = 10468505656626405531;
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 16;i_26 += 1)
                {
                    for (int i_27 = 2; i_27 < 14;i_27 += 1)
                    {
                        {
                            var_51 = (var_14 % var_5);
                            var_52 = -var_7;
                        }
                    }
                }
                var_53 = var_12;
            }

            /* vectorizable */
            for (int i_28 = 0; i_28 < 16;i_28 += 1)
            {
                arr_93 [i_23] [i_28] &= (arr_23 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]);
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 16;i_29 += 1)
                {
                    for (int i_30 = 4; i_30 < 15;i_30 += 1)
                    {
                        {
                            var_54 &= (arr_95 [i_23] [i_24] [i_28] [i_29] [i_30] [5]);
                            arr_98 [i_23] [i_24] [i_23] = (((var_15 * var_7) || (var_5 > -7869572274052095693)));
                        }
                    }
                }

                for (int i_31 = 0; i_31 < 16;i_31 += 1)
                {
                    arr_101 [i_23] [i_24] [i_24] [i_23] = ((((((arr_92 [i_23] [10] [i_28] [i_31]) + var_4))) ? (arr_0 [1]) : -var_13));

                    for (int i_32 = 1; i_32 < 1;i_32 += 1)
                    {
                        var_55 &= var_4;
                        arr_104 [i_23] [i_24] [i_28] [i_28] [i_31] [i_24] = (var_6 ? var_7 : (1 || var_6));
                    }
                    for (int i_33 = 0; i_33 < 16;i_33 += 1)
                    {
                        var_56 &= (arr_31 [i_33] [i_33]);
                        var_57 = (arr_30 [i_23] [i_24 + 1] [i_28] [i_31] [i_33] [i_33]);
                        var_58 = (max(var_58, 8805807626982406801));
                        arr_108 [8] [i_23] [i_28] [i_28] [i_28] [i_28] &= 7282;
                    }
                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        var_59 &= (arr_13 [15] [15]);
                        var_60 = var_8;
                        arr_112 [i_23] [i_24] [i_23] &= var_8;
                    }
                    for (int i_35 = 0; i_35 < 16;i_35 += 1)
                    {
                        var_61 = var_8;
                        var_62 = (max(var_62, (((arr_106 [i_23] [i_24] [i_28] [i_28] [13]) ? (((arr_20 [i_24]) ? -8934045456571192343 : var_6)) : (!var_9)))));
                        arr_116 [i_24] [5] [i_24 - 2] [5] [i_24 - 1] [i_24] = var_9;
                    }
                    var_63 = (min(var_63, 10468505656626405556));
                    var_64 = (arr_45 [i_23] [3] [i_28] [i_31] [i_31]);
                    var_65 = ((1 - (((arr_66 [i_23] [i_23] [i_23]) + 108))));
                }
                for (int i_36 = 0; i_36 < 0;i_36 += 1)
                {
                    arr_119 [i_23] &= var_4;
                    arr_120 [i_28] [i_24 - 2] &= (arr_107 [i_23] [14] [i_23] [i_23] [8] [i_23] [i_23]);
                }
            }
            for (int i_37 = 0; i_37 < 16;i_37 += 1)
            {
                var_66 = arr_73 [i_37] [i_24 - 2] [i_24] [i_24] [i_23];
                var_67 = (max(24812, ((9223372036854775807 ? var_4 : 79))));
            }
            var_68 = (max(var_68, (((var_14 == (arr_97 [i_23] [i_24 + 1] [i_24] [i_24 + 1] [i_24 - 1]))))));
        }
        var_69 = var_8;
        var_70 = (min((min((max(var_7, var_12)), var_1)), ((((max(var_6, var_2)) * (arr_79 [i_23] [i_23]))))));
    }
    for (int i_38 = 0; i_38 < 16;i_38 += 1) /* same iter space */
    {
        arr_126 [i_38] = var_0;
        /* LoopNest 2 */
        for (int i_39 = 0; i_39 < 1;i_39 += 1)
        {
            for (int i_40 = 0; i_40 < 16;i_40 += 1)
            {
                {
                    var_71 &= ((min(((((arr_114 [i_38] [i_38] [i_40] [i_40]) ^ var_10))), (min(-29932, (arr_106 [i_38] [i_39] [i_39] [i_39] [i_40]))))));
                    /* LoopNest 2 */
                    for (int i_41 = 0; i_41 < 16;i_41 += 1)
                    {
                        for (int i_42 = 2; i_42 < 15;i_42 += 1)
                        {
                            {
                                var_72 &= (var_2 || var_2);
                                var_73 = (max(var_73, var_2));
                                var_74 &= var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_43 = 1; i_43 < 15;i_43 += 1)
                    {
                        for (int i_44 = 3; i_44 < 13;i_44 += 1)
                        {
                            {
                                var_75 = (min(var_75, (((((var_8 & (-8934045456571192335 & var_15))) >> (var_12 + 1538427004))))));
                                var_76 = ((((117 || (arr_134 [i_38] [i_39] [i_39] [i_40] [i_43] [12]))) && ((((max(8934045456571192342, var_10))) || var_0))));
                            }
                        }
                    }
                    var_77 = (min(var_77, (((var_3 ^ (arr_136 [11] [i_39] [i_40] [11] [11]))))));
                }
            }
        }
    }
    for (int i_45 = 0; i_45 < 16;i_45 += 1) /* same iter space */
    {
        arr_144 [i_45] = 44;
        var_78 = 1;
    }
    #pragma endscop
}
