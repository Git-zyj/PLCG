/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((var_13 ? var_7 : var_2)) + (((arr_0 [10]) ? var_10 : (arr_0 [12])))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = (var_4 + (arr_12 [i_2 - 1] [i_2 + 2]));
                        var_19 = var_7;
                        arr_13 [18] [i_0] [i_2] [10] = 7708574981928985038;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_20 = (((var_7 || var_4) ? (arr_3 [i_0]) : (-26245 || var_11)));
                            var_21 -= (((arr_8 [i_2 - 1] [i_1] [14] [i_4]) >= (((arr_15 [11] [0] [i_1] [0] [9] [i_4]) + var_12))));
                            arr_16 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_3] [2] = (var_11 != var_15);
                        }
                        arr_17 [i_0] = (((var_0 <= 0) - (((arr_7 [i_0]) ? (arr_7 [1]) : var_7))));
                    }
                }
            }

            for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_22 = ((((arr_1 [i_0]) || var_0)));

                for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_23 ^= -var_0;

                    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_24 = ((!(!var_11)));
                        var_25 = (min(var_25, var_4));
                        var_26 &= (arr_0 [i_6]);
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_27 = var_8;
                        arr_29 [i_0] [i_0] [1] [12] [i_0] = ((var_4 + (~0)));
                        var_28 = (((arr_15 [i_8 - 1] [i_8 - 2] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_5 - 2]) || var_0));
                        var_29 |= (arr_14 [i_0] [i_8 - 1] [i_5 + 3] [i_6 + 1]);
                    }
                    for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [15] [7] [i_6] [i_0] = ((((var_1 ? var_17 : var_12)) + (var_0 & var_7)));
                        arr_33 [i_9] [i_0] [i_0] [i_1] [i_0] [i_0] = (var_16 <= var_8);
                        var_30 = (min(var_30, (~var_17)));
                        arr_34 [i_0] [i_0] [1] [i_0] [12] = (1 || var_7);
                        var_31 = (max(var_31, (var_0 > var_3)));
                    }
                    for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_32 = (((arr_20 [i_5] [i_5 + 2] [i_5 - 2] [i_5 + 3]) ? (arr_15 [i_10] [i_10 + 1] [i_10 + 2] [i_10] [i_10] [i_10 + 2]) : (arr_36 [18] [i_1] [i_5 + 3] [i_5] [i_6 - 1])));
                        var_33 = 1;
                        var_34 = (~(arr_22 [i_5 - 2] [i_1] [i_6 - 2] [i_10 - 2]));
                    }
                }
                for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    var_35 = (min(var_35, (arr_27 [19] [11] [i_5 - 1])));
                    arr_42 [i_1] [i_1] [i_1] [i_0] [i_1] = var_12;
                    arr_43 [i_0] [3] [19] [i_11] = var_10;
                }
            }
            for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
            {
                var_36 = (var_8 || 332559491);
                var_37 = (max(var_37, var_11));
                var_38 += (~var_5);
                var_39 += (arr_10 [i_0] [i_1] [i_1] [i_12] [1]);
                arr_47 [i_0] [1] [i_0] [i_0] = ((var_6 < (arr_46 [i_0] [i_1] [i_0] [15])));
            }

            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    arr_55 [i_0] [14] [i_13] [i_14] = (1 * var_7);
                    arr_56 [i_14] [i_1] [i_0] [i_14] [i_13 + 1] = ((var_12 | (arr_23 [8] [i_1] [i_13 + 1] [i_14] [i_0] [16] [6])));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    arr_59 [i_1] &= (arr_48 [i_0] [i_13 - 3] [i_1] [i_15]);
                    var_40 = var_14;
                    var_41 = var_8;
                }
                var_42 = ((~(var_9 ^ var_8)));
            }
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_43 = (arr_35 [i_0] [17] [1] [i_16] [1] [i_16] [i_16]);

            for (int i_17 = 1; i_17 < 18;i_17 += 1) /* same iter space */
            {
                var_44 = (((arr_51 [i_0] [i_17] [i_17 + 1]) + var_5));
                arr_67 [12] [0] [i_16] [i_0] = ((arr_3 [i_0]) * var_16);
                var_45 = (arr_66 [i_17 - 1] [i_17 + 2] [i_17 - 1]);
            }
            for (int i_18 = 1; i_18 < 18;i_18 += 1) /* same iter space */
            {
                var_46 = -1160789753;

                for (int i_19 = 4; i_19 < 16;i_19 += 1) /* same iter space */
                {
                    var_47 = (var_16 != var_15);
                    var_48 += ((1 << (4093 - 4072)));
                    var_49 = (0 >= 91);
                    var_50 -= ((var_2 ? var_17 : var_1));
                    arr_75 [1] [1] [i_0] [i_16] [i_0] [1] = (arr_66 [i_18 + 2] [i_19 + 4] [i_19 - 3]);
                }
                for (int i_20 = 4; i_20 < 16;i_20 += 1) /* same iter space */
                {
                    var_51 = (arr_2 [i_0]);
                    var_52 |= (((~var_8) ? var_11 : (var_11 | var_17)));
                    arr_78 [i_0] [i_0] [i_18] [i_20] = (((((var_14 ? var_6 : var_15))) || (((-26245 ? 252 : 9223372036854775807)))));
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 16;i_22 += 1)
                    {
                        {
                            var_53 &= ((arr_35 [i_16] [i_16] [i_18] [1] [i_18 + 2] [7] [1]) && (arr_35 [7] [i_16] [15] [7] [i_18 + 1] [i_22] [i_22]));
                            arr_83 [i_0] [i_0] = var_2;
                        }
                    }
                }
                var_54 = (~(var_9 - var_3));
            }
            var_55 ^= ((var_9 || (1288942741 - 1860418573)));
            var_56 = (((arr_63 [i_0]) ? (arr_14 [i_0] [i_16] [12] [i_0]) : (arr_63 [i_0])));
        }
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_57 = ((-(((arr_49 [0] [i_23] [8] [18]) ? (~var_17) : ((max(10928, var_16)))))));
        var_58 = (arr_61 [i_23] [1]);
    }
    var_59 = (min(var_59, -var_12));

    for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 24;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 24;i_26 += 1)
            {
                for (int i_27 = 2; i_27 < 21;i_27 += 1)
                {
                    {
                        arr_96 [i_24] [i_25] [21] [i_27 + 1] = (-((var_8 + (max(-1860418573, (arr_86 [i_25]))))));

                        for (int i_28 = 3; i_28 < 21;i_28 += 1) /* same iter space */
                        {
                            arr_99 [i_28] = var_8;
                            var_60 = ((!var_15) + ((~((max(var_16, var_17))))));
                            arr_100 [i_24] [12] [14] [i_24] [i_24] [i_24] = -1288942741;
                            var_61 ^= ((var_16 ? var_8 : ((-(min(var_3, var_10))))));
                            var_62 = var_1;
                        }
                        for (int i_29 = 3; i_29 < 21;i_29 += 1) /* same iter space */
                        {
                            arr_103 [0] [i_29 - 2] [3] [i_27 - 1] [i_25] [i_25] [0] = (max(((min((!var_0), 26244))), (!3)));
                            var_63 |= 1;
                        }
                    }
                }
            }
        }
        arr_104 [3] [23] = ((((((arr_92 [i_24]) & (arr_92 [i_24])))) ? (arr_92 [i_24]) : (~1)));
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 24;i_30 += 1)
        {
            for (int i_31 = 3; i_31 < 21;i_31 += 1)
            {
                {
                    arr_111 [11] [i_30] [i_30] [22] = (((arr_88 [i_24]) * (((max((arr_98 [i_31 + 3] [i_31 + 3] [9] [i_24] [i_24] [9] [16]), var_0)) / (arr_105 [i_30])))));
                    /* LoopNest 2 */
                    for (int i_32 = 1; i_32 < 23;i_32 += 1)
                    {
                        for (int i_33 = 1; i_33 < 22;i_33 += 1)
                        {
                            {
                                var_64 ^= ((((916700516 ? -107 : 1860418575)) + (var_0 || var_7)));
                                var_65 *= (((max(((max(1, 1860418573))), (max(var_9, var_17))))) ? ((var_4 * (var_4 * var_5))) : (max((arr_93 [i_24] [i_30] [i_31]), (max(var_7, var_11)))));
                                arr_118 [0] [14] [i_24] [18] [22] [i_24] [i_32] &= var_15;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_34 = 1; i_34 < 23;i_34 += 1)
                    {
                        for (int i_35 = 0; i_35 < 24;i_35 += 1)
                        {
                            {
                                var_66 = (!var_7);
                                var_67 = min((arr_115 [i_30] [i_34 + 1] [i_31 - 1] [i_30] [1] [i_24] [1]), (((arr_121 [i_31 + 3] [i_30] [i_24] [18] [3]) ? 1 : 1)));
                            }
                        }
                    }
                }
            }
        }
        arr_124 [i_24] [i_24] = (((max(((-2040247078 ? var_5 : (arr_86 [i_24]))), 1)) > (((!(arr_102 [i_24] [i_24] [21] [20] [i_24]))))));
    }
    for (int i_36 = 0; i_36 < 24;i_36 += 1) /* same iter space */
    {
        arr_128 [i_36] = 107;
        var_68 = (var_6 + var_7);
        var_69 = (max(var_69, (max((1 / 1), (max((((arr_125 [1]) / -4007)), (max((arr_86 [i_36]), var_3))))))));

        /* vectorizable */
        for (int i_37 = 1; i_37 < 21;i_37 += 1)
        {
            var_70 = ((-(((arr_88 [10]) + (arr_109 [i_36] [21] [16])))));
            /* LoopNest 3 */
            for (int i_38 = 0; i_38 < 24;i_38 += 1)
            {
                for (int i_39 = 2; i_39 < 20;i_39 += 1)
                {
                    for (int i_40 = 3; i_40 < 20;i_40 += 1)
                    {
                        {
                            var_71 = (arr_110 [18] [i_40 - 1]);
                            arr_140 [0] [4] [22] [0] [i_40] |= ((-(arr_97 [i_38] [i_40 + 1] [i_38] [6] [i_40 + 2])));
                            arr_141 [i_36] = (!var_17);
                        }
                    }
                }
            }
            var_72 = (((arr_86 [i_37 + 3]) << (((((~0) + 30)) - 12))));
        }
        for (int i_41 = 0; i_41 < 0;i_41 += 1)
        {
            var_73 += (max(var_3, -var_16));
            var_74 = (max((var_12 - var_13), (((~(arr_107 [i_36] [i_41 + 1] [i_36]))))));
            /* LoopNest 2 */
            for (int i_42 = 0; i_42 < 24;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 24;i_43 += 1)
                {
                    {
                        var_75 = (min(var_75, 1));

                        for (int i_44 = 0; i_44 < 24;i_44 += 1)
                        {
                            arr_152 [i_43] [i_44] [18] [18] [0] = min(1, 1);
                            arr_153 [i_44] [i_41] [i_41] [1] [i_41] [i_41 + 1] [19] = (!var_10);
                        }
                    }
                }
            }
            var_76 = (((((((arr_87 [i_41 + 1]) <= (arr_87 [i_41 + 1]))))) < ((0 ? 277076930199552 : (1 | -4)))));
            var_77 -= (max(((((max(var_4, var_11))) ? (((var_6 ? var_8 : 1399421544))) : (max((arr_151 [16] [20] [i_41 + 1] [i_36] [18] [22]), var_2)))), ((((arr_147 [i_41 + 1] [i_41 + 1] [i_41 + 1]) > ((max((arr_136 [17] [i_36] [22] [i_36] [i_36]), (arr_115 [i_36] [10] [10] [i_36] [20] [i_36] [i_36])))))))));
        }
    }
    for (int i_45 = 0; i_45 < 24;i_45 += 1) /* same iter space */
    {

        for (int i_46 = 0; i_46 < 24;i_46 += 1)
        {
            arr_160 [i_46] = max((~1), ((min((arr_132 [2] [6] [i_45]), (arr_132 [i_45] [i_45] [i_46])))));
            var_78 = (min(var_78, ((((1439536835 ? (max(-134180230, var_3) : var_11)))))));
        }
        /* vectorizable */
        for (int i_47 = 3; i_47 < 22;i_47 += 1) /* same iter space */
        {
            var_79 = (arr_95 [i_47] [i_47]);
            var_80 += (((var_12 & var_6) & var_13));
        }
        for (int i_48 = 3; i_48 < 22;i_48 += 1) /* same iter space */
        {

            for (int i_49 = 0; i_49 < 24;i_49 += 1)
            {
                /* LoopNest 2 */
                for (int i_50 = 2; i_50 < 23;i_50 += 1)
                {
                    for (int i_51 = 0; i_51 < 24;i_51 += 1)
                    {
                        {
                            var_81 = ((((max(-1860418560, 65))) >= (max(((var_17 ? (arr_133 [i_48 - 3] [i_49] [4]) : var_9)), (1439536835 && 1860418586)))));
                            var_82 = (arr_123 [i_50 - 2] [i_50 - 2] [i_50 - 1] [i_50 - 2] [i_51]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_52 = 0; i_52 < 24;i_52 += 1)
                {
                    for (int i_53 = 0; i_53 < 24;i_53 += 1)
                    {
                        {
                            arr_178 [i_53] [i_52] [i_52] [i_49] [i_49] [15] [i_53] = var_2;
                            var_83 = (max(var_4, (~var_0)));
                            arr_179 [i_45] [i_45] [13] [i_49] [i_53] [i_49] [i_49] = ((((var_3 & (arr_133 [11] [6] [i_48 - 1]))) & ((var_6 ^ (arr_133 [i_48] [1] [i_48 - 1])))));
                            var_84 = (max(((max(var_14, ((max(var_4, var_17)))))), ((((min(var_1, var_9))) ? (var_14 - var_8) : (((arr_170 [15] [i_48] [15] [i_48 - 3] [i_48]) / var_9))))));
                        }
                    }
                }
                arr_180 [3] = (min((((min(0, -2040247070)) + (max(var_6, var_3)))), (((var_5 < ((-(arr_129 [i_49] [i_48]))))))));
            }
            arr_181 [4] = (((max((arr_125 [i_48 - 3]), var_10))) ? var_10 : (max(-21002, 30064771072)));
            var_85 = (max((((max(var_2, (arr_130 [i_48]))))), (max(((max(var_8, var_13))), -var_12))));
        }
        arr_182 [17] = var_0;
        var_86 = (min(var_86, (arr_102 [1] [i_45] [23] [i_45] [i_45])));
    }
    #pragma endscop
}
