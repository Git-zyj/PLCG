/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 += (min((((((var_9 << (var_3 - 84))) & ((max(var_1, var_5)))))), var_4));
                    var_14 = (~((((min(var_5, var_10))) - (var_11 <= var_8))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_15 = (var_5 % var_5);
        var_16 = (((var_4 | var_8) ? var_9 : (var_9 * var_0)));
        var_17 = (min(var_17, (((var_11 > var_5) / (31 != 97366682)))));
        var_18 = var_9;
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_12 [i_4] = (min(var_10, (-var_9 < var_7)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_19 = (min((min(((var_5 ? var_9 : var_10)), (var_10 * var_10))), (((var_2 | var_0) ? (~1) : (~var_5)))));
                        arr_21 [i_4] [i_6] [4] [i_7] = ((var_1 * (((((max(var_1, var_11))) > (max(var_11, var_6)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = max(((((var_2 && var_10) > (var_1 < var_6)))), var_5);
                                arr_28 [i_8] [i_6] = ((~((((!var_3) >= ((-18 ? var_7 : 32)))))));
                                arr_29 [i_6] [0] [i_5] [13] [i_6] [4] [9] = ((((min((var_11 <= var_11), (~var_4)))) ? ((((max(var_11, var_1))) ? -var_1 : var_2)) : ((max(((((-9223372036854775807 - 1) <= -6424727045504767238))), ((var_7 ? var_3 : var_0)))))));
                                var_21 = min((((var_7 - var_2) - (((var_9 ? var_0 : var_6))))), (min((min(var_2, var_0)), -var_10)));
                                var_22 = ((!((max((7303 >= -9223372036854775804), -20501)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            {

                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            {
                                var_23 = (max((max(((var_6 ? var_3 : var_2)), (var_10 || var_11))), (((((var_6 ? var_4 : var_6))) * ((var_6 ? var_10 : var_2))))));
                                var_24 = (((((((var_10 ? var_8 : var_6))) ? (var_1 ^ var_8) : ((max(var_3, var_5))))) % (min((var_8 | var_11), (var_1 % var_7)))));
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_25 |= ((((var_6 / ((min(var_11, var_3))))) >= (((var_2 ? ((max(var_0, var_8))) : (var_3 >= var_1))))));

                        for (int i_16 = 3; i_16 < 16;i_16 += 1)
                        {
                            var_26 = (((max((var_5 - var_8), var_11)) % ((~(1606733682 != 1904825269)))));
                            arr_48 [i_10] [i_11] [i_10] [i_11] [i_15] [i_16 - 1] [i_16 - 1] = (min((max((var_7 + var_2), -var_7)), ((((-655343552 + 0) - (var_11 - var_10))))));
                        }
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            arr_51 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_11] = var_5;
                            var_27 = (min(((~((var_8 ? var_8 : var_7)))), (max((min(var_11, var_7)), (var_10 != var_2)))));
                            var_28 = (min(var_28, var_1));
                            arr_52 [i_10] [i_10] [i_11] [i_12] [i_15] [i_17] [i_11] = (((((min(var_8, var_4)) | (((min(var_1, var_9)))))) << ((((~(var_2 ^ var_2))) - 18446744073709551587))));
                        }

                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            arr_55 [11] [1] [i_12] [7] [i_11] [i_12] [i_12] = (min((max((max(-466530854, 167036636)), (((var_2 ? var_3 : var_8))))), ((((var_4 + var_10) > -var_5)))));
                            arr_56 [i_10] [i_11] [i_11 - 2] [i_10] [i_11] = ((var_10 < (max(var_3, ((var_9 ? var_7 : var_3))))));
                            var_29 = ((((((((var_3 ? var_9 : var_0))) ? ((var_7 ? var_1 : var_8)) : -var_3))) ? var_1 : (((((var_0 << (var_5 - 7278)))) / ((var_0 ? var_11 : var_2))))));
                            var_30 = (max(var_30, ((((max((!var_0), var_1)) ^ (((((var_7 ? var_5 : var_6))) ? var_11 : (max(var_10, var_7)))))))));
                            var_31 = (min((min(((min(var_0, var_9))), (min(var_8, var_6)))), ((min(var_9, (min(var_11, var_0)))))));
                        }
                        var_32 = (max(var_32, (((var_3 ? (max(((var_11 ? var_3 : var_2)), ((min(var_8, var_11))))) : ((((((var_11 ? var_9 : var_7))) ? var_9 : var_3))))))));
                    }
                    for (int i_19 = 3; i_19 < 14;i_19 += 1)
                    {
                        var_33 *= (max((var_1 + var_1), (min(-var_4, ((max(var_10, var_10)))))));

                        for (int i_20 = 0; i_20 < 18;i_20 += 1)
                        {
                            arr_62 [i_10] [i_11] [1] [1] [i_10] [i_20] [i_20] = (((((!((min(4294967295, -21858)))))) ^ var_1));
                            arr_63 [i_19] [i_11] [3] [i_19 - 3] [3] = ((((var_3 && var_8) ? var_4 : (!var_8))) | ((max(((min(var_0, var_10))), ((var_11 ? var_1 : var_0))))));
                        }
                        var_34 = min((max((max(var_7, var_0)), var_0)), ((((var_11 % var_9) <= (var_10 ^ var_9)))));
                    }
                    for (int i_21 = 3; i_21 < 16;i_21 += 1) /* same iter space */
                    {

                        for (int i_22 = 1; i_22 < 17;i_22 += 1)
                        {
                            var_35 = ((4194303 ? -17338 : 688718336));
                            arr_69 [i_22] [i_22] [9] [i_11] [9] [i_11] [9] = var_8;
                        }
                        for (int i_23 = 0; i_23 < 18;i_23 += 1)
                        {
                            arr_72 [7] [i_11] [i_11] [i_12] [7] [i_12] [i_23] = (max((((((31 ? 3991336839178278329 : var_10)) > -var_7))), (min(var_7, ((min(var_8, var_5)))))));
                            arr_73 [i_10] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 2] = ((((((max(var_8, var_4)) % ((2066 ? 259375600 : -1))))) ? (((((~var_8) != (min(var_6, var_6)))))) : ((-(var_6 - var_6)))));
                            arr_74 [i_11] [6] = (((max(((var_8 ? var_9 : var_1)), ((var_9 ? var_10 : var_8)))) ^ (((1 >= 829867974605540210) ? (var_10 >= var_4) : ((var_7 ? var_11 : var_10))))));
                            var_36 *= ((+(min((385462931 > 4003090756), (-2147483647 - 1)))));
                            var_37 = (min(var_37, ((min(var_6, ((min((~var_10), var_11))))))));
                        }
                        arr_75 [i_11] [i_12] = ((((((~(max(var_10, var_11)))) + 2147483647)) << ((((((~(~var_11))) + 1700425134)) - 17))));
                    }
                    for (int i_24 = 3; i_24 < 16;i_24 += 1) /* same iter space */
                    {

                        for (int i_25 = 0; i_25 < 18;i_25 += 1)
                        {
                            arr_84 [i_11] [8] [8] [2] [i_25] [i_12] = (max((max(((var_8 ? var_11 : var_6)), ((max(var_7, var_3))))), (((max(var_1, var_6)) | (!var_11)))));
                            arr_85 [11] [i_11 - 1] [10] [i_24] [i_11] = (min((((~(~var_7)))), ((((var_11 ? var_9 : var_4)) ^ var_11))));
                        }
                        for (int i_26 = 1; i_26 < 16;i_26 += 1)
                        {
                            var_38 = ((((!((max(var_1, var_1))))) ? (((((max(var_5, var_4)) == (var_10 != var_0))))) : (max((min(8787411579425192170, 0)), (9223372036854775807 >= 18446744073709551612)))));
                            arr_88 [i_10] [i_10] [i_11] = var_2;
                            var_39 = (min(((493507536693417718 ? 1803795378 : 10788034448870659562)), (-var_6 || var_4)));
                            arr_89 [i_10] [1] [i_11] [i_11] [0] [i_24 - 1] [1] = (((-47 ^ 4294967295) ? (((!var_1) | (var_2 / var_3))) : ((((((var_4 ? var_7 : var_1))) ? (min(var_0, var_11)) : (min(var_7, var_1)))))));
                        }
                        var_40 = ((1 ? var_2 : -386));

                        for (int i_27 = 0; i_27 < 18;i_27 += 1)
                        {
                            var_41 = (min((max(-var_10, (max(-519760648, 42)))), (var_8 || var_7)));
                            arr_92 [i_11] [i_11] = min(var_5, (min(-50816, (var_6 != 4851))));
                            var_42 = (max(((min((var_9 && var_2), ((2047 ? var_11 : 1))))), (max((max(var_4, var_1)), ((min(var_11, var_7)))))));
                            arr_93 [1] [i_12] [i_11] [i_12] [i_11] [3] [i_10] = ((((((var_1 ? var_3 : var_10))) ? (var_5 == var_0) : ((var_8 ? var_8 : var_1)))) ^ ((((max(var_4, var_7)) >= ((var_4 ? var_5 : var_4))))));
                            var_43 = ((((((var_5 ? var_4 : var_3)))) - (max((~var_6), var_4))));
                        }
                        var_44 -= ((((((((var_10 ? var_10 : var_6))) && var_5)))) != ((~((var_1 ? var_6 : var_5)))));
                    }
                    var_45 = (min(48, -7));
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 18;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 18;i_29 += 1)
                        {
                            {
                                arr_100 [i_11] [i_29] [i_11] [i_11] [2] [i_29] = (!((min((max(252, 1)), ((min(var_8, var_3)))))));
                                arr_101 [5] [i_11] [i_10] [9] [i_10] [3] [i_10] = ((~(min((var_10 << var_10), (~var_4)))));
                                var_46 = ((((!(var_1 ^ var_1)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 18;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 18;i_31 += 1)
                    {
                        {
                            arr_107 [i_11] [i_11] [i_11] = ((((((var_11 ? var_3 : var_8)) > (var_1 > var_2))) || var_1));
                            arr_108 [i_10] [i_11 - 1] [12] [i_11] = (var_9 ^ var_6);
                        }
                    }
                }
                arr_109 [i_11] = var_3;
                arr_110 [i_10] [i_10] &= (((!var_10) ? ((((max(var_3, var_7))) ? (~var_7) : ((max(var_8, var_5))))) : (((max(var_7, var_10)) >> var_8))));
                var_47 = (max(var_47, ((min((90 - 844728425098886454), (((var_10 >> (var_1 & var_8)))))))));
            }
        }
    }
    #pragma endscop
}
