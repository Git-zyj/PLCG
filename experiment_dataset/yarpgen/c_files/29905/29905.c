/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_5 <= 27);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_1] [i_2] = (((!var_4) < (arr_0 [i_0] [i_0])));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = (((arr_9 [i_0] [i_0] [i_0] [i_3]) ? 147 : (((arr_4 [i_0]) ? var_2 : 8073505604142160643))));
                        var_17 = (((arr_5 [i_0] [i_1] [i_3]) << ((((-6661 ? var_1 : var_1)) + 15162))));
                        var_18 = (min(var_18, (((((arr_6 [i_0] [i_3] [i_2] [i_2]) < var_16))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_19 = (var_3 + 12528);
                        var_20 |= 15;
                        var_21 = (((arr_7 [i_0] [i_1] [i_2] [i_4]) ? (arr_7 [i_1] [i_4] [i_2] [i_4]) : (arr_7 [i_4] [i_4] [i_4] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = -8;
                        var_22 = ((arr_8 [i_2] [i_1] [i_2] [i_5] [i_2]) ? (var_1 >= 3451316605) : (arr_3 [i_5]));
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_1] = ((~(((!(arr_7 [i_2] [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_23 [i_6] = arr_10 [i_6] [i_6] [i_6] [i_6] [i_6];
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_8] = (arr_9 [i_6] [i_7] [i_7] [i_8]);

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_23 = (((arr_28 [i_6] [i_7] [i_9] [i_10]) ? 15511 : (arr_17 [i_6] [i_7 + 2] [i_8] [i_9] [i_6])));
                            var_24 -= -var_16;
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_38 [i_6] [i_7] [i_8] [i_6] [i_9] [i_11] = ((arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) - var_15);
                            arr_39 [i_6] [i_7] [i_8] [i_6] [i_11] [i_11] [i_11] = var_10;
                            var_25 = var_7;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            arr_42 [i_6] [i_6] [i_6] [i_6] [i_12] = (((126 - 8073505604142160643) ? (arr_26 [i_6]) : 0));
                            var_26 *= ((!(arr_14 [i_6] [i_6] [i_6] [i_9] [i_7] [i_7 + 3])));
                            var_27 += var_13;
                        }
                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            arr_46 [i_6] [i_7] [i_8] [i_9] [i_13] = ((38 / var_15) > var_3);
                            arr_47 [i_6] [i_7] [i_8] [i_9] [i_9] [i_6] [i_13] = (((arr_15 [i_6] [i_6] [i_6] [i_6]) ? 113 : ((var_15 ? 2507173612 : var_4))));
                            var_28 += 38;
                        }
                        var_29 = -var_5;
                        var_30 = ((!(arr_3 [i_7 - 1])));
                        var_31 = arr_29 [i_7] [i_9];
                        arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = -0;
                    }
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_32 = min(((~((-5213 ? 138 : (arr_7 [i_6] [i_6] [i_6] [i_6]))))), -131008);
                            var_33 |= (-((((-1 ? var_2 : var_16)) * (-131027 <= var_7))));
                            var_34 = var_6;
                            var_35 = ((var_9 ? 15345163820382382857 : (arr_10 [i_6] [i_7] [i_8] [i_14] [i_6])));
                            arr_54 [i_6] = ((((!(arr_13 [i_6] [i_7] [i_8] [i_8] [i_14] [i_15]))) ? (min(5213, 131008)) : (min(-1249185566, (arr_13 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
                        }
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            arr_57 [i_6] [i_6] = (arr_0 [i_14] [i_7]);
                            var_36 = (min((min(var_12, 237930389)), -24984));
                            arr_58 [i_6] [i_6] [i_8] [i_14] = ((-(min(1690575474, (arr_7 [i_6] [i_7 - 1] [i_14 - 2] [i_14])))));
                            var_37 *= (min((((!var_15) ? ((var_12 ? (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]) : var_9)) : ((((arr_37 [i_6] [i_6] [i_8] [i_14] [i_14]) ? 436440108 : -23851))))), var_2));
                        }
                        for (int i_17 = 2; i_17 < 15;i_17 += 1)
                        {
                            var_38 = (min((((arr_44 [i_7] [i_7 + 2] [i_6]) ? (arr_16 [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 - 1]) : (arr_16 [i_14 - 2] [i_14 + 1] [i_14 - 1] [i_14 + 1]))), var_0));
                            var_39 = ((((((arr_44 [i_6] [i_8] [i_6]) ? var_3 : (min(var_2, var_9))))) ? ((((((-(arr_1 [i_7])))) ? 201807195 : var_14))) : (arr_31 [i_17] [i_17 + 2] [i_14 - 2] [i_14 - 1] [i_7 + 1])));
                        }
                        var_40 -= (~-1769102454);
                        arr_62 [i_6] [i_7] [i_7] [i_7] [i_7] = (-(min((arr_36 [i_7 + 1] [i_7] [i_6] [i_14 + 1] [i_14]), (arr_36 [i_7 + 4] [i_7 + 4] [i_6] [i_14 - 2] [i_14]))));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_41 = (arr_51 [i_6] [i_7] [i_8] [i_18]);
                                arr_69 [i_6] [i_6] [i_8] [i_18] [i_19] = (((((26100 * (arr_20 [i_7 + 3] [i_7])))) ? var_1 : 2171453838));
                                var_42 = (max(var_42, var_13));
                            }
                        }
                    }
                }
            }
        }
        var_43 = (min(-var_2, (arr_49 [i_6] [i_6] [i_6] [i_6])));
        var_44 = ((((((!(((var_2 ? (arr_53 [i_6]) : 1518685027))))))) < 0));
    }
    var_45 = (min(var_45, var_6));
    #pragma endscop
}
