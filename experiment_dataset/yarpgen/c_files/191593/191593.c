/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = var_6;
                        var_16 = (max(var_16, (var_9 / var_1)));
                        var_17 *= (((((var_3 ? var_8 : var_3))) ? (var_2 != var_4) : var_10));
                        var_18 = var_6;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_19 -= var_2;
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] = ((var_5 ? var_13 : var_0));
                            var_20 *= (((((var_3 ? var_12 : var_9))) ? var_10 : var_9));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] [i_3] = (var_2 * var_3);
                            var_21 = ((((var_7 ? var_5 : var_1)) ^ var_13));
                            var_22 = (var_12 << (var_14 <= var_12));
                            var_23 = var_11;
                            var_24 = (var_2 / var_11);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_25 = (((((var_14 ? var_11 : var_10))) ? var_0 : var_1));
                            var_26 = ((var_7 | (var_7 / var_14)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_27 = ((var_2 ? var_7 : var_2));
                        var_28 = ((var_2 ? var_4 : var_10));
                        var_29 = ((var_1 ? var_13 : var_5));
                    }
                }
            }
        }
        var_30 = (var_1 ? var_10 : var_11);
        var_31 = (min(var_31, var_12));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_32 = (((var_13 <= var_5) + (var_2 + var_6)));
        var_33 = (max(var_33, var_8));
        var_34 &= (((255 - 0) == ((0 ? 0 : 0))));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_35 = (((((18446744073709551615 ? 0 : 1))) ? (var_6 > var_5) : var_10));
        var_36 += (9984 <= 134209536);
        arr_32 [i_10] = (((var_12 && var_5) ? ((var_3 ? var_14 : var_0)) : (((var_0 ? var_7 : var_11)))));
        var_37 = var_4;

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_38 = (min(var_38, (((((var_14 ? var_2 : var_2))) && var_4))));
                        arr_43 [i_10] [i_10] [i_10] [i_12] [i_13] = var_10;
                    }
                }
            }
            var_39 = var_14;

            /* vectorizable */
            for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
            {
                var_40 = (max(var_40, (((var_1 ? var_6 : var_9)))));
                var_41 = (var_3 ? var_0 : var_5);
                var_42 *= ((var_8 ? var_11 : var_10));
                arr_46 [i_10] [i_11] [i_14] |= ((var_7 ? var_2 : var_6));
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
            {
                arr_50 [i_10] [i_10] [i_11] [i_10] = ((4160757752 ? 8396461268373162949 : 4294967295));
                var_43 &= var_1;
                var_44 = (min(var_44, ((((((var_14 ? var_8 : var_5))) ? ((var_1 ? var_8 : var_9)) : (var_7 == var_13))))));
                arr_51 [i_10] [i_10] [i_10] [i_15] = ((((((var_11 ? var_13 : var_12)) > var_1)) ? (((((var_6 ? var_8 : var_3))) ? (var_7 * var_3) : var_2)) : (2199023253504 != 62)));
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                var_45 += var_7;
                var_46 = ((var_10 ? var_9 : ((-4198086359754727441 ? -102 : 102))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_60 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((var_9 == (var_14 <= var_11)));
                            arr_61 [i_17] [i_17] = (((((var_2 ? var_1 : (667257448 != 0)))) ? (-4198086359754727441 & 10050282805336388666) : ((((var_14 < var_0) ? ((var_10 ? var_1 : var_1)) : var_9)))));
                            var_47 = (max(var_47, ((((-102 != 536870911) ? (((var_7 ? var_0 : var_1))) : var_12)))));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_48 = ((var_0 < var_9) & ((var_2 ? var_10 : var_0)));
            var_49 = (min(var_49, var_0));
        }
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {

            /* vectorizable */
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                var_50 = ((var_8 ? var_5 : var_1));

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        var_51 = ((var_1 ? ((var_14 ? var_4 : var_4)) : var_4));
                        var_52 = (var_10 + var_12);
                        var_53 = ((var_2 ? var_2 : var_1));
                    }
                    var_54 = (min(var_54, (var_9 > var_9)));
                    arr_79 [i_20] [i_20] [i_21] [i_20] [i_20] [i_10] |= (-3479542654130787117 ? 124 : 4488561247241401485);
                }
                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    arr_83 [i_10] [i_20] [i_21] [i_24] = ((var_13 ? var_12 : var_7));
                    arr_84 [i_10] [i_21] [i_10] [i_10] [i_10] = (((var_13 + 2147483647) << (((var_13 + 84) - 5))));
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 12;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 12;i_26 += 1)
                    {
                        {
                            var_55 &= (var_2 != var_4);
                            var_56 = (var_13 - var_2);
                            var_57 = ((-3479542654130787114 + 9223372036854775807) >> (1073217536 - 1073217501));
                        }
                    }
                }
                var_58 = (min(var_58, (var_2 % var_12)));
            }

            for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
            {
                arr_95 [i_10] [i_10] [i_10] = ((((var_0 ? var_13 : var_4))) ? var_10 : ((var_8 ? (var_8 * var_0) : (var_13 != var_3))));
                var_59 = (var_6 <= var_10);
                var_60 = (((var_7 * var_5) || (var_0 || var_3)));
                arr_96 [i_10] [i_20] = (((((var_7 != (var_0 != var_11)))) != ((var_9 ? var_13 : var_7))));

                /* vectorizable */
                for (int i_28 = 0; i_28 < 12;i_28 += 1)
                {
                    arr_99 [i_10] [i_10] [i_10] [i_27] [i_28] = ((0 ? 5778 : 12));
                    var_61 -= var_14;
                }
            }
            for (int i_29 = 0; i_29 < 1;i_29 += 1) /* same iter space */
            {

                for (int i_30 = 0; i_30 < 12;i_30 += 1)
                {
                    var_62 = (var_8 >= var_10);
                    var_63 = (((((49693 ? 234 : 4317026604586426926))) ? (((var_8 ? var_3 : var_13))) : ((var_13 ? var_2 : var_14))));

                    for (int i_31 = 0; i_31 < 12;i_31 += 1)
                    {
                        var_64 = (min(var_64, ((((960 > -18) > ((var_3 ? var_12 : var_13)))))));
                        var_65 -= ((var_5 << ((((var_6 ? var_2 : var_1)) - 47822))));
                        var_66 *= ((-4198086359754727433 ? 1 : 45));
                        var_67 = ((4198086359754727433 ? 127 : 65535));
                        arr_109 [i_10] [i_10] [i_10] [i_10] [i_10] = (((((((1 ? 65472 : var_14))) || (1 || var_13))) || (((var_5 ? var_0 : var_10)))));
                    }
                }
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    var_68 = (min(var_68, ((((((var_10 ? var_10 : var_12))) ? ((3370750131 ? 49 : 576460752303423488)) : ((var_8 ? -113 : -8852498852868750162)))))));
                    arr_113 [i_10] [i_10] [i_10] [i_10] = (((var_7 & var_8) ? ((var_2 ? var_2 : var_5)) : ((0 ? 1 : 0))));
                }
                for (int i_33 = 0; i_33 < 1;i_33 += 1)
                {
                    arr_116 [i_10] [i_29] [i_29] [i_33] [i_29] = var_8;
                    var_69 = (((18446744073709551615 < 134209536) ? ((var_4 ? var_12 : var_4)) : (((var_10 ? var_10 : var_11)))));
                    arr_117 [i_10] [i_33] [i_10] [i_10] = (((((var_2 ? var_0 : var_1))) ? (var_0 * var_13) : ((var_3 ? var_2 : var_4))));
                    var_70 = var_14;
                }

                for (int i_34 = 0; i_34 < 12;i_34 += 1)
                {
                    var_71 = var_12;

                    for (int i_35 = 0; i_35 < 12;i_35 += 1)
                    {
                        arr_124 [i_20] [i_20] [i_20] [i_20] [i_20] [i_10] [i_34] = var_3;
                        arr_125 [i_29] [i_29] [i_29] [i_29] = var_12;
                    }
                    var_72 = (((var_7 <= var_8) ? (var_7 & var_10) : (var_13 / var_5)));

                    for (int i_36 = 0; i_36 < 12;i_36 += 1)
                    {
                        var_73 += ((((var_11 ? var_0 : ((var_6 ? var_5 : var_0)))) != var_5));
                        var_74 ^= (((((-8611477266226908749 ? 20 : 255))) ? 1 : var_8));
                        arr_129 [i_10] [i_10] [i_10] [i_34] [i_10] = (((-6370115936796547459 / var_6) != ((var_11 ? var_7 : var_12))));
                        var_75 = ((((var_2 << (((var_11 + 5505453075154006253) - 16))))) ? (((-9223372036854775807 - 1) / 3879471126)) : (var_6 != var_1));
                        var_76 = (((1963880056362401528 > 18446744073709551595) ? (var_8 % var_3) : (var_14 % var_9)));
                    }
                }
                for (int i_37 = 0; i_37 < 12;i_37 += 1) /* same iter space */
                {
                    arr_134 [i_10] [i_20] [i_37] [i_37] = var_1;
                    var_77 = (((((var_3 ? var_9 : var_5))) == (var_12 / var_6)));
                }
                for (int i_38 = 0; i_38 < 12;i_38 += 1) /* same iter space */
                {
                    arr_138 [i_38] [i_29] [i_20] [i_10] = (((var_1 * var_13) ? ((var_10 ? var_11 : var_10)) : (((var_13 ? var_2 : var_13)))));
                    var_78 = (((var_13 ? (var_0 / var_9) : ((var_1 ? var_12 : var_7)))) / (((var_8 ? var_1 : var_0))));
                    arr_139 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (((((((var_8 ? var_6 : var_12))) ? (var_12 || var_9) : var_0)) << (var_3 - 2162890156)));
                }
                arr_140 [i_29] [i_20] [i_10] = (((var_0 ^ var_3) * ((var_5 ? var_0 : var_2))));
                arr_141 [i_10] [i_10] [i_29] [i_29] = var_4;
            }
        }
        for (int i_39 = 0; i_39 < 12;i_39 += 1)
        {
            /* LoopNest 3 */
            for (int i_40 = 0; i_40 < 12;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 12;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 1;i_42 += 1)
                    {
                        {
                            arr_151 [i_42] [i_41] [i_10] [i_10] [i_41] [i_42] = (((var_14 - var_9) ? ((var_14 ? var_6 : var_12)) : (var_11 == var_11)));
                            var_79 = (max(var_79, (((1 & ((15843 ? 974022424 : 0)))))));
                            var_80 = (((var_7 <= var_5) ? ((var_7 ? var_0 : var_13)) : (((var_8 ? var_7 : var_13)))));
                        }
                    }
                }
            }
            arr_152 [i_10] [i_10] = var_10;
        }
    }
    var_81 = (min(var_81, (((var_1 ? var_3 : (65517 / var_0))))));
    var_82 = var_10;
    #pragma endscop
}
