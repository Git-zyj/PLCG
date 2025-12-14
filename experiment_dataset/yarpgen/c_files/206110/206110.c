/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_11 += (!127);
            var_12 = (min(var_8, (max(0, 15062894203890816403))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_13 += (arr_6 [6] [i_2] [i_2]);
                var_14 = var_6;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((min(-121, (arr_3 [i_1 - 2] [i_2]))))));
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_1] = var_6;
                            var_16 = ((arr_0 [i_4]) ? 1 : -4092479857238023233);
                            arr_17 [i_0] [i_1] [i_4] [i_2] [i_2] [i_1] [i_0] = var_4;
                        }
                    }
                }
                arr_18 [i_0] [i_1] = (max(215, 11430234730440604498));

                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    var_17 = min(((((max(var_6, var_1))) ? (max(var_5, 18)) : 709517358)), ((min(129, (arr_4 [i_0] [i_0])))));
                    arr_21 [7] [i_1] [i_2] [i_5] = (min((arr_1 [i_1 - 3]), (!var_10)));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_18 ^= var_9;
                    var_19 = (((((1 ? 129 : 23))) ? (((((((var_7 == (arr_25 [i_0])))) > var_10)))) : ((((min(3, var_7))) ? 1023 : var_5))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_2] [i_1] [0] = (((min(1, 1)) ? var_9 : (max((arr_3 [i_1] [i_1]), var_10))));
                        var_20 ^= 215;
                    }
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        arr_32 [i_1] [i_2] = var_0;
                        arr_33 [1] [i_2] [1] [i_1] [i_2] [i_2] [i_2] = (((arr_27 [i_1 - 2] [1] [i_1 - 2] [16] [i_1]) ? 127 : (!18)));
                        arr_34 [i_0] [1] [i_1] [i_1] [i_6] [i_8 + 4] = var_6;
                        var_21 += 1;
                        var_22 = (1 ? 0 : 917397777006849976);
                    }
                }
            }
        }
        arr_35 [i_0] [i_0] = (min((min(3383849869818735212, (min(121, var_7)))), var_2));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_39 [i_0] [i_0] [i_9] = (min(((max(var_10, 12))), var_6));
            arr_40 [i_9] [i_9] [i_9] = (max((max((max(var_7, (arr_7 [i_0] [i_9]))), (arr_5 [i_0] [i_0]))), (arr_31 [i_9] [i_9] [i_9] [16] [i_9])));

            /* vectorizable */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        var_23 ^= (((arr_31 [i_12 + 2] [i_9] [i_10 - 1] [1] [4]) ? 255 : (arr_31 [i_12 + 1] [i_11] [i_10 - 1] [i_11] [i_12 + 1])));
                        var_24 = (!var_1);
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_25 = (max(var_25, -3669855877748669909));
                        arr_51 [i_0] [i_9] [i_10] [i_11] [i_9] = var_9;
                        arr_52 [i_9] [9] [i_9] [i_9] = var_4;
                        var_26 = var_7;
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        var_27 = var_0;
                        var_28 = ((~(arr_53 [12] [i_9] [7] [i_10 - 1] [1] [i_0])));
                        arr_57 [i_9] [i_11] [i_9] = (var_4 % var_6);
                        arr_58 [i_0] [i_9] [i_10] [i_11] [i_9] = var_10;
                    }
                    arr_59 [i_9] = var_0;
                    arr_60 [i_0] [i_0] [0] [i_10] [i_9] = ((-(arr_8 [i_10] [i_10 - 1] [i_10 - 1] [i_9])));

                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        var_29 = var_6;
                        arr_65 [i_9] [i_9] [1] [i_11] [i_15] = ((237 ? -1421043145007878731 : 1));
                    }
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                {
                    var_30 ^= ((211 ? 25 : ((1 ? (arr_36 [1]) : var_3))));

                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        arr_71 [i_0] [i_9] [10] [8] [i_0] = 230;
                        var_31 = ((0 << (var_1 + 822288927804986206)));
                        var_32 = 18;
                        arr_72 [i_0] [i_9] [i_0] [i_16] [i_17] [i_9] = ((arr_63 [i_10 - 1] [i_9] [i_10 - 1]) ? var_1 : (arr_67 [i_10 - 1] [i_9] [i_10] [i_9]));
                    }
                    var_33 = ((1 ? (arr_45 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]) : (var_7 * 1)));
                    var_34 = var_6;
                }
                arr_73 [i_0] [i_0] [i_0] [i_9] = var_2;
            }
        }
        for (int i_18 = 1; i_18 < 16;i_18 += 1)
        {
            var_35 = (((arr_64 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])));

            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                var_36 = (min(var_36, ((!(((~(min(var_1, (arr_10 [i_0] [1]))))))))));
                arr_80 [i_18 + 1] [i_19] = 1;
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {

                for (int i_21 = 1; i_21 < 1;i_21 += 1)
                {
                    arr_86 [12] [i_18] [i_18] [i_21] = (arr_25 [i_18 + 1]);
                    var_37 = (min(var_37, -3472259871185347186));
                    arr_87 [i_0] [i_0] [6] [16] [i_20] [i_21 - 1] = var_2;

                    for (int i_22 = 0; i_22 < 0;i_22 += 1) /* same iter space */
                    {
                        var_38 = (max(var_38, (~var_5)));
                        var_39 = -var_0;
                        arr_92 [i_0] [i_0] = var_6;
                        arr_93 [2] [1] [1] [i_21 - 1] [i_22] = (arr_91 [i_22 + 1] [i_21] [i_20] [i_18] [13]);
                        var_40 = ((var_2 ? var_8 : var_9));
                    }
                    for (int i_23 = 0; i_23 < 0;i_23 += 1) /* same iter space */
                    {
                        var_41 = (!var_3);
                        var_42 = ((var_10 ? var_7 : (!var_4)));
                    }
                }
                var_43 = 1033254193;
            }
            var_44 = var_1;
        }

        /* vectorizable */
        for (int i_24 = 1; i_24 < 13;i_24 += 1)
        {
            var_45 *= ((~(arr_8 [i_24 - 1] [i_24] [i_24 + 4] [i_0])));
            arr_99 [7] [i_24] [i_24 - 1] = ((var_9 ? (arr_23 [i_24] [i_24] [i_24] [i_24 + 3] [i_24]) : var_0));
            arr_100 [i_24] = 3669855877748669909;
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 17;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 17;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 17;i_27 += 1)
                {
                    {

                        for (int i_28 = 0; i_28 < 17;i_28 += 1)
                        {
                            var_46 ^= ((~(-9223372036854775807 - 1)));
                            var_47 |= (arr_53 [0] [15] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_29 = 0; i_29 < 17;i_29 += 1)
                        {
                            var_48 = (((arr_44 [i_0] [i_25] [9]) ? 0 : 126));
                            var_49 = (max(var_49, var_3));
                            var_50 = 61;
                            var_51 = 250;
                            var_52 = (max(var_52, var_3));
                        }
                        for (int i_30 = 0; i_30 < 17;i_30 += 1)
                        {
                            arr_119 [i_26] = ((var_2 ? var_4 : (arr_70 [i_0] [i_0] [i_0] [i_27] [i_30])));
                            arr_120 [16] [i_25] [i_25] [1] [i_26] = (arr_42 [i_0] [i_0] [i_26] [i_0]);
                            arr_121 [6] [i_26] [i_30] = 1;
                        }
                        for (int i_31 = 0; i_31 < 17;i_31 += 1)
                        {
                            arr_125 [i_0] [i_25] [i_26] [i_27] [i_31] = 9223372036854775807;
                            var_53 ^= var_10;
                        }
                        arr_126 [i_26] [i_26] [7] [i_27] = arr_112 [i_0] [i_26] [i_26] [i_27] [i_26];
                    }
                }
            }
            var_54 = (min(var_54, (!var_9)));
        }
        /* vectorizable */
        for (int i_32 = 0; i_32 < 17;i_32 += 1) /* same iter space */
        {

            for (int i_33 = 0; i_33 < 17;i_33 += 1)
            {
                var_55 = (max(var_55, (arr_0 [i_32])));
                arr_132 [i_33] [i_33] [i_33] [i_33] = 1;
            }
            var_56 = (var_9 % (arr_115 [i_0] [i_0] [i_32]));
        }
        for (int i_34 = 0; i_34 < 17;i_34 += 1) /* same iter space */
        {
            arr_135 [i_0] [i_0] [12] = var_4;

            for (int i_35 = 2; i_35 < 13;i_35 += 1)
            {

                for (int i_36 = 3; i_36 < 16;i_36 += 1)
                {
                    arr_142 [1] [i_34] [i_34] [1] [i_34] = ((var_2 ? var_5 : (!1)));
                    arr_143 [i_0] [i_34] [i_34] [i_36] = (!3406902849740886685);
                    var_57 = (((min(var_10, var_9)) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : (((arr_94 [i_35] [i_36] [i_36] [i_36 + 1] [i_36 + 1] [i_36]) ? (arr_20 [i_34] [i_35] [i_34] [i_36 + 1]) : var_7))));
                }
                for (int i_37 = 0; i_37 < 17;i_37 += 1) /* same iter space */
                {
                    arr_147 [i_0] [i_0] [13] [i_0] [13] = (max((min((arr_130 [0] [i_37]), (arr_130 [i_34] [i_37]))), (min((arr_130 [i_0] [i_37]), var_0))));
                    arr_148 [i_0] [i_34] [i_35] [i_35] &= (((((-((236 ? var_9 : 1))))) ? (max(3669855877748669909, 3305049372)) : var_9));
                    var_58 = (!var_1);
                    arr_149 [i_0] [i_34] [i_35] [i_37] = (arr_122 [i_0] [i_0] [i_0] [i_0] [i_37]);
                }
                for (int i_38 = 0; i_38 < 17;i_38 += 1) /* same iter space */
                {
                    var_59 = (max(var_59, var_6));
                    var_60 = (max(var_60, ((((((var_5 ? (min((arr_94 [i_0] [1] [15] [2] [i_35] [11]), var_7)) : 3669855877748669885))) ? var_4 : (max(var_0, var_5)))))));
                }
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 17;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 1;i_40 += 1)
                    {
                        {
                            arr_159 [8] [3] [i_35] [i_39] [i_39] [i_40] = 18092575886946851227;
                            var_61 = var_9;
                            arr_160 [i_40] [i_40] [i_39] [i_35] [i_39] [i_34] [i_0] = var_4;
                            var_62 = (min(((min(var_7, var_6))), (arr_10 [1] [i_39])));
                        }
                    }
                }
                var_63 |= var_6;
            }
            /* vectorizable */
            for (int i_41 = 0; i_41 < 1;i_41 += 1)
            {
                /* LoopNest 2 */
                for (int i_42 = 1; i_42 < 16;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 17;i_43 += 1)
                    {
                        {
                            var_64 ^= (((1033254201 * var_9) ? (arr_54 [i_42 + 1] [i_34] [i_42 + 1] [i_42 + 1]) : 5996655967641932327));
                            var_65 ^= var_6;
                            var_66 = (min(var_66, var_9));
                        }
                    }
                }
                arr_167 [i_0] [i_34] [i_41] = (arr_104 [7] [i_34] [i_34]);
                arr_168 [i_0] [i_34] [13] = -1;
            }
            /* vectorizable */
            for (int i_44 = 2; i_44 < 14;i_44 += 1)
            {
                var_67 = (max(var_67, var_10));
                arr_173 [i_0] [i_34] [i_44] = 3407879614265229731;
                arr_174 [i_44 + 1] [i_34] [i_0] = 18446744073709551615;
                var_68 = (min(var_68, var_7));
            }
        }
        arr_175 [1] = (((arr_137 [i_0] [16] [1]) ? (!1) : 2245658614));
    }
    for (int i_45 = 0; i_45 < 17;i_45 += 1) /* same iter space */
    {
        var_69 = 3261713102;
        var_70 ^= var_9;
    }
    var_71 = 854009515;
    #pragma endscop
}
