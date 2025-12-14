/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max((((!(~var_6)))), (((((var_12 ? 102 : 0))) ? (7114770980204722788 & var_1) : -2)))))));
    var_18 = (min((max((~var_16), (max(var_0, var_11)))), var_4));
    var_19 = var_8;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 |= var_10;

                        for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_21 *= var_2;
                            var_22 = var_2;
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_23 -= (((((arr_8 [i_0] [i_1] [i_2] [i_0]) ? (arr_4 [i_0]) : 68)) * 68));
                            arr_16 [i_0] [i_1 + 2] [i_0] [i_3] [i_1] = ((-124 / (((arr_6 [i_1] [i_1] [i_1] [i_3]) ? 7114770980204722793 : (arr_6 [i_0] [i_2] [i_1] [i_5])))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_24 = (arr_12 [17] [i_1] [17] [i_2] [17] [i_1]);
                            var_25 = (max(((~(arr_11 [i_1]))), (((((((arr_5 [i_0] [i_1 + 1] [i_1]) % (arr_8 [i_1] [i_1 + 2] [i_1 + 2] [i_1])))) && ((((arr_19 [i_1] [i_3]) / (arr_8 [i_1] [i_3] [i_2 + 1] [i_1])))))))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_26 -= arr_11 [i_7];
                            var_27 |= (min(((-4 ? var_9 : (arr_12 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_0]))), (!-var_8)));
                            var_28 = (((~(((!(arr_5 [i_0] [3] [i_1])))))));
                            var_29 |= (min(((((arr_20 [i_7] [i_3] [i_2] [i_1 - 1] [i_0]) && var_7))), (min(((-(arr_10 [i_0] [i_0]))), ((max((arr_18 [i_0] [i_1 + 3] [i_2] [i_7]), (arr_6 [i_0] [i_0] [i_7] [i_7]))))))));
                        }

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_30 = (~196);
                            var_31 *= (arr_7 [i_0] [i_1] [i_2] [i_1]);
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_32 = (max((max((((arr_19 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_0 [i_3]))), (var_2 | 213))), ((max(((~(arr_8 [i_0] [15] [15] [i_1]))), (arr_19 [i_1] [i_1]))))));
                            var_33 = (min(((16593 ^ (arr_18 [i_1] [i_1 + 2] [i_1 + 1] [i_2 - 1]))), ((-(arr_21 [i_1 + 1] [i_1] [i_2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 1])))));
                            var_34 = -7;
                            var_35 = -31636;
                            arr_29 [i_9] [9] [i_1] [i_1] [i_0] = (arr_3 [i_2 + 2]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_36 |= (((arr_2 [i_1 + 2] [i_2 + 2]) ? (arr_25 [i_1 + 2] [i_2 + 2] [i_2]) : (arr_2 [i_1 + 1] [i_2 - 1])));
                            var_37 -= (arr_5 [1] [i_1 + 1] [i_10]);
                            var_38 = (((arr_19 [i_1] [i_1 - 1]) % var_9));
                        }
                        var_39 = var_9;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_40 -= (((18446744073709551615 ? var_4 : (arr_30 [i_11] [i_11]))));
                        var_41 = (min(var_41, ((((~117) ^ (((arr_5 [i_0] [i_2] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_11]) : 75378490974910344)))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [i_1] = (((!var_8) ? ((881813440 ? (arr_7 [i_0] [i_1] [i_2] [i_12]) : 21909)) : (1226 > var_16)));

                        for (int i_13 = 3; i_13 < 15;i_13 += 1)
                        {
                            var_42 = (arr_37 [i_0]);
                            var_43 -= 169;
                            arr_43 [i_1] [i_1] [i_1] [i_12] [i_12] = var_10;
                        }

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            var_44 = (-((var_11 ? var_3 : (arr_35 [i_0] [i_1 - 1] [i_2] [i_12] [i_14]))));
                            var_45 |= ((var_6 ^ 2121) ? 3 : (arr_31 [i_0] [i_0] [i_12] [i_1 + 3] [i_2 + 1]));
                            var_46 *= (((arr_3 [i_1 + 3]) / var_16));
                            var_47 ^= ((-(arr_12 [i_0] [i_2 + 1] [i_1 + 3] [i_2 + 2] [i_1 + 3] [i_0])));
                        }
                    }
                    var_48 = ((~(min((var_8 <= 375916760807378028), ((241 << (var_6 - 29762)))))));
                }
            }
        }
        var_49 *= ((((-var_16 < ((max(204, 43))))) ? (max((((-40 ? 204 : (arr_37 [i_0])))), (min(var_16, 18371365582734641295)))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_50 = ((~(((arr_9 [i_0] [i_0] [i_0]) * 15349))));
    }
    #pragma endscop
}
