/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= var_14;
        var_15 = (max(var_15, ((((((((4036476124285188867 ? 0 : 12670643283813341892))))) + ((-11 ? (~18446744073709551615) : -1035814326158128802)))))));
        var_16 = (max(var_16, (~0)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] = (min(((!(arr_0 [i_0 + 1]))), ((!(arr_0 [i_0])))));
            arr_6 [i_1] [10] [i_0] |= (1 | 10);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (max(var_17, (arr_1 [i_0 + 3])));

            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                var_18 = 12799102536413318694;
                var_19 = (arr_4 [i_2]);

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_14 [i_0] [i_2] [i_2] [i_4] = 1;
                    var_20 *= (arr_7 [0] [0]);

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_0 - 1] [i_2] [i_2] [1] [i_5] [i_3] = (var_1 ? (arr_13 [i_0 - 2] [1] [i_0] [i_0]) : (arr_12 [i_0 - 2] [i_0 - 2]));
                        arr_18 [i_2] [i_4] [1] [i_2] = (arr_4 [i_2]);
                        var_21 = (max(var_21, -5776100789896209714));
                    }
                    arr_19 [i_4] [i_2] [10] = -18;
                    var_22 = (arr_3 [0] [i_0 + 3] [i_3]);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_23 = (min(var_23, (((!((((arr_10 [i_0] [10] [i_3]) | 25837))))))));
                    var_24 = (min(var_24, (0 / -18)));
                    var_25 = 1;
                }
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (((var_3 ? var_4 : (((arr_12 [i_7] [i_8]) << (5776100789896209713 - 5776100789896209707))))))));

                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        arr_29 [10] [i_2] [i_2] [i_8] [10] = (((((var_6 + (arr_26 [i_0 - 2])))) ? (arr_15 [i_0] [i_8 + 1] [i_7] [i_2]) : (((arr_22 [i_2]) / 6624610902624354922))));
                        var_27 = (arr_20 [i_0] [i_2] [i_0] [i_2] [i_9]);
                        var_28 = (((arr_23 [i_2] [i_2] [i_7]) ? ((1 ? var_1 : (arr_22 [i_2]))) : (((arr_13 [9] [i_2] [i_7] [9]) ? 1934511145 : (arr_23 [i_2] [8] [i_2])))));
                    }
                }
                for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_29 = -0;
                    var_30 -= var_8;
                    var_31 = (arr_9 [i_10 - 2] [i_10 - 2]);
                }
                var_32 = 3604270455;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_33 = var_11;
                var_34 = ((1035814326158128812 ? 1671732413 : (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1])));
            }

            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_35 -= (!var_2);
                var_36 = (((arr_10 [i_0] [i_2] [i_0 + 1]) ? (arr_10 [1] [i_2] [i_0 + 1]) : (arr_10 [4] [i_2] [i_0 + 1])));
                var_37 = 1167;
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                var_38 *= (12670643283813341884 * 856961894);
                var_39 *= var_6;

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_40 = (max(var_40, (((arr_10 [i_0 + 2] [0] [i_0 + 2]) > (arr_10 [i_0 - 2] [8] [i_0 - 1])))));
                    var_41 = var_2;

                    for (int i_15 = 1; i_15 < 8;i_15 += 1) /* same iter space */
                    {
                        var_42 = (min(var_42, var_10));
                        var_43 = (min(var_43, (((-var_9 ? -10 : -1035814326158128802)))));
                        var_44 = var_1;
                        arr_47 [i_0] [i_2] [i_13] [i_14] [i_15] = (-23 && 12670643283813341884);
                        arr_48 [i_2] [i_2] = var_0;
                    }
                    for (int i_16 = 1; i_16 < 8;i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_0] [i_2] [i_13] [i_2] [i_16] [i_2] = (((arr_37 [i_0 + 3] [i_2] [i_16 + 3]) + var_0));
                        var_45 = -1;
                    }
                    for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
                    {
                        var_46 = (min(var_46, (((~(arr_39 [i_0 - 1]))))));
                        arr_56 [i_17] [i_14] [i_2] [i_2] [i_2] [i_0] [i_0] = ((34033 ? (~var_13) : (-28 > var_2)));
                        var_47 = (max(var_47, ((((var_9 ? var_3 : 1))))));
                        var_48 = (min(var_48, var_12));
                    }
                }
                for (int i_18 = 1; i_18 < 1;i_18 += 1)
                {
                    var_49 = (min(var_49, (-7105214023097725477 | 32767)));

                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_50 = (max(var_50, (((-var_14 ? ((0 ? (arr_1 [i_0]) : var_9)) : var_14)))));
                        var_51 = (min(var_51, (!14336)));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        arr_66 [i_2] [i_2] [i_2] [i_0] [i_20] [i_2] [i_13] = (arr_30 [i_0] [7] [i_2] [i_18]);
                        var_52 = ((-(arr_57 [i_18 - 1])));
                        var_53 ^= ((-279 ? 1071644672 : 1));
                    }
                }
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 11;i_22 += 1) /* same iter space */
                    {
                        var_54 &= (arr_1 [i_0 - 2]);
                        var_55 = (min(var_55, (var_1 + 0)));
                    }
                    for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
                    {
                        arr_76 [i_0] [i_0] [i_2] [i_21] [i_23] = (((((var_14 + (arr_34 [i_13] [i_2])))) ? (1 + 1) : (-1035814326158128802 * var_11)));
                        var_56 = ((var_1 ? 13585 : (arr_27 [i_0])));
                        var_57 = (max(var_57, ((((arr_70 [i_0 + 3] [2] [i_13] [i_21]) > -10)))));
                    }
                    for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
                    {
                        var_58 = (min(var_58, (arr_61 [i_0 - 2] [i_2] [i_13] [i_21])));
                        arr_79 [i_0 + 2] [0] [2] [i_13] [i_21] [8] [8] &= ((-(arr_31 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0])));
                        arr_80 [i_2] [i_21] [i_2] [i_2] [i_0] = (!1035814326158128801);
                    }

                    for (int i_25 = 0; i_25 < 11;i_25 += 1)
                    {
                        var_59 *= (arr_50 [i_25] [i_21] [i_2]);
                        var_60 = (var_4 + var_13);
                        var_61 = 0;
                        var_62 = (max(var_62, 7));
                        arr_84 [5] [5] [i_2] = ((!(33 | var_12)));
                    }
                }
            }
            for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 11;i_28 += 1)
                    {
                        {
                            var_63 = (arr_59 [i_0 + 2] [i_0] [i_0] [i_2] [i_0] [i_0]);
                            var_64 -= (~25816);
                            var_65 ^= -0;
                        }
                    }
                }
                var_66 = (arr_78 [4] [i_0] [i_2] [i_0 - 1] [i_26]);
                var_67 = ((var_4 ? ((-27 ? var_1 : var_6)) : ((1 << (-31215 + 31216)))));
            }
            for (int i_29 = 0; i_29 < 1;i_29 += 1) /* same iter space */
            {

                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    var_68 = (47681701 * 73);

                    for (int i_31 = 1; i_31 < 8;i_31 += 1)
                    {
                        var_69 = 50331648;
                        arr_100 [i_30] [i_30] [i_30] [i_30] [i_2] = -var_9;
                    }
                    for (int i_32 = 0; i_32 < 11;i_32 += 1)
                    {
                        arr_103 [i_0] [1] |= -7729852549955148578;
                        arr_104 [i_30] [i_29] [i_29] [i_2] [i_32] = (((((-1035814326158128816 ? var_9 : var_14))) ? var_14 : (arr_13 [i_0 + 3] [i_2] [i_0 - 2] [i_2])));
                    }
                    for (int i_33 = 0; i_33 < 11;i_33 += 1)
                    {
                        var_70 = var_10;
                        arr_107 [i_29] [i_2] [i_29] [i_2] [i_0 + 2] = (arr_25 [i_0] [i_0] [i_0] [5] [i_0 - 2]);
                        var_71 = (max(var_71, (+-13585)));
                    }
                    var_72 |= 50331648;
                }
                var_73 = ((-(arr_86 [i_29] [i_2] [i_0] [i_2])));
            }
        }
    }
    var_74 &= var_13;
    var_75 = -var_5;
    var_76 = 12478565461026889678;
    #pragma endscop
}
