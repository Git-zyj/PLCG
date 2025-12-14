/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = (min(var_11, 3590183753));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        var_12 = 21293;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_13 = var_0;
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                            var_14 = (~-2147483645);
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = var_8;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_15 = (1 && var_4);
                            var_16 = 9223372036854775807;
                            var_17 = (~7);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_18 = 1;
                            var_19 = (max(var_19, var_4));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_20 -= (!1);
                            var_21 = (!1);
                            arr_27 [i_3] [i_3] [i_2] [i_0] [i_1] [i_1] [i_3] = 1;
                            var_22 = (max(var_22, (1 % 3923)));
                        }
                        arr_28 [i_0] = (~var_4);

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_31 [i_8] [i_1] [i_8] [i_3] [i_8] = -15638;
                            arr_32 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_8] = 78;
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_36 [i_0] [i_9] [i_9] = ((!(~var_4)));
            var_23 = (!143);
            var_24 = (max(var_24, (!-73)));
            var_25 = (min(var_25, 1));
        }
    }

    for (int i_10 = 1; i_10 < 14;i_10 += 1)
    {
        arr_39 [i_10] = 1;

        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            var_26 = (1 != 0);
            var_27 += ((((var_10 * 1) ? 12941 : (var_2 + -18017))));
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            arr_46 [i_10] [i_10] = (min(((109 ? -1980945585 : 138)), (1 - 112)));
            var_28 &= (((!65530) <= (!0)));
            var_29 = ((((!(var_5 <= var_8)))));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_49 [i_10] [i_10] [i_13] = 1;

            for (int i_14 = 2; i_14 < 13;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    var_30 = (min((!var_10), ((18015 | (!1)))));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_31 = 235;
                        var_32 = var_8;
                        var_33 = (max(var_33, 223));
                        var_34 = 1;
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_63 [i_10 + 1] [i_17] [i_10 + 1] [i_17] = (!1506861391);
                        arr_64 [i_10 + 2] [i_17] [i_10] [6] [6] [i_10] = (min(-6997, (~1)));
                        var_35 = 2064509122;
                        var_36 = (9 + -32757);
                        arr_65 [i_10] [i_10] [i_17] [i_17] = (~(var_6 ^ var_4));
                    }
                    var_37 = (~-32734);
                }
                var_38 = 1;
                arr_66 [i_14 + 2] [i_13] = (((((var_4 ? var_8 : 1)))) * 0);
                var_39 = var_6;
                var_40 = (((((max(3042603063536261918, 65526))) ? (1 % 1) : (~127))));
            }
            /* vectorizable */
            for (int i_18 = 2; i_18 < 13;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_41 = 65521;
                    var_42 = (min(var_42, -6));
                    var_43 |= -32714;
                }
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    arr_73 [i_10] [i_13] [i_18] [i_20] = (!28062);
                    var_44 = -28058;
                    arr_74 [i_20] [i_18] [13] [i_10] = (1 >> 21814);
                }
                var_45 = (var_7 & var_9);
            }
            var_46 += min((max(-6102978769022407885, 1)), var_9);

            for (int i_21 = 2; i_21 < 15;i_21 += 1) /* same iter space */
            {

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    arr_80 [i_13] = (min(66, 190));
                    var_47 |= (((min(338618512771715335, 1)) >> var_1));
                }
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    var_48 = (min(var_48, var_2));
                    arr_83 [i_23] [i_13] [i_21 + 1] [i_23] [16] [i_10] = (~9535169938036647710);

                    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                    {
                        arr_86 [i_24] [i_23] [i_23] [i_13] [i_10] = (!var_9);
                        var_49 = 0;
                        var_50 = ((((max(19528, (~0)))) && var_2));
                        var_51 -= 91;
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                    {
                        arr_89 [i_23] [i_23] [i_25] = (((var_6 <= var_4) > 1));
                        var_52 = -211297490;
                        arr_90 [i_21] [i_23] [i_21] [i_23] [i_10] = var_7;
                    }
                    arr_91 [i_23] [i_13] [i_23] = (2285 < 1);
                    var_53 += ((~((-(max(-32725, 3602966926))))));
                }
                arr_92 [i_10] [i_10] [i_10] [i_21] = (((((-var_6 ^ ((min(var_10, -3)))))) && var_2));
            }
            for (int i_26 = 2; i_26 < 15;i_26 += 1) /* same iter space */
            {
                var_54 = (min(var_54, ((((~34276) ? -1 : 0)))));
                arr_96 [i_26] [i_13] = (min(var_10, ((var_2 ? 13697 : -28058))));
                arr_97 [13] [i_10] = (var_5 < 31239);
                var_55 = ((((((min(8054438951516624008, 1))) && (481036337152 > 31259)))) > -32714);
            }

            for (int i_27 = 4; i_27 < 15;i_27 += 1) /* same iter space */
            {
                var_56 = -420409973;
                arr_101 [i_10] [i_13] [i_13] = (var_5 > var_7);
                arr_102 [i_27] [i_13] [i_10] = 1;
            }
            for (int i_28 = 4; i_28 < 15;i_28 += 1) /* same iter space */
            {
                var_57 = (min(var_57, (1 - 19528)));

                for (int i_29 = 0; i_29 < 17;i_29 += 1) /* same iter space */
                {
                    arr_110 [i_10] [i_13] [i_10] [i_29] [i_29] = var_9;
                    var_58 = (max(var_58, 65));
                    arr_111 [i_10] [i_13] [i_13] [6] [i_28] [i_29] = (-2147483647 - 1);
                }
                /* vectorizable */
                for (int i_30 = 0; i_30 < 17;i_30 += 1) /* same iter space */
                {
                    arr_114 [i_10 + 3] [i_10 + 1] [i_10 + 1] [12] [i_13] [i_30] &= var_10;
                    var_59 = 0;
                }
            }
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                arr_117 [i_31] [i_13] [i_13] [i_31] = (max(2064509122, 18446743592673214463));
                arr_118 [i_10] [i_31] [i_31] [i_13] = (max((((219 ? 4294967295 : 31259))), (((((18446744073709551615 ? -1 : 1))) ? (1405922445 - 481036337146) : var_8))));
                arr_119 [i_10] [i_10] [i_31] [i_31] = (min(481036337145, -238590679));
            }
        }
        arr_120 [16] = var_10;
        arr_121 [i_10] |= 0;
    }
    var_60 = (!(!3313046959));
    var_61 = (((!(~18446744073709551615))));
    var_62 |= ((1528559635 ? 0 : -3615));
    #pragma endscop
}
