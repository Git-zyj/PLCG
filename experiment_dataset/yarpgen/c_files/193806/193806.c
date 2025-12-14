/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_11 += ((((max(var_7, var_4)) & var_0)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_12 = var_6;
                        var_13 = ((((((18446744073709551615 ? 61771 : -5906823848633915212))) ? ((var_8 ? var_9 : var_2)) : (var_2 >= var_1))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_14 = var_9;
                            arr_13 [i_0] [i_0] [11] [1] [i_4] [i_4] = ((var_8 ? (var_8 / var_4) : (var_7 / var_8)));
                            var_15 = (((0 ? 4294967278 : 5085759273536144531)));
                            var_16 += ((((var_2 ? var_1 : var_0)) == var_1));
                        }
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_17 = (~((((var_4 + var_3) == (min(var_8, var_6))))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_18 = (((var_10 < var_8) ? (((var_9 && var_7) ? ((var_10 ? var_0 : var_1)) : var_9)) : (~var_2)));
                            arr_18 [i_0] [6] [6] [3] [2] [3] = ((((2113929216 ? (-32767 - 1) : 18446744073709551615)) / ((-var_5 ? (((var_0 ? var_8 : var_10))) : (min(0, 18446744073709551615))))));
                        }
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            var_19 = ((2113929216 ? 4788 : 192));
                            var_20 ^= (((((var_8 >= var_4) ? ((var_3 ? var_8 : var_4)) : (250 <= 0))) >= (((var_0 % var_1) ? var_0 : (var_5 == var_2)))));
                            arr_22 [i_7] [i_5] [i_2] [i_0] [i_0] = ((!((((var_6 ? var_2 : var_8)) <= (var_0 ^ var_6)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [7] = ((!(var_6 <= var_8)));
                            arr_26 [2] [i_5] [i_2] [i_1] [6] = (((var_4 != var_4) ? (var_1 | var_4) : (var_4 | var_10)));
                            var_21 = var_2;
                            var_22 += (((var_1 < var_0) ? 4294967295 : (var_3 / var_3)));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_23 = (!var_5);
                            arr_31 [8] [i_1] [i_2] [i_1] [8] = (((((var_1 ? var_10 : var_5)))) ? (min(((496 ? 4294967277 : 2113929216)), (var_0 % var_0))) : ((((((var_9 ? var_2 : var_7)) < (((var_9 ? var_8 : var_6))))))));
                            arr_32 [11] [i_1] [11] [11] [i_1] [5] &= ((((((var_10 < var_1) ? (var_5 > var_4) : var_2))) ? ((0 ? (var_5 * var_1) : (((var_6 ? var_4 : var_4))))) : (min(((var_0 ? var_2 : var_7)), var_0))));
                            arr_33 [i_9] [i_1] [i_2] [i_2] [i_1] [2] = (((var_6 * var_7) ? (((((var_8 ? var_8 : var_1)) != (var_1 | var_1)))) : ((((((var_6 ? var_8 : var_3))) || (var_4 != var_9))))));
                        }
                    }
                    arr_34 [i_0] [10] = min((((var_9 | var_10) & (var_5 % var_6))), var_6);
                    var_24 = ((((((((var_10 ? var_6 : var_5))) ? (30701 - 189) : (15105 - -1)))) ? (min((var_10 + var_5), ((var_10 ? var_6 : var_8)))) : ((var_7 ? ((var_6 ? var_5 : var_10)) : ((65535 ? 189 : -107))))));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_25 = ((((-var_2 ? (max(var_3, var_2)) : (var_1 || var_1))) / var_8));
                        arr_37 [i_2] = (((((var_0 ? var_9 : var_5)) < (var_4 > var_5))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_0] [i_0] = ((var_3 | var_1) ^ (~var_5));
                        var_26 = var_10;
                        var_27 = (((var_8 < var_7) && (((var_3 ? var_6 : var_8)))));

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_28 = ((var_2 == var_7) ? var_1 : var_9);
                            var_29 = (((var_2 && var_5) ? (!var_4) : var_8));
                            var_30 = ((-(!var_0)));
                            arr_44 [13] [12] [12] [i_2] [i_11] [12] = ((var_3 ? (var_4 / var_1) : (((var_8 ? var_0 : var_10)))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_49 [i_0] [i_0] [1] [i_0] [13] = (((((((max(var_4, var_0))) ? (max(var_8, var_9)) : ((var_0 ? var_1 : var_4))))) ? ((((var_0 ? var_7 : var_2)))) : (((var_6 != ((var_3 ? var_7 : var_8)))))));
                        var_31 = (((((((var_2 ? var_5 : var_4)) & var_7))) ? (min((~var_3), ((var_1 ? var_6 : var_0)))) : var_0));
                        var_32 = (min((((((var_10 ? var_1 : var_2))) ? ((var_0 ? var_8 : var_8)) : ((var_0 ? var_8 : var_5)))), (min((!var_2), (var_4 - var_5)))));
                        var_33 = (max(var_33, (((((((!var_3) ? ((var_0 ? var_4 : var_10)) : (var_3 - var_8)))) + (((((var_9 ? var_5 : var_4))) ? (var_2 - var_7) : 32767)))))));
                    }
                }
            }
        }
        arr_50 [i_0] = (min(var_3, 126));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_53 [5] [6] = (94 & 0);
        arr_54 [11] = (min(-1901253369, 0));
        arr_55 [i_14] [i_14] = (((4095 < 1) ? (max((min(var_3, var_0)), ((var_0 << (var_6 - 12346))))) : var_4));

        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            var_34 = (min((((min(var_4, var_1)) / (var_6 * var_2))), (((((var_0 ? var_9 : var_2)) == -var_9)))));
            var_35 *= ((((((3764 * 21) ? ((2305843009213693951 ? 16 : 64896)) : ((min(7, 182)))))) & (((((var_1 ? -30378 : var_2))) ? 33554432 : 4261412863))));
            var_36 = (min(((var_3 * (var_3 == var_2))), (((var_7 ? (0 + 0) : (var_3 + var_7))))));
        }
    }

    /* vectorizable */
    for (int i_16 = 0; i_16 < 0;i_16 += 1)
    {
        var_37 = ((((var_1 ? var_4 : var_8)) - var_8));
        var_38 *= ((((var_4 ? var_0 : var_5)) == (var_3 - var_0)));
    }
    #pragma endscop
}
