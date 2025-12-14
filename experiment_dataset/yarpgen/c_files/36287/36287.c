/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (+-var_11);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (((var_7 || ((((!1) ? 3 : var_8))))))));
                        var_15 = (max(var_15, (((((((min(var_12, var_1))))) ? 1 : 141103519)))));
                    }
                }
            }
            var_16 = (min(var_16, var_6));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_17 = (min(var_17, (((min(-2408441796094903722, (!1)))))));
            var_18 = (min(var_18, ((min(((1 ? ((var_8 ? var_3 : 1)) : var_3)), ((~((638991615 ? 1 : -1184780213)))))))));
            var_19 ^= (((((((max(var_0, 1))) ? (max(4194303, var_4)) : (var_5 | 3968)))) ? (arr_5 [1] [1]) : var_2));
        }

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_20 = (max(var_20, ((max((((max((arr_15 [0]), var_8)))), (min(((1 ? var_0 : var_1)), var_2)))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_21 &= ((((max(var_11, var_10))) ? (min(638991615, var_2)) : ((max(var_10, var_6)))));
                            var_22 = (min(var_22, ((max(var_3, var_2)))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_23 = (min(var_23, ((((((1 ? var_5 : ((var_0 ? (arr_18 [i_0] [i_0]) : 57742))))) ? (((1 / (arr_6 [8] [8])))) : var_8)))));
            var_24 ^= var_0;
            var_25 ^= 4194303;
            var_26 &= ((((arr_18 [i_0] [i_0]) ? 1 : (max(4294967295, var_4)))));
            var_27 = (max(var_27, var_1));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    {
                        var_28 = (min(var_28, var_4));
                        var_29 *= (arr_20 [i_10] [i_10] [i_12 + 3] [i_12 - 1]);

                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            var_30 -= (arr_16 [i_13] [i_0] [i_0]);
                            var_31 = (max(var_31, 63));
                            var_32 = (min(var_32, (((((((arr_21 [i_13] [i_13 + 1] [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2] [i_13]) - (arr_21 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13])))) ? 1 : ((1 ? (arr_21 [i_13] [i_13 - 2] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13 - 2]) : (arr_21 [i_13] [i_13 + 1] [i_13 + 1] [i_13] [i_13 - 2] [i_13 + 1] [i_13]))))))));
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_33 = (min(var_33, ((((((var_6 ? ((1 ? var_8 : 1)) : (((max(var_11, var_10))))))) ? (((!((min(905743822, (arr_36 [i_10] [i_10] [i_11] [i_12] [i_14]))))))) : ((114688 ? ((min(1, var_6))) : ((max(var_5, 7781))))))))));
                            var_34 = (min(var_34, (((var_6 - (min(((var_10 ? var_6 : 1)), 1)))))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_35 = (min(var_35, ((((((var_2 ? (arr_1 [i_0 - 3]) : var_12))) ? (arr_37 [i_15] [i_0] [i_0] [i_11] [i_10] [i_0]) : 7779)))));
                            var_36 &= ((((arr_17 [i_10] [12] [i_0 - 3]) ? (arr_17 [i_10] [i_0 - 2] [i_0 - 1]) : var_1)));
                            var_37 = (max(var_37, ((((arr_34 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_10] [i_12 + 4]) * var_9)))));
                        }

                        for (int i_16 = 1; i_16 < 11;i_16 += 1)
                        {
                            var_38 += var_11;
                            var_39 = (min(var_39, 1));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            var_40 = (max(var_40, (arr_18 [i_10] [i_11])));
                            var_41 = (min(var_41, var_1));
                        }
                        for (int i_18 = 1; i_18 < 11;i_18 += 1)
                        {
                            var_42 *= (max(((8737 ? (arr_42 [i_18 - 1] [i_12] [i_11] [i_11] [i_11]) : (arr_52 [i_18] [i_18 - 1] [12] [3] [i_18 - 1] [i_18 - 1] [i_18]))), var_9));
                            var_43 &= ((16 ? 114688 : (min(var_2, (min((arr_4 [i_0] [i_12 - 1] [i_0]), (arr_6 [i_10] [i_10])))))));
                            var_44 = (min(var_44, 57758));
                        }
                    }
                }
            }
            var_45 = (max(var_45, ((max(var_10, -1270668882641035251)))));
        }
        var_46 |= (((arr_10 [12] [i_0] [12]) ? (((((-(arr_19 [i_0] [i_0] [11] [11])))))) : (max((!var_7), -1))));
    }
    for (int i_19 = 0; i_19 < 22;i_19 += 1)
    {
        var_47 ^= (~var_11);
        var_48 += var_5;
        var_49 &= var_8;
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        var_50 ^= var_6;
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 15;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 19;i_24 += 1)
                        {
                            {
                                var_51 = (max(var_51, (((-(~0))))));
                                var_52 ^= var_12;
                                var_53 = (max(var_53, var_11));
                                var_54 = (min(var_54, (((-((var_6 ? 1 : var_5)))))));
                                var_55 -= (arr_59 [i_20]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            {
                                var_56 = (max(var_56, 1));
                                var_57 &= ((-198 == ((7803 ? var_11 : var_0))));
                                var_58 = (max(var_58, var_4));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 1;i_27 += 1)
        {
            for (int i_28 = 1; i_28 < 18;i_28 += 1)
            {
                {
                    var_59 &= var_1;
                    var_60 = (min(var_60, ((((((var_0 / ((var_6 ? (arr_53 [i_20] [i_20]) : 143833713099145216))))) ? ((((arr_65 [i_27 - 1] [i_27] [14] [i_27 - 1] [1] [i_27 - 1] [8]) * var_7))) : (max(((((arr_74 [16] [16]) ? var_0 : var_2))), (~3712271175))))))));
                    var_61 = (max(var_61, ((+(min(var_11, (min((arr_60 [10]), 65535))))))));
                    var_62 -= (((arr_53 [i_28] [i_20]) ? ((var_6 ? (min(-1, 18446744073709551614)) : 12800)) : (((-(arr_66 [i_20] [i_20] [i_27] [i_27 - 1]))))));
                    var_63 &= var_3;
                }
            }
        }
    }
    for (int i_29 = 0; i_29 < 16;i_29 += 1)
    {

        for (int i_30 = 0; i_30 < 16;i_30 += 1)
        {
            var_64 -= 3501628181648111059;
            var_65 = var_8;
            /* LoopNest 2 */
            for (int i_31 = 1; i_31 < 15;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 16;i_32 += 1)
                {
                    {
                        var_66 = (min(var_66, var_4));
                        var_67 &= 1;

                        /* vectorizable */
                        for (int i_33 = 1; i_33 < 15;i_33 += 1)
                        {
                            var_68 = (min(var_68, 1081169913));
                            var_69 *= 1;
                            var_70 = (min(var_70, var_2));
                            var_71 = (min(var_71, ((var_10 > ((var_1 ? var_8 : var_7))))));
                        }
                        for (int i_34 = 0; i_34 < 16;i_34 += 1)
                        {
                            var_72 = (max(var_72, (((4294967295 & (((((((arr_61 [i_34] [i_31 + 1] [i_30] [i_34]) ? var_10 : var_1))) ? ((min(var_5, (arr_67 [i_34] [i_34])))) : ((13201 ? 1008 : var_5))))))))));
                            var_73 = (min(var_73, ((((((1 ? (max((arr_82 [i_29] [10] [i_29] [i_34]), var_11)) : var_10))) ? (max((arr_89 [2] [i_31 + 1] [i_31] [i_29] [i_31 + 1] [i_30] [i_29]), (((var_2 ? var_9 : var_3))))) : 184)))));
                            var_74 = (min(var_74, ((((((!var_7) ? (1 == var_9) : var_6))) ? (((~(arr_59 [i_31])))) : (((((549688705024 ? var_10 : 1))) ? ((var_6 ? 1 : 1)) : (-30352 != var_12)))))));
                            var_75 *= (max(2329962111, ((-8455212587145256046 ? (max((arr_58 [i_34]), var_8)) : 1))));
                            var_76 = (min(var_76, (((!(((var_5 ? (-128552233 || 1) : (!-1421764048)))))))));
                        }
                        for (int i_35 = 0; i_35 < 16;i_35 += 1)
                        {
                            var_77 += var_1;
                            var_78 = (min(var_78, var_3));
                        }
                    }
                }
            }
            var_79 ^= ((((var_5 ^ var_5) ? (((arr_87 [i_30] [i_30] [i_30] [i_29]) ? var_11 : 8871500400986995516)) : var_9)));
            var_80 *= 4294705152;
        }
        for (int i_36 = 0; i_36 < 16;i_36 += 1)
        {
            var_81 = (max(var_81, var_11));
            /* LoopNest 3 */
            for (int i_37 = 2; i_37 < 12;i_37 += 1)
            {
                for (int i_38 = 2; i_38 < 13;i_38 += 1)
                {
                    for (int i_39 = 0; i_39 < 16;i_39 += 1)
                    {
                        {
                            var_82 = (min(var_82, ((max(((((arr_91 [i_29]) ? var_9 : ((1 ? 89 : var_1))))), ((32767 ? (~var_8) : (var_6 > 127))))))));
                            var_83 = (min(var_83, ((((((arr_99 [i_39] [i_39] [i_39] [i_38 - 1]) <= var_5)) ? ((var_1 ? var_9 : (arr_61 [i_36] [i_38 - 2] [i_38] [i_38 - 2]))) : (((1 ? (arr_78 [i_36] [i_36]) : var_2))))))));
                            var_84 = (min(var_84, var_2));
                            var_85 = (min(var_85, ((((((var_4 ? (arr_84 [i_36] [12] [i_37] [i_37 + 1] [i_38]) : ((((arr_83 [i_29] [i_36] [i_37] [i_36]) ? 220 : (arr_95 [i_36] [i_36] [i_36] [i_36]))))))) ? (((((var_8 ? var_3 : (arr_92 [i_29] [i_29] [i_29] [i_29] [i_36])))) ? ((var_3 ? var_7 : var_9)) : 1)) : ((~((1 ? 24154 : 1314080516)))))))));
                        }
                    }
                }
            }
            var_86 ^= var_1;
        }
        var_87 = (min(var_87, (~13)));
    }
    var_88 ^= ((var_3 ? var_10 : var_10));
    #pragma endscop
}
