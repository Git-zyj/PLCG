/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((((((~var_5) ^ var_9))) || -var_9));
                    var_17 = (max((min(var_7, (var_10 ^ var_4))), var_6));
                }
            }
        }
        var_18 &= (min(18446744073709551611, 4));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((((max(18446744073709551588, 18446744073709551611))) ? ((((((var_3 ? var_14 : var_1)) > (max(var_1, var_2)))))) : (((((var_14 ? var_9 : var_9))) ? ((var_4 ? var_6 : var_11)) : var_1))));
        var_19 = (18446744073709551610 ^ 4294967295);
        arr_13 [i_3] = ((((min(var_8, (var_7 * var_14)))) ? (min((var_5 == var_9), ((var_8 ? var_4 : var_5)))) : ((min(var_10, (((var_10 >> (var_5 - 2773354004)))))))));
        var_20 = ((((max((((var_10 ? var_11 : var_14))), ((var_2 ? var_6 : var_15))))) ? ((((min(var_5, var_0)) / var_13))) : var_2));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_20 [1] [i_4] [i_4] = (min((((var_7 * var_0) ? var_6 : var_13)), ((var_4 ? var_11 : var_10))));
                    arr_21 [i_3] [i_4] [i_4] [i_4] = ((((((((var_14 ? var_5 : var_6))) ? ((var_11 >> (var_12 + 5991521669456846203))) : ((var_15 ? var_11 : var_8))))) ? (~2) : (((var_8 * var_7) ? (max(var_5, var_15)) : (var_5 >= var_9)))));
                    var_21 = ((((((9223372036854775807 < -5485) ? (6982490942844627009 / 2147483647) : 4))) ? var_2 : (((62385 % 1) ? 18446744073709551611 : 10891783484570890550))));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_22 = (((((((var_11 ? var_2 : var_11))))) + ((var_11 ? (min(var_3, var_1)) : (((var_15 ? var_14 : var_14)))))));
                        arr_24 [i_6] [i_6] [i_5] [i_5] [2] |= var_1;
                        arr_25 [i_3] [i_4] [i_5] [i_6] = ((((min(((var_14 ? var_13 : var_5)), (((var_14 ? var_13 : var_8)))))) ? (var_0 - var_11) : (((((min(var_13, var_0))) ? (var_6 | var_5) : (min(var_6, var_7)))))));
                        var_23 ^= ((((((6 + 18444492273895866368) ? (max(18446744073709551613, 5)) : (var_7 / var_1)))) ? ((((min(var_15, var_3)) % ((max(var_14, var_8)))))) : ((((max(5, 0))) ? (min(18446744073709551610, var_6)) : 32767))));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_24 = ((((min(((min(var_7, var_11))), ((7554960589138661065 ? 7554960589138661065 : var_6))))) ? ((min(((var_12 ? var_14 : var_8)), var_14))) : (min((((var_8 ? var_8 : var_10))), var_1))));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_25 = (min(var_25, (((var_4 ? (((var_5 <= var_1) ? var_3 : (var_14 && var_3))) : (((((max(var_15, var_12))) ? ((3 ? 1 : 0)) : (var_14 <= var_0)))))))));
                            var_26 = (((-var_2 ? ((min(var_8, var_10))) : var_11)));
                            var_27 += (!var_15);
                        }
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_38 [i_9] &= (64 && 2);

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_41 [4] [i_4] [i_3] = (((max((9223372036854775787 % 23), (((var_3 ? var_6 : var_6))))) >> (((max(var_6, ((var_12 ? var_1 : var_14)))) - 3937631327))));
                            arr_42 [i_3] [i_4] [i_5] [i_9] [i_4] = (((var_15 * var_8) / var_11));
                            var_28 = (((((((max(var_10, var_2))) ? (var_14 || var_7) : var_10))) ? ((((((var_8 ? var_9 : var_14))) && (!var_15)))) : (((!(((var_14 ? var_1 : var_12))))))));
                            var_29 -= (((((((min(18446744073709551599, 10891783484570890550))) ? ((var_10 ? var_6 : var_6)) : (var_10 >= var_5)))) % (min(var_5, var_12))));
                            var_30 = (((var_12 + var_8) / (((var_6 / var_15) ? (~210) : ((var_12 ? var_0 : var_14))))));
                        }
                        var_31 = ((((-(!var_7))) * var_7));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_32 = (min(var_32, ((((((var_15 ? (var_11 + var_4) : (((var_8 ? var_14 : var_7)))))) ? ((((!var_2) * (min(var_6, var_13))))) : (((var_11 / var_15) ? var_6 : ((var_3 ? var_12 : var_7)))))))));

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_33 ^= ((-var_15 && (((133955584 ? 1 : 10891783484570890534)))));
                            arr_50 [i_4] [i_4] [i_4] [i_11] [i_5] = (((((((min(var_15, var_15))) ? ((var_8 ? var_4 : var_5)) : (((var_11 ? var_5 : var_1)))))) ? (min(((var_9 ? var_12 : var_8)), var_1)) : ((min(var_13, var_1)))));
                        }
                        var_34 = (((max((var_14 * var_9), ((0 ? 18446744073709551614 : 1)))) / ((max(((4294967291 ? 20188 : 3127645056)), (var_6 * var_2))))));
                        var_35 -= (min(65535, -5384240928738411702));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_36 *= (((((var_14 ? var_8 : var_10))) ? (!var_0) : -var_14));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        arr_61 [i_13] [i_14] [12] [i_16 + 1] [i_16] [12] = (((max((var_13 & var_3), (var_9 ^ var_13))) < (((var_5 << (((~8192196039149842538) - 10254548034559709065)))))));
                        var_37 = ((((((!3127645049) >> (1 != 2047)))) * ((var_3 ? (!var_1) : (~var_5)))));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_65 [2] [5] [i_15] [i_17] [i_17] = ((((((max(var_3, var_15))) ? ((var_3 ? var_9 : var_1)) : (var_14 >= var_2))) >> (((var_2 * var_5) - 2047515433))));
                        var_38 = (max(var_38, (((((min(var_2, var_6))) & (max(var_9, var_3)))))));
                    }
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        arr_69 [i_13] [8] [i_15] [i_15] &= ((4294965249 ? (!288230376151711728) : ((4096 ? 1167322239 : 17147565775680994734))));

                        for (int i_19 = 3; i_19 < 10;i_19 += 1)
                        {
                            var_39 -= var_0;
                            var_40 = (!65238839);
                            arr_73 [i_14] [i_19 + 2] = (max(63402, 111));
                        }
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            arr_76 [i_13] [i_14] [i_15] [i_18] [i_20] = ((var_9 % var_14) << ((((var_12 & ((var_6 ? var_14 : var_4)))) - 106)));
                            var_41 &= (max(var_5, (min(var_3, (((var_7 ? var_8 : var_14)))))));
                        }
                        arr_77 [9] [0] [i_14] [10] = ((((var_0 ? var_0 : var_13)) / (((((133955584 ? 133955581 : var_2))) ? ((var_6 ? var_0 : var_15)) : (var_15 <= var_6)))));
                    }
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        var_42 = (((((var_10 & var_9) ? (max(var_9, var_2)) : (min(var_9, var_13))))) ? ((((!(((var_3 ? var_5 : var_5))))))) : (((((4161011711 ? 8192196039149842538 : 255))) ? 1 : 10254548034559709078)));
                        var_43 -= ((((max((max(var_5, var_2)), (!var_10)))) != (((((var_12 ? var_12 : var_11))) ? var_4 : ((max(var_7, var_1)))))));
                    }
                    var_44 = (((((max(var_7, var_7)))) ? (!1) : var_6));
                    arr_81 [i_13] [i_14] [i_14] = (max((max(((11 ? 34084860461056 : 10891783484570890550)), (var_5 * var_7))), (((var_0 && var_0) ? (((max(var_2, var_7)))) : (min(var_4, var_5))))));
                }
            }
        }
        var_45 = ((((var_1 != var_0) ? (min(var_10, var_1)) : (var_15 * var_1))) ^ (((var_14 < var_3) + var_5)));
    }
    for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
    {
        var_46 -= ((((max((max(var_1, var_9)), ((min(var_2, var_12)))))) && ((((((var_4 ? var_7 : var_2))) ? var_12 : (var_0 + var_2))))));
        arr_85 [i_22] [i_22] = max(((((var_15 && var_10) & (var_13 <= var_13)))), ((var_3 ? ((57478 ? 25165824 : 1)) : (!var_1))));
    }
    var_47 = (2970454408 > -1);
    var_48 = (max(var_48, (((((((((var_7 ? var_12 : var_11)) <= (((0 ? 2147483647 : 1324512892))))))) >= ((var_3 ? var_12 : var_9)))))));
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 21;i_23 += 1)
    {
        for (int i_24 = 3; i_24 < 17;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 20;i_25 += 1)
            {
                {
                    var_49 ^= ((((-(((-9223372036854775807 - 1) ? 2970454404 : -2147483647)))) << (((((var_12 ? var_5 : var_4))) ? (var_6 % var_6) : (!var_10)))));
                    var_50 = ((4294967295 ? (0 - 166) : ((14 ? 1 : 4294967295))));
                    var_51 = max((((((16376 << (575334852396580864 - 575334852396580860)))) % (var_4 & var_11))), (var_12 / var_14));
                }
            }
        }
    }
    #pragma endscop
}
