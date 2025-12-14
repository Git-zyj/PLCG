/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_11 = (max(127, 23037));
            arr_5 [i_1] = var_4;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_12 = var_4;
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = var_8;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_13 -= (min(var_8, (min((max(var_0, var_2)), var_2))));
                            var_14 &= (max(var_6, (max(var_6, var_1))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_15 = (max(var_15, var_7));
                            arr_23 [i_0] [i_0] [5] [i_1] [5] = var_3;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, var_2));
                            var_17 = max(127, (-127 - 1));
                        }
                        var_18 = var_8;
                        var_19 = var_1;
                        var_20 = max(var_7, ((max(var_5, var_3))));
                    }
                }
            }
            var_21 &= (min(var_9, var_1));
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_22 ^= (min(var_7, var_7));
            var_23 = var_0;
        }
        arr_29 [i_0] = var_0;
        var_24 = var_2;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_35 [i_9] &= var_7;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_25 = (max(var_25, var_1));
                            var_26 = var_3;
                            var_27 = var_9;
                            var_28 = var_2;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {

            for (int i_15 = 1; i_15 < 20;i_15 += 1)
            {
                var_29 = (max(var_29, var_5));
                var_30 = (min(var_30, var_9));
                arr_53 [i_9] = var_10;
            }
            for (int i_16 = 4; i_16 < 20;i_16 += 1)
            {
                var_31 = var_6;
                var_32 = var_0;
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_33 = (min(var_33, var_4));
                            var_34 = var_7;
                        }
                    }
                }
            }
            for (int i_19 = 2; i_19 < 20;i_19 += 1) /* same iter space */
            {
                var_35 = var_10;
                var_36 = (min(var_36, var_9));
            }
            for (int i_20 = 2; i_20 < 20;i_20 += 1) /* same iter space */
            {
                arr_68 [i_9] [i_14] [i_14] [i_9] = var_1;

                for (int i_21 = 3; i_21 < 19;i_21 += 1)
                {
                    var_37 = var_9;
                    arr_72 [i_21] = var_10;
                }
                for (int i_22 = 2; i_22 < 18;i_22 += 1)
                {
                    var_38 = var_0;
                    var_39 = (max(var_39, var_1));
                }
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    var_40 -= var_3;
                    arr_78 [i_9] [i_9] [i_20] [20] [i_23] [i_9] = var_4;
                }
                arr_79 [i_9] [i_14] [i_14] [i_20] &= var_3;
                var_41 &= var_0;
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    {
                        var_42 *= var_2;
                        arr_86 [i_9] [3] [0] [i_24] [i_25] [i_25] &= var_0;
                        var_43 = var_6;
                    }
                }
            }
            var_44 = (max(var_44, var_10));
            arr_87 [i_9] [i_14] = var_8;
        }
        var_45 = var_3;
        var_46 = var_9;
        var_47 ^= var_6;
        arr_88 [i_9] [i_9] = var_3;
    }
    /* vectorizable */
    for (int i_26 = 4; i_26 < 20;i_26 += 1)
    {
        var_48 = var_1;
        /* LoopNest 3 */
        for (int i_27 = 2; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 23;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 23;i_29 += 1)
                {
                    {
                        arr_99 [i_26 - 1] [i_26] = var_0;
                        var_49 = (max(var_49, var_3));
                    }
                }
            }
        }

        for (int i_30 = 1; i_30 < 22;i_30 += 1)
        {
            var_50 = (max(var_50, var_1));
            var_51 &= var_4;
            arr_103 [i_26] = var_1;

            for (int i_31 = 0; i_31 < 23;i_31 += 1)
            {
                arr_108 [8] [i_26] [13] [3] = var_4;
                var_52 = var_2;
            }
            var_53 = (max(var_53, var_7));
        }

        for (int i_32 = 1; i_32 < 22;i_32 += 1)
        {

            for (int i_33 = 2; i_33 < 20;i_33 += 1)
            {
                var_54 ^= var_7;
                var_55 = (max(var_55, var_0));
            }

            for (int i_34 = 2; i_34 < 21;i_34 += 1)
            {
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 23;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 23;i_36 += 1)
                    {
                        {
                            arr_124 [i_26] [11] [i_26] [10] = var_0;
                            var_56 = var_9;
                        }
                    }
                }

                for (int i_37 = 0; i_37 < 23;i_37 += 1)
                {
                    var_57 = var_0;
                    var_58 = (max(var_58, var_5));
                    arr_128 [i_34] [4] [i_34] [i_37] [0] |= var_0;
                }
            }
            arr_129 [i_26] = var_2;
            arr_130 [i_26] = var_0;
            var_59 = var_6;
        }

        for (int i_38 = 1; i_38 < 22;i_38 += 1) /* same iter space */
        {
            arr_133 [i_26] [i_38 + 1] = var_7;
            /* LoopNest 2 */
            for (int i_39 = 0; i_39 < 23;i_39 += 1)
            {
                for (int i_40 = 0; i_40 < 23;i_40 += 1)
                {
                    {
                        var_60 ^= var_6;
                        arr_140 [i_26] = var_6;
                        var_61 = (min(var_61, var_9));
                        var_62 -= var_6;
                    }
                }
            }
        }
        for (int i_41 = 1; i_41 < 22;i_41 += 1) /* same iter space */
        {

            for (int i_42 = 0; i_42 < 23;i_42 += 1)
            {
                var_63 = var_3;

                for (int i_43 = 0; i_43 < 23;i_43 += 1) /* same iter space */
                {
                    var_64 = var_5;
                    arr_147 [i_43] [i_26] [i_26] [i_43] &= var_5;
                }
                for (int i_44 = 0; i_44 < 23;i_44 += 1) /* same iter space */
                {
                    var_65 &= var_3;

                    for (int i_45 = 0; i_45 < 23;i_45 += 1)
                    {
                        var_66 = (max(var_66, var_6));
                        arr_152 [i_41] [i_41] [i_26] = var_8;
                        var_67 ^= var_6;
                        var_68 += var_9;
                        var_69 = var_7;
                    }
                }
                for (int i_46 = 0; i_46 < 23;i_46 += 1) /* same iter space */
                {
                    var_70 = var_10;
                    var_71 = (max(var_71, var_9));
                    arr_157 [i_26] = var_3;
                    var_72 &= var_2;
                    var_73 -= var_5;
                }
                for (int i_47 = 0; i_47 < 23;i_47 += 1)
                {
                    var_74 = (min(var_74, var_6));
                    arr_161 [i_41] [i_42] [i_26] = var_2;
                }
                var_75 -= var_6;
                /* LoopNest 2 */
                for (int i_48 = 0; i_48 < 23;i_48 += 1)
                {
                    for (int i_49 = 3; i_49 < 21;i_49 += 1)
                    {
                        {
                            var_76 ^= var_9;
                            arr_167 [i_26] [i_26] = var_3;
                            var_77 = (max(var_77, var_3));
                        }
                    }
                }
            }
            for (int i_50 = 0; i_50 < 23;i_50 += 1)
            {
                var_78 = (min(var_78, var_7));
                /* LoopNest 2 */
                for (int i_51 = 1; i_51 < 22;i_51 += 1)
                {
                    for (int i_52 = 1; i_52 < 20;i_52 += 1)
                    {
                        {
                            var_79 = var_4;
                            arr_175 [i_26] [i_26] [i_51] [i_51] = var_6;
                        }
                    }
                }
            }

            for (int i_53 = 0; i_53 < 23;i_53 += 1) /* same iter space */
            {
                var_80 = var_0;
                var_81 &= var_10;
                /* LoopNest 2 */
                for (int i_54 = 0; i_54 < 23;i_54 += 1)
                {
                    for (int i_55 = 0; i_55 < 23;i_55 += 1)
                    {
                        {
                            var_82 = var_5;
                            var_83 = (max(var_83, var_9));
                        }
                    }
                }
            }
            for (int i_56 = 0; i_56 < 23;i_56 += 1) /* same iter space */
            {
                var_84 ^= var_5;
                var_85 = var_8;
                var_86 = var_10;
                var_87 = (min(var_87, var_6));
            }
            arr_187 [i_26 + 2] [i_26] = var_3;
            /* LoopNest 3 */
            for (int i_57 = 0; i_57 < 23;i_57 += 1)
            {
                for (int i_58 = 0; i_58 < 23;i_58 += 1)
                {
                    for (int i_59 = 0; i_59 < 23;i_59 += 1)
                    {
                        {
                            arr_194 [i_26] = var_9;
                            var_88 = (max(var_88, var_3));
                            var_89 = (min(var_89, var_5));
                        }
                    }
                }
            }
        }
    }
    var_90 = var_10;
    var_91 = (min(var_7, ((max(var_5, (min(var_5, var_8)))))));
    var_92 ^= (min(var_2, var_10));
    var_93 = (max(var_93, ((min(var_6, (max((max(var_8, var_7)), var_9)))))));
    #pragma endscop
}
