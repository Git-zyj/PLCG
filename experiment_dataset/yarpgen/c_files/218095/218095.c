/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((max(var_9, 159))) || var_7)))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (min((((((max(var_0, var_2))) || 536870911))), ((-166 - (!8200645840233645722)))));
                }
            }
        }
    }
    var_15 = ((((((var_8 + var_2) ? (var_12 && 6128) : (var_11 >= var_13)))) ? (((((max(var_8, var_10))) >= ((169 ? var_8 : 3745906629543949717))))) : ((-4659892259268320715 | ((min(var_12, var_12)))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_20 [i_6] [i_6] [i_5] [i_6] [i_6] [i_7] &= (max(var_7, ((var_11 >> ((((arr_9 [i_6]) >= (arr_14 [i_6] [i_6]))))))));
                                arr_21 [i_3] [i_3] [9] [7] = ((-((-((10246098233475905894 ? (arr_10 [i_4 - 1] [i_4 - 1]) : 14186))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_16 = (max(var_16, var_6));
                            var_17 = ((((min((((-4096 + 2147483647) >> (8200645840233645716 - 8200645840233645703))), var_0))) && var_7));
                            var_18 = (min(((((arr_24 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]) && (arr_24 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])))), (((((((arr_23 [i_3 - 1] [i_4] [i_8] [i_4]) > (arr_24 [i_3] [i_4 + 1] [i_8] [i_8]))))) % (max(var_7, var_3))))));
                            var_19 = (var_3 | -var_3);
                            var_20 |= (-(((arr_12 [i_4 - 1] [i_9]) - var_4)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_21 += (((((-(arr_19 [9] [i_10] [i_10] [i_4 + 1] [i_3])))) > ((var_6 ? ((var_13 ? var_1 : var_4)) : ((max((arr_27 [i_3 + 2] [6] [i_3] [2]), (arr_8 [13]))))))));
                            var_22 = (((((((-1 ? var_0 : 26666))) >= ((var_3 ? var_3 : var_8)))) ? ((((var_4 ? var_2 : var_10)))) : (((22200 * var_0) ^ var_4))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                {
                    var_23 = (max(var_23, ((((((((-(arr_32 [i_12] [0])))) ? (var_3 + var_11) : var_4)) - var_10)))));

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            var_24 += ((-((var_1 ? var_0 : (arr_40 [i_16])))));
                            var_25 = (((var_5 / var_9) ? -4503599627370495 : ((var_2 ? (arr_15 [i_12] [i_12]) : -3745906629543949718))));
                        }

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_26 = ((var_0 ? ((44247 ? 72018115 : -2097150030)) : ((var_12 ? 33 : var_13))));
                            var_27 = (arr_27 [i_12] [i_12] [i_12] [i_12]);
                            var_28 = (((((1 ? -14187 : (arr_42 [9])))) ? (arr_12 [i_12] [11]) : (14682548763930736511 + var_2)));
                        }
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_29 = (max(var_29, ((((arr_16 [i_14] [i_14 - 1] [i_14 + 3]) ? (var_0 ^ 26656) : (((arr_22 [i_12] [i_12] [i_15] [i_12]) | 226)))))));
                            var_30 = (((arr_27 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_12]) == (arr_45 [i_14 + 3] [8] [i_14 + 1] [i_14 + 3] [i_14 + 2] [8])));
                            var_31 = -var_12;
                        }
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            arr_54 [i_12] [i_15] [i_12] = ((-(-21783 && var_7)));
                            var_32 = (((((26378 % (arr_44 [i_12] [i_12] [i_14] [i_15] [i_19] [i_13])))) ? (((arr_16 [i_12] [4] [4]) ? 27 : (arr_10 [i_12] [i_12]))) : ((var_10 ? (arr_48 [i_12] [i_12]) : var_12))));
                            arr_55 [i_19] [i_15] [i_12] [i_12] [i_12] = (((arr_1 [i_12]) ? var_11 : (((39 ? 1 : var_10)))));
                        }
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_33 = var_0;
                        var_34 = (((((var_11 ? (((var_1 ? var_9 : var_13))) : (~-3745906629543949713)))) & (max((max(223, (arr_31 [i_20] [9] [i_12]))), ((((arr_34 [i_12]) & var_7)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
