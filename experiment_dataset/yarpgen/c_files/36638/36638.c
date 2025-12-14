/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_18, var_3);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_14 [4] [i_1] [i_1] [i_0] = (!var_19);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = -var_15;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_1] [i_1] [i_2] = var_3;
                    var_21 = (max(var_21, (~var_11)));
                    var_22 = (max(var_22, var_4));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_21 [i_2] [i_1] [i_0] = var_6;

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_23 = var_11;
                        arr_25 [i_7] [1] [i_2] [i_0] [i_0] [i_0] = var_5;
                        var_24 = (max(var_24, var_12));
                    }
                }
            }

            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_33 [8] [i_1] [8] [i_1] [i_1] = var_12;
                        var_25 = (max(var_25, var_2));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_37 [i_0] [i_1] = (~var_4);
                        var_26 = (max(var_26, var_15));
                    }
                    var_27 += (!974744088);
                }
                var_28 = (!var_12);

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_40 [i_12] [i_0] [i_0] [i_1] [i_0] = var_18;

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_29 = (max(var_29, -1));
                        var_30 = var_13;
                    }
                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        arr_47 [i_0] [10] [i_0] [i_8] [i_12] [i_0] [i_14] = var_13;
                        arr_48 [i_0] [i_0] [i_14] [i_14] [i_0] [i_0] = -2097144;
                    }

                    for (int i_15 = 2; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_31 = (~var_15);
                        arr_53 [i_0] [i_1] [i_8] [i_12] [i_15 + 2] = var_9;
                        var_32 = (~var_14);
                        var_33 = (!var_7);
                        var_34 = var_5;
                    }
                    for (int i_16 = 2; i_16 < 11;i_16 += 1) /* same iter space */
                    {
                        arr_56 [4] [4] [i_8] [i_8] [i_16] = var_16;
                        arr_57 [i_16] [i_16] = var_19;
                        arr_58 [i_16] [i_16] [i_16] [i_16] [8] [i_16 + 2] [i_16] = var_13;
                        arr_59 [i_0] [i_1] [i_8] [i_0] [i_16] = var_15;
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        arr_63 [4] [i_12] [i_17] [i_17] [i_1] [i_0] = var_17;
                        var_35 = (!var_5);
                        var_36 = (min(var_36, (~2)));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        var_37 = var_19;
                        var_38 |= var_14;
                        var_39 = var_1;
                        arr_67 [i_12] [i_1] = var_3;
                    }
                    var_40 *= (~var_1);
                    var_41 = -var_16;
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_42 = var_0;
                            arr_72 [i_8] [i_19] [4] [i_20] [i_19] [i_8] = var_18;
                            arr_73 [i_0] [i_1] [i_8] |= (~var_1);
                            var_43 *= var_0;
                        }
                    }
                }
            }
            for (int i_21 = 3; i_21 < 12;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 14;i_22 += 1)
                {
                    var_44 = var_17;

                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        arr_80 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!var_0);
                        var_45 *= var_18;
                        arr_81 [i_0] [3] = var_0;
                    }
                    var_46 = var_0;
                    arr_82 [i_22] [i_0] [i_21] [i_0] [i_0] [i_0] = (!var_10);
                }
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    var_47 = var_2;
                    var_48 = var_1;
                    var_49 += -var_5;
                }
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_50 = (~-1);
                        var_51 = var_7;
                    }

                    for (int i_27 = 1; i_27 < 1;i_27 += 1)
                    {
                        arr_91 [i_25] [i_25] [i_21] [12] [7] [i_1] [i_25] = (~var_8);
                        var_52 = -var_0;
                        var_53 = var_4;
                        var_54 = (max(var_54, (!var_19)));
                        var_55 = var_11;
                    }
                    for (int i_28 = 0; i_28 < 14;i_28 += 1)
                    {
                        arr_96 [i_25] [i_1] [i_21] [i_25] [i_28] = (!var_16);
                        var_56 = var_14;
                        var_57 = var_6;
                        arr_97 [i_0] [i_25] [i_25] = var_17;
                        arr_98 [9] [i_25] [i_25] [i_1] = (!var_8);
                    }
                    for (int i_29 = 3; i_29 < 10;i_29 += 1)
                    {
                        arr_102 [i_29] [i_25] [i_25] [i_21] [i_25] [13] [i_0] = var_0;
                        var_58 = var_6;
                        var_59 = var_0;
                    }
                    var_60 = (min(var_60, var_19));
                }
                arr_103 [i_1] [i_0] = var_4;
            }
            for (int i_30 = 0; i_30 < 14;i_30 += 1)
            {

                for (int i_31 = 2; i_31 < 13;i_31 += 1)
                {
                    var_61 = (max(var_61, var_3));
                    var_62 = var_6;
                    var_63 = var_19;
                }
                for (int i_32 = 1; i_32 < 13;i_32 += 1)
                {
                    var_64 = (~110);
                    arr_111 [i_0] [i_32] [i_32] [3] = var_12;
                }
                for (int i_33 = 0; i_33 < 14;i_33 += 1) /* same iter space */
                {
                    var_65 *= -var_14;

                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        arr_117 [i_0] [i_0] [i_0] [i_0] [i_34] = var_5;
                        arr_118 [i_0] [i_0] [i_34] [i_0] [i_0] [i_0] [i_0] = var_16;
                        var_66 = (~var_11);
                        arr_119 [i_1] [i_1] [i_1] [i_33] [i_34] [i_34] [i_34] = var_11;
                    }
                }
                for (int i_35 = 0; i_35 < 14;i_35 += 1) /* same iter space */
                {
                    var_67 = 31690;

                    for (int i_36 = 0; i_36 < 14;i_36 += 1)
                    {
                        var_68 = (!var_19);
                        arr_126 [i_36] [6] [i_36] = -var_19;
                        var_69 = (min(var_69, (!var_19)));
                        var_70 = var_2;
                    }
                    for (int i_37 = 0; i_37 < 14;i_37 += 1)
                    {
                        arr_129 [i_37] [2] [i_0] |= var_2;
                        arr_130 [i_35] [i_35] [i_35] [i_35] [i_35] = var_13;
                        var_71 = (min(var_71, var_19));
                    }
                    var_72 = (~var_10);
                }
                /* LoopNest 2 */
                for (int i_38 = 0; i_38 < 14;i_38 += 1)
                {
                    for (int i_39 = 2; i_39 < 12;i_39 += 1)
                    {
                        {
                            var_73 = (~var_10);
                            var_74 = (~-var_16);
                            var_75 = (!var_11);
                        }
                    }
                }
                arr_137 [i_30] [i_1] = var_10;
            }
        }
        var_76 = (~var_16);
    }
    /* vectorizable */
    for (int i_40 = 2; i_40 < 23;i_40 += 1)
    {
        arr_141 [i_40] = var_19;
        /* LoopNest 2 */
        for (int i_41 = 0; i_41 < 25;i_41 += 1)
        {
            for (int i_42 = 1; i_42 < 24;i_42 += 1)
            {
                {
                    var_77 = -4294967278;

                    for (int i_43 = 0; i_43 < 25;i_43 += 1)
                    {
                        var_78 = -var_17;
                        var_79 = var_2;

                        for (int i_44 = 0; i_44 < 25;i_44 += 1)
                        {
                            var_80 = var_1;
                            arr_151 [i_44] [20] [i_42] [i_41] [i_40] = (!var_16);
                        }
                        for (int i_45 = 0; i_45 < 25;i_45 += 1)
                        {
                            arr_155 [i_42] [4] [i_42] [i_43] [4] = var_2;
                            var_81 = (~var_12);
                        }
                    }

                    for (int i_46 = 0; i_46 < 25;i_46 += 1)
                    {
                        arr_160 [i_42] [i_41] [i_42] [i_42] = (!var_5);
                        arr_161 [24] [i_42] [i_42] [i_40] = var_18;
                    }

                    for (int i_47 = 0; i_47 < 25;i_47 += 1) /* same iter space */
                    {
                        arr_165 [i_40] [i_42] [i_40] [i_40] [i_40] = var_16;
                        arr_166 [i_42] [i_41] = var_11;
                    }
                    for (int i_48 = 0; i_48 < 25;i_48 += 1) /* same iter space */
                    {
                        var_82 += var_18;

                        for (int i_49 = 0; i_49 < 25;i_49 += 1) /* same iter space */
                        {
                            var_83 = (!var_17);
                            arr_174 [i_42] [i_41] [i_42] = (!-6495510771029929694);
                            var_84 = var_2;
                            arr_175 [i_40] [i_42] [i_42] [10] [i_48] [i_42] [i_49] = var_9;
                        }
                        for (int i_50 = 0; i_50 < 25;i_50 += 1) /* same iter space */
                        {
                            var_85 = var_4;
                            arr_180 [i_40] [i_42] [i_42] [i_42] [i_40] [i_42] [i_41] = var_8;
                        }
                        var_86 ^= var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_51 = 2; i_51 < 24;i_51 += 1)
                    {
                        for (int i_52 = 0; i_52 < 1;i_52 += 1)
                        {
                            {
                                arr_186 [i_42] [i_42] [i_40] [i_42] = (~var_8);
                                arr_187 [i_42] [i_52] [i_51 - 1] [10] [i_42 + 1] [10] [i_42] = -var_15;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_53 = 0; i_53 < 25;i_53 += 1)
        {
            for (int i_54 = 0; i_54 < 25;i_54 += 1)
            {
                {

                    for (int i_55 = 3; i_55 < 22;i_55 += 1)
                    {
                        arr_197 [i_53] [23] [i_53] [i_53] = var_11;
                        var_87 = (max(var_87, (!var_16)));
                    }
                    /* LoopNest 2 */
                    for (int i_56 = 2; i_56 < 24;i_56 += 1)
                    {
                        for (int i_57 = 0; i_57 < 25;i_57 += 1)
                        {
                            {
                                var_88 = var_13;
                                arr_203 [i_40] [i_53] [2] [i_56] [i_57] = 1605145228;
                                var_89 = var_19;
                            }
                        }
                    }
                }
            }
        }
        arr_204 [i_40] = -var_4;
    }
    #pragma endscop
}
