/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [1] [i_3] = var_0;
                                var_15 = (max(var_15, var_0));
                            }
                        }
                    }
                    var_16 = var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_4, (max(var_7, (min(var_9, var_11))))));
                                arr_18 [i_0 - 2] [9] [i_2] [3] [0] = var_3;
                                var_18 = var_10;
                                var_19 = (max(var_19, var_7));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                {
                    var_20 = min(var_7, (min(((min(var_7, var_1))), var_12)));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_21 = (min(((min((max(3726405570, 922563546)), var_5))), var_3));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_22 *= (min(((max(var_7, (min(var_0, var_1))))), (min((min(var_4, var_12)), (min(var_12, var_2))))));
                            var_23 = var_9;
                            arr_30 [i_0] [i_9] [i_10] [i_9] [i_10] = (max((min((min(var_13, var_14)), ((min(var_6, var_4))))), var_4));
                            var_24 = (min(var_24, var_2));
                            arr_31 [i_8 - 1] [i_0] = max(((min(var_11, ((min(var_9, var_5)))))), var_8);
                        }
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_25 = (min((min(var_5, (max(var_0, var_14)))), var_9));

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_26 = (min((min(var_5, (max(var_10, var_14)))), var_14));
                            var_27 ^= var_11;
                        }
                        arr_38 [i_0 - 2] [i_0] [i_0] [i_0] = var_5;
                        arr_39 [i_0] [i_0] [i_8] [i_11] [i_0] = var_9;
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_28 ^= (min(183, 3372403749));
                        var_29 = var_1;
                    }
                    var_30 = (max(var_30, var_12));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_31 = var_1;
                                var_32 = (max(var_8, var_7));
                                var_33 = (min(var_11, var_12));
                                var_34 = (max(var_5, var_8));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    {
                        var_35 = (max(((min(var_5, (min(var_2, var_0))))), (max((max(var_6, var_3)), var_9))));

                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            var_36 = (max(215, 59));
                            arr_60 [i_18] [i_18] [i_16] [i_18] = (max(((min(var_0, var_4))), var_6));
                            var_37 *= (max(var_10, var_13));
                            var_38 = var_12;
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            var_39 = var_2;
                            var_40 = (min(var_40, var_10));
                            arr_63 [6] [i_16] [i_16] [i_18] [i_20] = var_9;
                            var_41 = (max((max(1, 528482304)), 174));
                        }
                        for (int i_21 = 2; i_21 < 19;i_21 += 1)
                        {
                            var_42 = var_10;
                            var_43 = var_8;
                            arr_68 [i_18] [i_17] [i_17] [i_16] [i_18] = var_7;
                            var_44 = var_14;
                        }
                        for (int i_22 = 2; i_22 < 17;i_22 += 1)
                        {
                            var_45 = (min(((min(((min(var_5, var_7))), var_4))), var_12));
                            var_46 = var_11;
                            arr_71 [i_0] [i_18] [10] [i_18] [i_22] = var_12;
                        }
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 1; i_24 < 17;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 2; i_26 < 17;i_26 += 1)
                {
                    {

                        for (int i_27 = 0; i_27 < 20;i_27 += 1) /* same iter space */
                        {
                            var_47 ^= var_5;
                            var_48 = max((min(3372403749, 568561725)), var_1);
                            var_49 = (max(var_6, var_9));
                        }
                        /* vectorizable */
                        for (int i_28 = 0; i_28 < 20;i_28 += 1) /* same iter space */
                        {
                            arr_86 [i_24] [i_24] = var_5;
                            arr_87 [i_23] [i_23] [i_23] [i_23] [i_24] = var_11;
                        }
                        for (int i_29 = 0; i_29 < 20;i_29 += 1) /* same iter space */
                        {
                            var_50 |= max(var_12, var_1);
                            var_51 = (min(var_9, var_12));
                        }
                        arr_91 [i_23] [i_24] = var_7;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_30 = 3; i_30 < 17;i_30 += 1)
        {
            for (int i_31 = 1; i_31 < 19;i_31 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_32 = 2; i_32 < 18;i_32 += 1) /* same iter space */
                    {
                        var_52 = var_2;
                        arr_99 [i_23] [i_23] [i_23] [i_32 - 2] = var_10;
                    }
                    for (int i_33 = 2; i_33 < 18;i_33 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_34 = 0; i_34 < 20;i_34 += 1)
                        {
                            arr_104 [i_23] [i_30] [i_30] [i_23] [i_34] [i_34] [i_23] = var_9;
                            var_53 = var_7;
                            arr_105 [i_23] [16] [i_30] [i_31] [i_33] [i_31] [13] = var_4;
                        }
                        for (int i_35 = 0; i_35 < 20;i_35 += 1) /* same iter space */
                        {
                            var_54 -= (min(var_7, var_9));
                            arr_108 [i_23] = var_1;
                            arr_109 [i_23] [i_30 + 2] [i_23] [i_33] [0] [i_30 + 2] = var_4;
                        }
                        /* vectorizable */
                        for (int i_36 = 0; i_36 < 20;i_36 += 1) /* same iter space */
                        {
                            var_55 += var_7;
                            arr_112 [i_23] [i_23] [i_33] [i_33] [4] = var_9;
                        }
                        var_56 = (min(var_14, (min(var_10, (max(3726405570, 1993910096))))));
                    }
                    for (int i_37 = 0; i_37 < 20;i_37 += 1)
                    {
                        var_57 = (min(var_8, ((min(var_3, var_1)))));
                        var_58 = (max(var_13, (max(var_8, ((max(var_3, var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_38 = 0; i_38 < 20;i_38 += 1)
                    {
                        for (int i_39 = 2; i_39 < 18;i_39 += 1)
                        {
                            {
                                var_59 = (min(var_59, var_3));
                                arr_121 [i_23] [i_30] [i_38] [i_39] = (max(var_12, (min(var_6, (min(var_12, var_0))))));
                            }
                        }
                    }
                }
            }
        }
        var_60 = (min((min((min(var_14, var_13)), var_2)), var_5));

        for (int i_40 = 0; i_40 < 1;i_40 += 1)
        {
            /* LoopNest 2 */
            for (int i_41 = 0; i_41 < 20;i_41 += 1)
            {
                for (int i_42 = 2; i_42 < 17;i_42 += 1)
                {
                    {
                        var_61 = (max(((min((min((-9223372036854775807 - 1), 922563546)), (min(1, 6266847393793009034))))), (max(var_5, (max(10213745950815787163, 66584576))))));

                        for (int i_43 = 1; i_43 < 17;i_43 += 1) /* same iter space */
                        {
                            arr_131 [i_23] [i_23] [i_40] = var_3;
                            var_62 = var_1;
                            arr_132 [i_40] [i_42 - 1] [i_40] = (min(var_5, var_14));
                        }
                        for (int i_44 = 1; i_44 < 17;i_44 += 1) /* same iter space */
                        {
                            var_63 = (max(var_63, ((max(var_14, (min(var_5, (min(var_6, var_6)))))))));
                            arr_136 [i_40] [i_44] = (min(var_3, (min((min(var_11, var_10)), (min(var_2, var_3))))));
                            arr_137 [i_40] [i_40] [i_41] [i_40] = (min(var_1, (max((min(var_13, var_4)), ((max(var_2, var_11)))))));
                        }

                        for (int i_45 = 0; i_45 < 20;i_45 += 1) /* same iter space */
                        {
                            var_64 = var_4;
                            var_65 = var_5;
                            var_66 ^= (max(((max(var_7, var_0))), (max(var_14, var_10))));
                            var_67 = var_12;
                        }
                        /* vectorizable */
                        for (int i_46 = 0; i_46 < 20;i_46 += 1) /* same iter space */
                        {
                            var_68 = var_7;
                            var_69 = var_10;
                            var_70 = var_10;
                            var_71 = var_13;
                            var_72 = var_5;
                        }
                        for (int i_47 = 0; i_47 < 20;i_47 += 1) /* same iter space */
                        {
                            var_73 = var_0;
                            var_74 = (max(var_6, ((min(var_5, var_9)))));
                            var_75 = (max((min(var_7, (min(var_5, var_12)))), (max(var_2, var_11))));
                            var_76 = (min(var_76, var_2));
                        }
                        /* vectorizable */
                        for (int i_48 = 0; i_48 < 1;i_48 += 1)
                        {
                            var_77 = (max(var_77, var_3));
                            arr_149 [i_23] [i_40] [i_23] [0] [i_40] = var_0;
                        }
                        var_78 = var_12;
                        arr_150 [i_40] = var_4;
                    }
                }
            }
            arr_151 [i_40] = min(((max(var_9, var_9))), var_10);
        }
    }
    for (int i_49 = 3; i_49 < 22;i_49 += 1)
    {

        for (int i_50 = 2; i_50 < 20;i_50 += 1)
        {

            for (int i_51 = 1; i_51 < 22;i_51 += 1)
            {
                arr_160 [i_49] [i_50] [i_49] = var_6;
                arr_161 [i_49] [1] [0] = var_1;
            }

            for (int i_52 = 4; i_52 < 22;i_52 += 1)
            {
                /* LoopNest 2 */
                for (int i_53 = 3; i_53 < 21;i_53 += 1)
                {
                    for (int i_54 = 3; i_54 < 21;i_54 += 1)
                    {
                        {
                            var_79 = (min((min((min(var_6, var_6)), var_6)), ((min((max(var_4, var_5)), var_10)))));
                            arr_169 [i_52] [i_52 - 2] [i_52] [i_52] |= (min(var_1, (max((min(1, 3372403743)), var_14))));
                            var_80 += var_7;
                        }
                    }
                }
                arr_170 [i_49] [i_49] = var_7;
            }
            var_81 = var_10;
        }
        arr_171 [i_49] = var_12;
        var_82 = var_9;
    }
    /* vectorizable */
    for (int i_55 = 0; i_55 < 15;i_55 += 1)
    {
        var_83 = var_1;

        for (int i_56 = 0; i_56 < 15;i_56 += 1)
        {
            arr_177 [i_55] [i_56] = var_5;
            arr_178 [i_56] = var_8;
            arr_179 [i_56] [i_56] = var_13;
        }
        var_84 = var_0;
    }
    var_85 = (max(var_6, (min((max(var_10, var_13)), var_3))));
    #pragma endscop
}
