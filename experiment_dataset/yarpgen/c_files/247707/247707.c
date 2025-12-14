/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((34159 ? 2147483647 : (~44792))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 &= 20632;
                        var_22 -= 2147483639;
                        arr_12 [i_1] |= (((~-2147483647) ? (((2147483647 ? 1 : -2134))) : ((((max(1, 220))) ? (~62) : 7835765920819365442))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    {
                        var_23 *= (min(1, ((var_7 << (117 - 116)))));
                        var_24 = ((~(min((~var_16), ((min(0, (arr_0 [i_4] [i_4]))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [2] [i_6] [i_7] [i_7] = ((((((((arr_8 [1] [i_6] [i_7]) ? 29 : 65535)) >> 0))) ? 2147483647 : (((min(-1, 1))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = (max(var_25, -8734628258078202412));
                            var_26 *= (18968 >= 127);
                        }
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            var_27 = (max(var_27, var_19));
                            var_28 = (arr_7 [i_0] [i_0]);
                            var_29 = (~((-(!-9))));
                            var_30 = ((((((var_15 > 35933) + (arr_22 [i_0] [i_1] [i_6] [i_7])))) ? 1 : (~var_0)));
                            arr_30 [i_0] [i_6] [i_6] [i_6] [1] [i_9] |= 1;
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_31 = (~1);
                            var_32 |= ((-(~43382)));
                            arr_35 [i_0] [i_0] [i_10] = (17738272295691742359 / -8734628258078202393);
                        }
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_0] [i_11] = (~32767);
                            var_33 = 8734628258078202390;
                        }
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = 0;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            arr_45 [i_0] = (var_13 - 2147483647);
            var_34 = (min(var_34, 3597632358));
            var_35 = (min(var_35, -713902620));
        }
        var_36 = var_7;
        var_37 = (min(var_37, 132));
        arr_46 [1] |= 1;
    }
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    arr_56 [i_13] [i_13] [i_13] = 126;
                    arr_57 [i_15] [i_13] [i_13] [i_15] = var_8;
                    var_38 = var_18;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                {
                    arr_65 [i_13] [i_16] [i_13] [i_13] = ((~(((arr_59 [i_13] [i_13 + 2] [i_13]) | (arr_48 [i_13 + 2] [i_16])))));
                    var_39 = (min(32767, 0));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 20;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    {
                        var_40 = ((49621 ? 30 : -815580593057607910));
                        arr_78 [i_20] = ((-32768 ? (~10190507131603864771) : (((27603 ? (arr_68 [i_21]) : -32748)))));
                        var_41 = 9223372036854775807;
                        arr_79 [i_20] [i_20] [15] [i_20] = 0;
                        arr_80 [i_18] [i_20] = (~-713259133359299045);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 19;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_42 = ((32767 ? (arr_87 [i_18] [i_18] [i_19] [i_22 + 2] [i_23] [i_24] [i_24]) : 32771));
                            var_43 = (-35 * var_17);
                            arr_88 [i_22] = ((var_0 ? (var_3 - 0) : (~var_15)));
                        }
                    }
                }
            }
            var_44 = (1 == 0);
            var_45 = (min(var_45, 32770));
            /* LoopNest 3 */
            for (int i_25 = 2; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 22;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 19;i_27 += 1)
                    {
                        {
                            var_46 = -32766;
                            var_47 = var_0;
                        }
                    }
                }
            }
        }

        for (int i_28 = 3; i_28 < 21;i_28 += 1)
        {
            var_48 = (arr_71 [i_18] [i_28] [i_18]);

            for (int i_29 = 1; i_29 < 18;i_29 += 1)
            {
                arr_101 [i_18] [i_28] [i_18] [i_18] = -60;
                arr_102 [i_28] [1] [0] [i_18] = 419151544463722473;
            }
            for (int i_30 = 1; i_30 < 21;i_30 += 1)
            {
                arr_107 [i_28] [i_30] = 710799885;
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 22;i_31 += 1)
                {
                    for (int i_32 = 2; i_32 < 21;i_32 += 1)
                    {
                        {
                            arr_112 [i_18] [i_28] [i_28] [i_31] [i_32] = 32764;
                            var_49 -= 32771;
                            var_50 = var_1;
                            var_51 = var_0;
                        }
                    }
                }
            }
            var_52 = 32756;
            var_53 = (max(var_53, 75));
        }
        var_54 += ((6737 || (arr_60 [i_18 + 1])));
    }
    var_55 |= 32770;
    var_56 = var_14;
    #pragma endscop
}
