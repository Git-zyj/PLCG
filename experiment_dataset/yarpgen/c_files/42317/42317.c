/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_17 = (min(var_17, (((-(((!var_3) * var_14)))))));
            arr_5 [13] [i_1] = (((((~var_6) ? (max(var_8, var_4)) : var_4)) << (((max(var_13, (var_5 < var_13))) - 2045300876))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_0] [4] [10] [i_0] |= var_11;
                        var_18 = (~var_5);
                    }
                }
            }
            arr_17 [14] = (max(var_3, (min((min(var_4, var_13)), var_5))));

            for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_19 = (min(var_19, var_16));
                arr_20 [i_0 + 1] [4] [13] [i_5 + 2] = -88;
                var_20 = var_12;
                var_21 = (max(var_21, var_12));
            }
            for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_22 = var_12;
                arr_25 [i_6] = (((((var_8 ? var_10 : var_7))) * var_6));
                var_23 = (((((((var_3 ? var_12 : var_3)) >> ((((max(var_10, var_11))) + 40))))) ? (min(var_12, ((var_4 << (var_9 - 7893199408913373593))))) : (min(((var_10 ? var_15 : var_12)), -var_0))));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_2] = (!88);
                arr_29 [i_7] [1] [7] [i_0] = ((((var_12 ? var_8 : var_3)) - var_8));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_39 [i_8] [9] [i_8] = var_15;
                        arr_40 [i_0] [i_0] [i_0] [i_9] [i_8] [i_0] [i_10] |= (min(355166779, 1048560));
                        var_24 = ((((!((max(1, var_15))))) ? var_9 : ((((var_4 || var_9) ? (!var_4) : (!var_15))))));
                        var_25 = var_10;
                    }
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        arr_44 [i_0] [12] [8] [i_2] [i_8] [i_9] [5] = ((((((min(16891321108291935360, 18446744073709551607)) % var_6))) ? var_4 : var_16));
                        var_26 = ((var_0 ? (((!var_7) ? var_15 : (!var_2))) : ((((!var_3) ? var_7 : ((4156257899713155644 ? 466198055 : 1)))))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_27 = (min(var_27, var_13));
                        var_28 = (max(var_28, ((max(20894, 1822424796)))));
                        arr_47 [i_0] [i_0] [7] [i_8] [i_0 - 2] [1] = ((((max((var_10 ^ var_13), ((min(var_16, var_8)))))) ? ((min((var_13 != var_4), ((var_3 ? var_7 : var_6))))) : var_3));
                        arr_48 [i_0] [i_8] [i_8] [i_9] [i_12] = ((((((var_4 < ((var_5 ? var_15 : var_8)))))) % var_5));
                        arr_49 [i_8] [i_2] [i_8] [i_8] [i_8] [i_12] = (!var_16);
                    }
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_29 = (max((((var_14 || -315485944) == var_15)), ((!(((var_5 ? var_9 : var_6)))))));
                        var_30 = ((((((var_2 > var_4) ? -var_6 : var_1))) >= (max(var_3, var_11))));
                    }
                    arr_52 [i_0] [i_0] &= var_8;

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_57 [i_8] [i_2] [6] [i_9] = (((var_16 == var_16) <= ((~(-46 * 1)))));
                        var_31 += ((4292664953 << (18446744073709551607 - 18446744073709551591)));
                        var_32 = (!var_12);
                    }

                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        arr_61 [i_0] [i_2] [i_8] [i_9] [i_2] = (var_9 > var_15);
                        var_33 = (min(var_33, (~var_13)));
                        var_34 &= var_6;
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_35 = (min(var_35, 48140));
                        arr_64 [i_16] [0] [i_8] [i_8] [i_8] [i_2] [i_0] = (((((var_2 ? var_14 : var_9))) ? var_12 : (((794934553 ? 3500032755 : 22)))));
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 12;i_17 += 1)
                    {
                        arr_68 [i_0] [i_8] [i_8] [i_9] [i_17] = -var_0;
                        var_36 = (min(var_36, var_9));
                        var_37 = (~var_7);
                    }
                    for (int i_18 = 2; i_18 < 13;i_18 += 1)
                    {
                        var_38 = (!var_16);
                        arr_72 [i_8] = -36;
                        arr_73 [i_0] [i_0] [i_9] |= -var_11;
                    }

                    for (int i_19 = 1; i_19 < 11;i_19 += 1)
                    {
                        arr_76 [i_0] [1] [i_8] [i_0] [i_19] |= ((((((var_1 > var_4) ? var_15 : (!var_3)))) ? var_5 : var_2));
                        var_39 = min((!var_11), var_14);
                        var_40 = (max(var_40, var_10));
                        var_41 = (min((var_8 & var_8), (((((var_2 ? var_2 : var_2))) - ((var_10 ? var_15 : var_5))))));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_42 = (~var_11);
                        arr_80 [i_0] [i_8] [i_8] [4] [i_8] = ((-(4292664975 || 2147483647)));
                        var_43 = (~var_13);
                    }
                    for (int i_21 = 3; i_21 < 11;i_21 += 1)
                    {
                        arr_83 [i_8] [i_21] [i_9] [i_8] [i_8] [i_2] [i_0 - 1] = var_11;
                        var_44 |= ((~(min(var_5, (((71 ? 32029 : var_8)))))));
                    }
                }
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    var_45 = ((~(((((96 ? 1 : var_7))) ? (!var_5) : var_16))));
                    var_46 = ((!(((10319098198164045302 ? 2237961495 : 32758)))));
                    arr_86 [7] [i_8] [6] [5] [i_22 + 2] = 2472542505;
                }
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    var_47 = (((var_7 <= var_13) ? (var_12 && var_9) : (((((var_3 ? var_5 : var_14))) ? ((var_14 ? var_8 : var_13)) : (!var_0)))));
                    var_48 = (var_6 && 37840);
                    arr_90 [i_8] [i_8] [i_8] [i_8] [i_23] = ((!((max(var_15, 31191)))));
                    arr_91 [i_0] [12] [i_2] [i_0] |= (-(((!var_15) - ((var_12 >> (var_11 + 38))))));
                }
                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    var_49 = (max(var_49, ((min(((max(var_2, var_9))), var_4)))));
                    var_50 = ((-121 ? 2302292 : 2302355));
                    arr_95 [i_8] [i_8] [i_2] [i_8] [i_24] = var_13;
                    var_51 = (1 <= -54);
                }

                for (int i_25 = 0; i_25 < 15;i_25 += 1)
                {
                    arr_98 [i_2] [i_8] [i_8] = ((((!(var_4 || var_4))) ? (((((var_3 == var_1) == (~var_12))))) : (min((var_16 ^ var_2), var_2))));
                    arr_99 [i_8] = ((((((1 ? 2052985185 : var_12)) > 1822424799)) ? ((max(var_1, ((max(1, -1)))))) : (var_9 ^ var_15)));
                    arr_100 [i_8] [i_2] [i_8] [i_25] = (((var_15 - var_12) >= (~4292665016)));
                    var_52 = ((~(((((-84 ? -7 : 47450)) <= var_10)))));
                    var_53 = (min(var_53, (((!((((44492 ? 3887696073 : -76)))))))));
                }
                arr_101 [i_2] [i_8] = -114;
                var_54 = ((!(((-(var_15 & var_15))))));
                arr_102 [i_8] [i_2] [i_8] [i_8] = (max(((((((var_4 ? var_14 : var_15))) ? (~var_8) : (!var_14)))), (max(var_6, -var_10))));
            }
        }
        for (int i_26 = 0; i_26 < 15;i_26 += 1) /* same iter space */
        {
            var_55 &= var_8;

            /* vectorizable */
            for (int i_27 = 1; i_27 < 11;i_27 += 1)
            {
                arr_108 [i_0 - 2] [i_27] [i_27] = var_12;

                for (int i_28 = 3; i_28 < 11;i_28 += 1)
                {

                    for (int i_29 = 2; i_29 < 14;i_29 += 1)
                    {
                        arr_115 [i_27] [i_27] [i_27] [i_29] = var_3;
                        arr_116 [i_0] [i_0] [14] |= var_7;
                        arr_117 [i_29 - 1] [i_27] [i_0] = ((2302355 ? -107 : 953390036));
                    }
                    for (int i_30 = 3; i_30 < 13;i_30 += 1)
                    {
                        var_56 = var_15;
                        var_57 += ((-(var_5 != var_2)));
                        var_58 = var_11;
                    }
                    for (int i_31 = 2; i_31 < 14;i_31 += 1)
                    {
                        var_59 += (var_16 & var_1);
                        var_60 |= (~-1463092764);
                    }
                    var_61 = ((-(var_8 + 407271223)));
                }
                for (int i_32 = 0; i_32 < 15;i_32 += 1)
                {
                    arr_126 [i_27 - 1] [i_27] [i_27] [i_27] = var_5;
                    arr_127 [i_0 + 1] [i_26] [i_26] [i_27 + 3] [i_27] = var_7;
                }
                for (int i_33 = 0; i_33 < 15;i_33 += 1)
                {
                    var_62 = (((~var_9) ? (var_9 == var_10) : var_12));
                    arr_132 [i_0 - 2] [i_0] [i_0] [i_0 - 2] |= ((var_11 ? (var_8 == var_7) : var_4));
                }
                arr_133 [5] [i_27] = var_1;
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 15;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 15;i_35 += 1)
                    {
                        {
                            arr_139 [i_0 - 1] [i_26] [i_27] [5] [i_27] = ((var_13 % (~var_10)));
                            var_63 = (~var_10);
                            arr_140 [i_35] [i_34] [i_0] [i_27] [i_0] [i_26] [i_0] |= var_9;
                            arr_141 [i_0] [i_0] [i_27] [i_0 - 1] [i_0] = ((!(!var_11)));
                        }
                    }
                }
            }
            var_64 = var_5;
            /* LoopNest 2 */
            for (int i_36 = 3; i_36 < 12;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 15;i_37 += 1)
                {
                    {
                        arr_147 [i_0] [i_26] [i_36] [i_26] [i_37] = (max((((var_13 < (!var_4)))), var_10));

                        for (int i_38 = 2; i_38 < 14;i_38 += 1) /* same iter space */
                        {
                            var_65 = var_16;
                            var_66 = (-94 ? 63 : (14915626048317174546 * -104));
                        }
                        /* vectorizable */
                        for (int i_39 = 2; i_39 < 14;i_39 += 1) /* same iter space */
                        {
                            arr_152 [i_39] [i_37] [12] [i_26] [i_39] &= var_15;
                            arr_153 [i_36] = var_1;
                        }
                        for (int i_40 = 2; i_40 < 14;i_40 += 1) /* same iter space */
                        {
                            var_67 = (max(var_67, var_5));
                            arr_157 [14] [14] [i_40] [i_37] [14] |= (-1073313687 > var_13);
                            arr_158 [i_0] [i_36] = (((((var_0 - ((var_0 ? var_13 : var_16))))) ? ((~((var_2 ? var_16 : var_15)))) : ((((~var_9) ? (!var_3) : var_15)))));
                        }
                    }
                }
            }
        }
        arr_159 [i_0] [i_0] = 75;
    }
    var_68 += (1 && 54892);
    var_69 |= (!3008);
    #pragma endscop
}
