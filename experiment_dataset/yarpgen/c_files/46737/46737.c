/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = -var_0;
        var_11 = (max(var_11, (((!(~var_3))))));
        var_12 = ((((((var_3 / var_9) * (var_4 / var_3)))) ? var_9 : (((arr_3 [i_0]) * var_1))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 13911619748010911532;
            var_13 = (max(var_13, (!-28300)));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_14 = (max(var_14, var_2));
                var_15 = ((-var_0 <= (var_7 < 135933779)));
                var_16 += ((var_9 < (~var_4)));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_17 |= ((~(!var_7)));
                var_18 += ((((max(((0 ? var_2 : var_6)), (var_7 >= 11565)))) ? ((-(var_6 + var_7))) : 907940697333683083));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_3] [i_3] [i_4] [15] [i_5] = (!-2033727464);
                            var_19 = (((~var_0) * ((1866542393 ? -2726590751182469432 : 13))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((!(arr_4 [i_7] [i_3] [i_1]))))));
                            var_21 = ((!((((arr_18 [i_1] [i_1] [i_3] [i_6] [i_7] [i_0] [i_0]) & (1239864353983513223 == var_6))))));
                            var_22 = (max(var_22, ((((((((817060682 ? (arr_24 [i_1] [i_1] [i_3] [i_6] [i_7]) : (arr_23 [12] [i_6])))) ? (var_8 + var_7) : (var_4 ^ var_2))) == 194)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {
        var_23 = ((10 || var_1) * (3099639664638640421 * var_9));
        var_24 ^= (!var_9);
        var_25 |= -1826920478;
        var_26 *= ((var_5 + -65) / (((var_0 || var_0) ? var_0 : ((((var_1 && (arr_26 [i_8]))))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            {

                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_27 = (((((-(arr_27 [i_11 - 1])))) >= var_6));
                                var_28 = var_8;
                                var_29 = (max(var_29, (((~(arr_35 [i_9 + 1]))))));
                                var_30 += var_7;
                            }
                        }
                    }
                    var_31 = (arr_27 [i_9 + 1]);
                    arr_40 [i_9 + 1] [i_10] [i_9 + 1] [i_9 + 1] = -152603165;
                    var_32 = (((((-45 ? var_1 : ((~(arr_29 [0] [i_11])))))) ? (min(var_6, var_7)) : (((49447 ? var_9 : -7132127113034124552)))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    var_33 = ((-1673395890 ? (arr_41 [i_10 + 3] [i_10 + 2] [i_9 + 1]) : var_6));

                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        var_34 = (max(var_34, -1491919825));
                        arr_46 [i_9 + 1] [1] [i_9 + 1] [i_9 + 1] [i_9] |= -var_4;
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_35 = ((0 == (((var_5 ? var_9 : 47207)))));
                        var_36 = (max(var_36, var_2));

                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_52 [i_10 + 3] [i_10] [i_10] [i_10 + 2] [i_16] [i_16] = (((arr_39 [1] [i_10 - 2] [1] [0] [i_9 + 1]) ? 0 : 6140717121276553411));
                            var_37 = ((var_1 ? (arr_44 [i_9 + 1] [i_9] [i_9 + 1]) : var_0));
                            var_38 ^= (!var_8);
                            var_39 = ((!(arr_27 [i_10 + 3])));
                        }
                        for (int i_18 = 1; i_18 < 18;i_18 += 1)
                        {
                            var_40 = (((((var_7 ? var_4 : 229))) ? (~var_0) : var_5));
                            var_41 ^= ((~(arr_37 [i_18 - 1] [3] [i_10] [i_9 + 1] [i_18 - 1] [i_10 + 1])));
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            var_42 |= ((var_6 ? var_5 : (arr_56 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])));
                            var_43 = (((~5359375756731047398) * 1));
                            arr_58 [i_9] [i_10] [i_9] [i_14] [i_9] [4] [i_16] = (((arr_28 [i_9 - 1]) * var_9));
                        }
                        var_44 = (18446744073709551611 / (var_0 & var_9));
                    }
                }
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    var_45 = (6645227681884166845 ^ -1555);
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 20;i_22 += 1)
                        {
                            {
                                arr_69 [i_10] [i_20] = (max((arr_44 [i_21 + 1] [i_20] [i_10]), (var_7 + 30275)));
                                var_46 = 35184304979968;
                                var_47 = (((((var_7 ^ 9223372036854775807) & (max(var_3, 25785)))) & var_7));
                                var_48 += ((1 ? ((0 * ((2055930190 ? var_6 : (arr_48 [i_9] [i_9]))))) : (min((~-8322), var_6))));
                                var_49 = (max((((var_0 != var_9) ? var_6 : var_9)), (arr_38 [i_20] [i_10] [i_20] [i_20] [i_22])));
                            }
                        }
                    }
                    var_50 &= -var_8;
                }
                var_51 = (!-1814672573);
            }
        }
    }
    var_52 = min(var_5, ((-var_8 ? (2147483647 + var_0) : (var_0 / 17))));
    var_53 = (max(var_53, var_3));
    var_54 = 44208;
    #pragma endscop
}
