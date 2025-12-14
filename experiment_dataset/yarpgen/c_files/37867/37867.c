/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_3;
    var_11 = (min(var_11, var_6));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = ((-((-(var_8 ^ var_3)))));
        arr_2 [i_0] = (((!(((var_3 ? -32005 : 26471))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_13 = (min(var_13, var_0));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    var_14 |= (((((min(-26472, var_2)))) ? (((((min(var_1, 32004)))) | var_3)) : ((max(16777215, -6)))));
                    var_15 = (min(var_15, ((max((((var_4 ? 26471 : -1335))), (max(((min(var_5, -26460))), (min(5325150304412133393, 64389)))))))));
                    var_16 = var_6;
                    arr_10 [i_1] [i_2] [i_2] [i_3 - 2] = var_5;
                    arr_11 [15] = (((min(124, -29746))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_17 += (min((min(2722648441, 7018306700102738572)), ((min(var_5, var_4)))));
        arr_14 [i_4] = max((min((25 / var_5), var_1)), ((min(var_8, (var_8 < -3)))));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_17 [1] [i_5] [i_5] = ((((var_9 ? var_8 : ((var_1 ? 16777152 : 784880037)))) + 25));
            arr_18 [i_4] [i_5] = (((26460 - var_9) ? (((min(var_6, 3055898047692945277)) - ((min(var_3, var_3))))) : (var_5 - -26472)));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_18 = (((var_1 - var_5) <= ((-16777171 ? var_8 : 1))));
            arr_23 [i_6] [4] [1] = 81932325;
            var_19 = ((var_0 ? 1 : -26474));
            var_20 = var_3;

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_21 = ((-var_2 ? 29749 : var_2));
                arr_26 [i_4] [9] [i_6] [0] = var_0;

                for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                {
                    var_22 = var_2;
                    var_23 -= var_3;
                }
                for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_36 [i_4] [i_6] [1] [i_9] [i_10] = -29182;
                        arr_37 [i_7] = (-32005 - -30);
                        var_24 = (min(var_24, 31));
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        var_25 = (min(var_25, 71916856549572608));
                        var_26 = -7142071938278763801;
                        arr_40 [9] [i_6] [i_7] [i_6] [i_6] [i_6] = ((var_9 ? 6414 : -730876341));
                    }
                    for (int i_12 = 2; i_12 < 8;i_12 += 1)
                    {
                        var_27 = var_0;
                        arr_43 [i_4] [6] [i_7] [i_9] [i_12] = var_5;
                    }
                    var_28 = (max(var_28, var_3));
                    arr_44 [3] = var_8;
                    var_29 = 63488;
                }
                var_30 = (min(var_30, (((!(var_5 || 13426682386769145949))))));
            }
            for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_31 ^= ((4362402522033871058 >> (var_4 - 7145845071841889413)));
                    var_32 = var_8;
                    var_33 = ((32767 ? var_8 : var_4));
                }
                var_34 = -2147483630;
            }
            for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
            {
                arr_52 [1] [i_15] = var_1;
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        {
                            arr_59 [i_4] [i_15] [i_15] [7] [7] [i_16] [0] = ((-21040 ? var_7 : var_8));
                            var_35 = var_4;
                        }
                    }
                }
            }
        }
        for (int i_18 = 1; i_18 < 8;i_18 += 1)
        {
            arr_62 [5] = ((var_5 ? var_0 : 11));
            var_36 = var_1;

            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {

                for (int i_20 = 3; i_20 < 9;i_20 += 1)
                {
                    var_37 = (!var_2);
                    var_38 -= var_5;
                    var_39 = (max(var_39, -1538011174));
                }
                var_40 = (min(var_40, ((max((min(((var_1 ? var_0 : var_2)), ((((-32765 + 2147483647) >> 1))))), ((min(0, 1745168089))))))));
                arr_69 [i_4] [i_4] = ((~((27 ? 45836 : 0))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 10;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 9;i_22 += 1)
                    {
                        {
                            var_41 -= var_5;
                            var_42 = -var_4;
                        }
                    }
                }
            }
            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                var_43 = (min(((max(var_3, -376400478))), var_5));
                var_44 = var_1;

                for (int i_24 = 2; i_24 < 9;i_24 += 1)
                {
                    var_45 = var_6;

                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        arr_85 [8] [1] [7] [7] [8] = (((((~(min(17270312376096872653, 1176431697612678959))))) ? var_0 : (var_2 ^ var_4)));
                        arr_86 [i_4] [1] = (min((((29599 ? 27 : -1745168099))), var_9));
                        arr_87 [i_4] [i_4] [4] [0] [7] = (((-2548882319574421404 / -784880038) * ((min(-11, 58)))));
                        arr_88 [i_4] [i_4] [i_4] [6] [i_4] = ((var_9 != ((1772668267 ? 1 : 1))));
                    }
                    var_46 = (min(3426679281, 3426679281));
                }
                for (int i_26 = 0; i_26 < 10;i_26 += 1)
                {
                    arr_92 [5] [5] [9] [i_26] = -19871;
                    var_47 = ((((max(19653, 47072))) ? ((max(var_0, var_0))) : var_7));
                    arr_93 [i_4] = -17;
                    var_48 = (min(var_5, var_7));
                }
            }
            for (int i_27 = 3; i_27 < 9;i_27 += 1)
            {
                arr_97 [i_4] [i_4] [4] = (!198);
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 10;i_28 += 1)
                {
                    for (int i_29 = 3; i_29 < 7;i_29 += 1)
                    {
                        {
                            var_49 = (min((-17 * 8413782075792606551), var_8));
                            arr_104 [i_4] [i_4] [6] [9] [i_4] [i_29] = ((var_4 ? (min((-127 - 1), ((var_6 ? var_5 : var_2)))) : ((((-2147483641 ? 1 : var_2)) / -255))));
                        }
                    }
                }
            }
            var_50 = (((((-7 ? var_2 : var_0))) < var_9));
            var_51 = var_4;
        }
        for (int i_30 = 0; i_30 < 10;i_30 += 1)
        {
            var_52 = (min(var_0, (min(var_4, var_3))));
            var_53 = (max(var_53, (((-(~var_9))))));

            for (int i_31 = 3; i_31 < 8;i_31 += 1)
            {
                var_54 *= (~var_5);
                var_55 -= (min(-15278, (min(var_7, var_7))));
            }
            for (int i_32 = 2; i_32 < 7;i_32 += 1)
            {

                for (int i_33 = 2; i_33 < 8;i_33 += 1)
                {
                    var_56 = (max(30, -49));
                    arr_114 [i_30] [7] [0] [i_32] [3] = -15654236344414676406;

                    for (int i_34 = 3; i_34 < 8;i_34 += 1)
                    {
                        arr_117 [i_30] [4] = (((min(var_9, (min(-2548882319574421404, var_2)))) > (max(-2548882319574421412, -49))));
                        var_57 = (min(-7397, ((8937305469013489451 ? 16 : var_4))));
                        arr_118 [i_33] [i_30] [i_32] [2] [i_34] [i_30] [2] |= (min(16, (min((min(15257, 2644401023782223799)), (~-15258)))));
                        arr_119 [i_4] [i_4] [i_4] [i_30] [9] [i_33 - 1] [i_34] = ((max(var_1, var_8)));
                    }
                }
                arr_120 [i_30] = (min(-2548882319574421404, 230));
            }
        }
    }
    var_58 = -1259990180;
    #pragma endscop
}
