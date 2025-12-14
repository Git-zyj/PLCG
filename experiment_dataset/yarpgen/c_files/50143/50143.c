/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_16, var_15));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 = ((var_2 ? ((var_15 ? ((var_1 ? var_0 : var_16)) : -var_11)) : var_6));
        var_22 = var_19;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = (min((((var_1 ? var_0 : ((var_12 ? var_6 : var_10))))), ((((max(var_0, var_18))) ? ((var_7 ? var_4 : var_8)) : var_3))));
            arr_8 [i_0] [i_1] [i_0] = ((!(((~((var_12 ? var_9 : var_15)))))));
        }
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = (((min(var_6, var_18))) ? (!var_10) : var_14);
        var_23 &= ((-var_10 ? -var_17 : var_8));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_15 [i_2] = (~var_14);

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_24 = 144115188075855871;

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_20 [i_2] [i_2] [i_2] [i_5] = 4067730039;
                    var_25 = var_8;
                    arr_21 [i_2] [i_3] [1] [i_2] [i_4] [i_5] = (~var_5);
                }
            }
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                arr_26 [23] [i_2] [9] = ((var_17 ? var_2 : var_2));
                arr_27 [i_2] [i_2] [17] [i_2] = var_5;
                var_26 ^= ((var_17 ? var_1 : var_6));
            }
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            var_27 = (!((((var_6 ? var_14 : var_19)))));
            var_28 = var_19;
            arr_30 [i_7] [i_2] = var_17;
        }
        var_29 = ((max(var_8, var_14)));

        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {

            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                var_30 = (max((((~var_9) ? ((var_17 ? var_3 : var_11)) : var_2)), var_5));

                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_44 [i_11] [i_2] [i_11] [i_11] [i_11] [11] [i_11] = var_8;
                        var_31 -= (!((((var_10 ? var_11 : var_8)))));
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        var_32 = (min(var_32, -var_10));
                        arr_48 [i_2] [i_10] [i_2] &= ((var_11 ? -var_14 : -var_12));
                        var_33 = (((((var_10 ? var_5 : var_4))) ? ((var_10 ? var_11 : var_0)) : ((var_0 ? var_11 : var_12))));
                        var_34 ^= var_19;
                        arr_49 [i_2] = (((var_9 ? var_19 : var_6)));
                    }

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_54 [i_2] [i_8] [i_10] [11] = (min(((-(min(var_9, var_6)))), var_10));
                        var_35 = ((var_16 ? var_2 : var_15));
                        arr_55 [i_2] [i_8 + 1] [i_9 - 4] [i_10] [i_2] = var_1;
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        arr_58 [i_8] [1] [i_8] [i_2] [i_8] = min((((((max(var_9, var_10))) ? ((min(var_11, var_15))) : (~var_0)))), (max(((4100 ? 2147483647 : 0)), 2147483628)));
                        var_36 ^= max(var_8, (((!(!var_1)))));
                        var_37 = (~var_17);
                        var_38 = (min(var_38, (((((min(var_17, (!var_2)))) ? var_19 : (((~(~var_5)))))))));
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        var_39 = (max(var_39, ((min((min(var_17, ((-5120 ? 2147483664 : 2147483649)))), -8326824376849946079)))));
                        var_40 = (max(var_40, (((8326824376849946086 ? (min(var_0, var_8)) : 65535)))));
                        var_41 = ((var_11 ? var_1 : var_15));
                        var_42 = var_18;
                        arr_61 [i_2] [i_8 + 1] [i_9] [i_8] [i_2] [i_15] [i_15] = (~var_4);
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                    {
                        arr_65 [i_2] = (((((var_1 ? (min(var_8, var_6)) : var_2))) ? (min(((max(var_7, var_3))), 1)) : (((-(~var_7))))));
                        var_43 = var_12;
                    }
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 2; i_18 < 23;i_18 += 1)
                    {
                        arr_72 [i_2] [i_2] [i_2] = ((((((((1 ? 1 : 424029091))) ? -7971 : 2865464055789748342))) ? ((var_5 ? (min(var_3, var_0)) : ((var_0 ? var_2 : var_17)))) : var_16));
                        var_44 = (((!var_6) ? var_15 : var_8));
                    }
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        arr_76 [i_17] [i_8 - 1] [i_2] [4] [i_8] [i_2] = (max((((var_13 ? var_4 : var_18))), (min(var_4, ((var_17 ? var_11 : var_5))))));
                        var_45 = ((+(min((!var_15), var_17))));
                        arr_77 [i_2 + 1] [i_2] [i_2 + 1] [17] [i_19] = (min(((!((max(var_5, var_17))))), (!var_4)));
                    }
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        arr_82 [i_2 + 1] [i_2] [i_2 + 1] [17] [i_20] [i_20 + 2] = (((!var_1) ? (((var_9 ? ((min(var_11, var_15))) : (min(var_1, var_0))))) : var_8));
                        var_46 *= (~var_7);
                        arr_83 [i_2] [21] [i_8] [i_9] [i_17] [i_17] [1] = var_1;
                        var_47 = ((-(min((min(var_19, var_13)), ((max(var_16, var_9)))))));
                    }

                    /* vectorizable */
                    for (int i_21 = 3; i_21 < 20;i_21 += 1)
                    {
                        var_48 = ((var_0 ? (((var_8 ? var_11 : var_1))) : ((var_18 ? var_2 : var_3))));
                        var_49 = ((-(~var_5)));
                        arr_86 [i_2 + 2] [i_17] [8] [i_17] [i_21] &= (~var_4);
                    }
                }
                for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
                {
                    var_50 = (max((((!(((var_5 ? var_17 : var_11)))))), (min(((var_12 ? var_17 : var_19)), (((var_12 ? var_6 : var_2)))))));
                    var_51 = var_13;
                }

                for (int i_23 = 3; i_23 < 20;i_23 += 1)
                {

                    for (int i_24 = 4; i_24 < 22;i_24 += 1)
                    {
                        arr_93 [i_2] [9] [i_2] = (max(255, 2320864443));
                        var_52 = (!var_8);
                    }

                    for (int i_25 = 0; i_25 < 24;i_25 += 1)
                    {
                        var_53 = -var_14;
                        arr_97 [i_2] [i_8] [i_8] [13] [i_8] [23] [i_2] = (((((~(~var_17)))) ? ((min(var_4, (min(var_6, var_5))))) : var_8));
                        arr_98 [i_2] [i_9] [i_9] [i_9] [i_8 - 3] [i_2] = ((!(((max(var_12, var_16))))));
                        var_54 ^= var_7;
                    }
                    for (int i_26 = 0; i_26 < 24;i_26 += 1)
                    {
                        var_55 = var_13;
                        arr_101 [i_26] [i_23] [i_2] [i_2] [i_2] = ((min(var_0, (((var_0 ? var_15 : var_8))))));
                    }
                    for (int i_27 = 1; i_27 < 22;i_27 += 1)
                    {
                        var_56 = var_5;
                        var_57 = (max(var_57, (((((min((((var_6 ? var_0 : var_16))), (~var_13)))) ? (max(var_7, (max(var_5, var_19)))) : ((max(var_18, (min(var_2, var_17))))))))));
                        var_58 = var_13;
                    }
                }
                var_59 -= (!var_6);
            }
            for (int i_28 = 1; i_28 < 22;i_28 += 1)
            {
                var_60 ^= var_1;
                var_61 = (((~var_13) ? var_0 : var_6));
            }
            for (int i_29 = 3; i_29 < 22;i_29 += 1)
            {
                arr_111 [i_2] [i_8] [i_2] = ((!((min(var_0, (~var_13))))));

                for (int i_30 = 1; i_30 < 23;i_30 += 1)
                {

                    for (int i_31 = 0; i_31 < 24;i_31 += 1)
                    {
                        arr_118 [i_2] [0] [i_8] [0] [i_29] [9] [i_2] = ((var_12 ? (min(var_6, (max(1, 8326824376849946093)))) : (((((min(var_14, var_16))) ? var_1 : (min(var_9, var_16)))))));
                        arr_119 [i_2] [i_2] [i_29 + 1] [i_30] [i_2] = ((max(var_6, var_10)));
                    }
                    var_62 = (max((!var_17), 65514));

                    /* vectorizable */
                    for (int i_32 = 0; i_32 < 24;i_32 += 1)
                    {
                        var_63 = var_16;
                        arr_124 [4] [i_32] [i_30] [i_32] [i_2] [i_2] [i_2] |= (!var_3);
                        var_64 -= ((var_6 ? var_2 : var_6));
                        arr_125 [i_2] [i_8] [2] [i_2] [i_2] = var_0;
                    }
                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 24;i_33 += 1)
                    {
                        var_65 = ((var_17 ? var_9 : var_13));
                        var_66 = ((var_18 ? var_17 : ((-8326824376849946079 ? 1 : 2147483672))));
                        var_67 = (max(var_67, (((var_18 ? ((var_17 ? var_2 : var_19)) : (~var_12))))));
                        var_68 = (((((var_14 ? var_7 : var_1))) ? ((var_6 ? var_10 : var_5)) : var_5));
                        var_69 = var_7;
                    }
                }
                for (int i_34 = 0; i_34 < 24;i_34 += 1)
                {

                    for (int i_35 = 0; i_35 < 24;i_35 += 1)
                    {
                        var_70 *= (max((((-((var_13 ? var_16 : var_4))))), var_3));
                        var_71 = var_18;
                        arr_135 [i_2] [i_2] [i_2] [i_34] [i_35] [i_8 - 3] [i_2] = var_8;
                        var_72 = (min(var_72, ((((((!var_4) ? (((var_12 ? var_6 : var_4))) : var_17))) ? (min(var_14, (min(var_4, var_4)))) : var_11))));
                    }
                    for (int i_36 = 0; i_36 < 24;i_36 += 1)
                    {
                        var_73 = (var_19 ? ((~((var_16 ? var_13 : var_9)))) : (~var_14));
                        var_74 = (min(var_74, var_8));
                        var_75 -= (max(var_7, ((((var_8 ? var_5 : var_4))))));
                    }
                    arr_138 [i_2] [i_2] [i_2] [i_2] = var_6;

                    for (int i_37 = 0; i_37 < 24;i_37 += 1)
                    {
                        arr_141 [i_2] [16] [i_2] [i_2] [i_37] = -var_1;
                        arr_142 [i_2] [i_2] [i_2] [i_2] [17] = (min(((((!var_10) ? var_14 : (~var_1)))), (max((~var_8), (((var_11 ? var_16 : var_4)))))));
                    }
                    /* vectorizable */
                    for (int i_38 = 2; i_38 < 23;i_38 += 1)
                    {
                        var_76 = -var_18;
                        arr_145 [i_38] [i_34] [i_29] [i_34] [1] |= var_19;
                        arr_146 [i_2 + 1] [4] [i_2] [i_34] [i_2 + 1] [i_2 + 1] = -var_1;
                        arr_147 [i_2] [i_2] [17] = var_9;
                        var_77 = (((65 ? 1 : -1433906808)));
                    }
                }
            }
            arr_148 [i_2] = ((~(-32767 - 1)));
        }
        /* vectorizable */
        for (int i_39 = 0; i_39 < 24;i_39 += 1)
        {

            for (int i_40 = 1; i_40 < 23;i_40 += 1)
            {
                var_78 = (((((var_7 ? var_14 : var_7))) ? var_6 : ((var_14 ? var_5 : var_12))));

                for (int i_41 = 0; i_41 < 24;i_41 += 1) /* same iter space */
                {
                    var_79 = var_10;
                    arr_157 [14] [14] [i_2] [14] = (var_5 ? (((var_3 ? var_15 : var_11))) : (~var_19));

                    for (int i_42 = 0; i_42 < 24;i_42 += 1) /* same iter space */
                    {
                        var_80 = ((var_13 ? var_18 : ((var_12 ? var_0 : var_11))));
                        var_81 = ((-(~var_12)));
                        arr_161 [i_2] [i_2] [i_40] [i_40] [6] = var_17;
                        var_82 = var_4;
                    }
                    for (int i_43 = 0; i_43 < 24;i_43 += 1) /* same iter space */
                    {
                        var_83 = ((var_19 ? ((var_4 ? var_17 : var_10)) : -var_15));
                        var_84 = var_0;
                        var_85 = (min(var_85, (!var_2)));
                        arr_164 [i_2] [1] [i_39] [1] [i_2] [1] [10] = var_5;
                    }
                    for (int i_44 = 0; i_44 < 24;i_44 += 1)
                    {
                        var_86 |= -var_14;
                        arr_169 [i_41] [i_2] [i_2] [i_2] [i_2] = -var_8;
                        var_87 = 3901612029;
                    }
                    for (int i_45 = 1; i_45 < 20;i_45 += 1)
                    {
                        var_88 = (~var_1);
                        arr_173 [13] [i_39] [i_2] [i_41] [2] [i_41] = var_17;
                        var_89 = var_16;
                        var_90 -= (!var_13);
                    }
                }
                for (int i_46 = 0; i_46 < 24;i_46 += 1) /* same iter space */
                {

                    for (int i_47 = 0; i_47 < 24;i_47 += 1)
                    {
                        var_91 &= ((-(!-6823502636258391931)));
                        var_92 = ((-65 ? 85 : 18446744073709551615));
                        arr_180 [i_2] [i_2] = -var_16;
                    }
                    var_93 = ((var_12 ? var_19 : var_18));

                    for (int i_48 = 1; i_48 < 22;i_48 += 1)
                    {
                        arr_185 [i_48 + 1] [i_2] [i_40] [i_2] [i_2] = ((var_14 ? var_14 : var_18));
                        var_94 = var_2;
                    }
                }
            }
            for (int i_49 = 0; i_49 < 24;i_49 += 1)
            {

                for (int i_50 = 0; i_50 < 24;i_50 += 1)
                {

                    for (int i_51 = 2; i_51 < 22;i_51 += 1)
                    {
                        arr_194 [i_2] = var_14;
                        arr_195 [i_2] [i_2] [i_2] [i_2] [21] [4] = var_5;
                        arr_196 [i_2] [1] [i_2] [21] [21] [2] = ((var_16 ? 46328 : (!var_16)));
                        arr_197 [18] [18] [18] [18] [i_2] = ((!(((var_7 ? var_14 : var_5)))));
                    }
                    for (int i_52 = 0; i_52 < 24;i_52 += 1)
                    {
                        var_95 = (((((var_5 ? var_9 : var_7))) ? var_14 : var_12));
                        var_96 = (!var_19);
                    }

                    for (int i_53 = 1; i_53 < 23;i_53 += 1)
                    {
                        var_97 = var_1;
                        arr_203 [i_2] [i_39] [22] [i_50] [i_53] |= ((var_3 ? var_16 : ((var_14 ? var_1 : var_17))));
                        var_98 = (min(var_98, var_17));
                    }
                    for (int i_54 = 0; i_54 < 24;i_54 += 1)
                    {
                        arr_208 [i_54] [i_2] [17] [i_39] [i_2] [i_2 + 2] = var_6;
                        arr_209 [i_49] [i_49] [i_49] [i_2] = (((((158 ? var_7 : 10))) ? 3451 : 16558));
                    }
                    for (int i_55 = 0; i_55 < 24;i_55 += 1)
                    {
                        var_99 = var_0;
                        arr_213 [i_2] [i_39] [i_49] [i_50] [i_55] = (var_19 ? -var_1 : ((var_3 ? var_7 : var_11)));
                    }
                }
                for (int i_56 = 1; i_56 < 23;i_56 += 1)
                {
                    arr_217 [i_2] [i_2] [i_2] [i_2] [i_49] [12] &= var_3;
                    var_100 -= ((var_16 ? var_13 : var_14));
                    arr_218 [i_2] [0] [i_2] [i_49] [11] [3] = var_14;

                    for (int i_57 = 0; i_57 < 24;i_57 += 1)
                    {
                        var_101 = (~var_8);
                        var_102 = var_12;
                        arr_221 [i_2] [i_2] [i_57] [i_56] [i_57] |= var_17;
                    }
                    for (int i_58 = 2; i_58 < 23;i_58 += 1)
                    {
                        var_103 = ((var_7 ? var_12 : var_5));
                        var_104 = (!var_4);
                    }
                }
                arr_225 [i_2] = (((var_8 ? var_2 : var_18)));
            }
            var_105 = var_3;
            var_106 = (max(var_106, var_7));
        }
    }
    var_107 = (((((((min(var_0, var_18))) ? (max(var_17, var_15)) : -var_17))) ? var_6 : var_11));
    #pragma endscop
}
