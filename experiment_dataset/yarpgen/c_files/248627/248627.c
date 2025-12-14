/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 -= var_8;
        arr_2 [i_0 - 1] [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_8;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_14 = var_6;
                        arr_13 [i_2] [i_2] [i_2] [i_2] &= var_11;
                        var_15 = (arr_3 [i_1] [i_3]);
                    }
                }
            }
            var_16 -= var_12;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_17 = (min(var_17, var_1));

                for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, var_7));
                    var_19 ^= (arr_17 [i_5] [i_5]);
                }
                for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
                {
                    var_20 ^= (arr_22 [i_8 + 2] [i_8] [i_5] [i_8] [i_1]);
                    var_21 = var_7;
                    arr_25 [i_8] [i_6] [i_5] [i_5] [i_1] = var_3;
                }
                var_22 = var_5;
            }
            var_23 += var_11;
            arr_26 [i_1] [i_1] [i_5] = var_0;
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                {
                    arr_31 [i_1] [i_9] [i_1] [i_1] = max(1, 128);
                    var_24 = var_2;
                    arr_32 [i_9] [i_9] [i_10 - 2] = var_12;
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_25 = (min(var_25, var_11));
        var_26 = var_12;
    }

    /* vectorizable */
    for (int i_12 = 4; i_12 < 9;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            var_27 = var_10;
            var_28 = -1830651829;
            arr_42 [7] [i_12] [i_12 - 1] = 1906321619;
            arr_43 [i_13] [i_12] [i_12 - 1] = ((arr_1 [i_12]) || var_5);

            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                var_29 = (max(var_29, var_10));
                arr_48 [i_12] [i_12] [0] [8] = var_1;
                var_30 = (((0 || 919807814) <= var_2));
            }
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_31 -= -2;
            var_32 -= (((-39 + 2147483647) << (((-1 + 11) - 10))));
            var_33 = -4156;
        }
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    {
                        arr_60 [i_12 - 2] [8] [i_16] [i_12] = var_10;
                        var_34 = 1408653016;
                        arr_61 [2] &= var_10;
                        arr_62 [i_12] [i_12] [i_12] [12] [i_12] [10] &= var_4;

                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            arr_65 [i_12] [i_12] = var_10;
                            arr_66 [i_12 - 4] [i_12 - 4] [i_17 + 1] [i_19] [i_19] |= var_10;
                            arr_67 [i_12] [i_16] [i_17] [i_19] = var_2;
                            var_35 = (arr_64 [i_12] [i_12] [i_16] [i_17] [i_18 + 1] [i_19]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        var_36 = (min(var_36, var_3));
                        arr_72 [i_12 - 3] [i_12 - 3] [i_12 - 3] [i_20] [6] [i_21] |= (-32767 - 1);
                        var_37 = (min(var_37, var_0));
                        arr_73 [i_12] [i_12] [i_12] = (1495259515 % 111938293);
                    }
                }
            }
            arr_74 [i_12] [i_12] [i_12] = (arr_51 [i_12] [i_12] [9]);
        }
        arr_75 [i_12] = var_2;
        var_38 = var_5;
        var_39 = -114;
    }
    for (int i_22 = 4; i_22 < 9;i_22 += 1) /* same iter space */
    {
        var_40 = 134;
        var_41 = (min(var_41, var_1));

        for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 11;i_25 += 1)
                {
                    {
                        arr_86 [i_23] [i_23] [i_23] [i_24] [i_24] [i_23] = (min((max(var_12, var_3)), var_10));

                        for (int i_26 = 0; i_26 < 13;i_26 += 1)
                        {
                            var_42 &= var_12;
                            var_43 = (max(var_43, var_2));
                        }
                        for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
                        {
                            var_44 = (max(var_44, var_3));
                            arr_91 [i_23] [i_23] [i_23] [12] [i_23] = max((arr_36 [i_25] [16]), 3543881782276011006);
                        }
                        for (int i_28 = 0; i_28 < 13;i_28 += 1) /* same iter space */
                        {
                            arr_95 [i_22 + 4] [3] [i_23] [i_22 + 4] [i_28] = (arr_83 [i_22] [i_23] [i_25] [i_22]);
                            arr_96 [i_22 + 4] [i_24] [5] [i_25] [i_23] = (arr_57 [i_24]);
                            var_45 -= var_9;
                            arr_97 [i_22] [i_28] [i_24] [i_23] [i_22] = (-127 - 1);
                        }
                        for (int i_29 = 0; i_29 < 13;i_29 += 1)
                        {
                            var_46 ^= var_6;
                            var_47 = (max(var_47, (arr_93 [i_29] [i_25] [i_24] [i_23] [1])));
                            var_48 ^= var_11;
                            var_49 = (arr_71 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]);
                        }
                    }
                }
            }

            for (int i_30 = 4; i_30 < 10;i_30 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_31 = 0; i_31 < 13;i_31 += 1)
                {
                    var_50 = var_7;
                    var_51 = var_12;
                    var_52 = (min(var_52, var_11));
                }
                var_53 &= var_9;
            }
            for (int i_32 = 4; i_32 < 10;i_32 += 1) /* same iter space */
            {
                var_54 = (max(var_54, 16));
                arr_108 [i_23] = var_11;
            }
            /* vectorizable */
            for (int i_33 = 3; i_33 < 12;i_33 += 1)
            {
                arr_112 [i_23] [i_33] = var_4;
                var_55 = var_6;
                var_56 = var_3;
                var_57 = arr_1 [i_22];
            }
            for (int i_34 = 0; i_34 < 1;i_34 += 1)
            {
                var_58 = (min(var_58, var_2));
                arr_115 [i_23] = var_1;
            }
            /* LoopNest 2 */
            for (int i_35 = 0; i_35 < 13;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 13;i_36 += 1)
                {
                    {
                        var_59 = var_9;
                        arr_123 [i_22 + 4] [i_23] [i_23] [10] [3] = ((var_12 / (var_3 != var_2)));

                        for (int i_37 = 0; i_37 < 13;i_37 += 1)
                        {
                            arr_127 [i_22] [i_23] [i_35] [i_36] [i_37] = (arr_40 [i_23]);
                            var_60 = var_8;
                        }
                        for (int i_38 = 0; i_38 < 13;i_38 += 1)
                        {
                            var_61 *= var_3;
                            arr_132 [i_22] [i_38] [i_35] [i_23] = (var_4 ^ var_5);
                            var_62 = (min(var_62, var_1));
                            var_63 = (arr_80 [i_36] [i_23]);
                        }
                        for (int i_39 = 0; i_39 < 13;i_39 += 1)
                        {
                            var_64 = 3;
                            var_65 = var_10;
                        }
                        for (int i_40 = 0; i_40 < 13;i_40 += 1)
                        {
                            var_66 = (min(var_3, var_3));
                            arr_138 [i_22] [1] [i_35] [i_23] [i_40] = -1;
                            var_67 = var_3;
                        }
                    }
                }
            }
            var_68 = (min(var_68, var_3));
        }
        for (int i_41 = 0; i_41 < 13;i_41 += 1) /* same iter space */
        {
            var_69 = -28;
            var_70 = (arr_101 [i_22]);
            /* LoopNest 2 */
            for (int i_42 = 1; i_42 < 10;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 13;i_43 += 1)
                {
                    {
                        arr_147 [i_43] [i_43] = (max(var_6, var_5));
                        var_71 &= var_2;
                    }
                }
            }
        }
    }
    for (int i_44 = 4; i_44 < 9;i_44 += 1) /* same iter space */
    {
        var_72 = var_10;
        var_73 ^= (((arr_80 [i_44 + 3] [i_44]) ^ var_5));

        for (int i_45 = 0; i_45 < 13;i_45 += 1)
        {
            arr_152 [2] [i_45] [2] = var_2;
            var_74 |= (((17298 + 4293918720) & var_8));
        }
    }
    for (int i_46 = 4; i_46 < 9;i_46 += 1) /* same iter space */
    {

        for (int i_47 = 1; i_47 < 12;i_47 += 1)
        {
            var_75 = (min(var_75, var_8));

            /* vectorizable */
            for (int i_48 = 3; i_48 < 10;i_48 += 1)
            {
                var_76 = var_6;
                /* LoopNest 2 */
                for (int i_49 = 0; i_49 < 13;i_49 += 1)
                {
                    for (int i_50 = 4; i_50 < 11;i_50 += 1)
                    {
                        {
                            var_77 = (max(var_77, var_0));
                            arr_166 [i_47] [i_47] [i_50] [12] [12] = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_51 = 1; i_51 < 12;i_51 += 1)
                {
                    for (int i_52 = 4; i_52 < 12;i_52 += 1)
                    {
                        {
                            var_78 = var_3;
                            var_79 = 13028753103127535436;
                            arr_175 [i_46 + 1] [i_46 + 1] [i_47] = var_10;
                            var_80 = 254;
                        }
                    }
                }
            }
            for (int i_53 = 1; i_53 < 11;i_53 += 1)
            {
                var_81 = 100;
                arr_178 [i_46] [11] [i_47] [i_46] = var_0;
                var_82 = var_2;
            }
            for (int i_54 = 0; i_54 < 13;i_54 += 1) /* same iter space */
            {
                arr_181 [i_46] [i_46] [i_46] [i_47] = (254 + var_5);
                arr_182 [i_46] [i_47 + 1] [i_47] = (arr_143 [i_54]);
                var_83 = (var_3 % var_12);
            }
            /* vectorizable */
            for (int i_55 = 0; i_55 < 13;i_55 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_56 = 0; i_56 < 13;i_56 += 1)
                {
                    for (int i_57 = 0; i_57 < 13;i_57 += 1)
                    {
                        {
                            var_84 = var_10;
                            var_85 = var_8;
                        }
                    }
                }
                arr_189 [i_47] [i_47 + 1] = var_5;
                arr_190 [i_46] [i_47] [i_47] [i_47] = (((-17 % 18446744073709551615) % var_10));
            }
            var_86 = var_1;
        }
        var_87 ^= var_11;
        var_88 = var_4;
        arr_191 [i_46] = var_10;
    }
    var_89 = var_9;
    #pragma endscop
}
