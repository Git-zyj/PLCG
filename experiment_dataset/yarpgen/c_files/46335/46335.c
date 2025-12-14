/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((384 ? ((((var_8 + 18446744073709551615) ? 12 : (~104)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_2;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = 165;
                        var_13 = ((var_4 - (arr_6 [18] [i_1] [14])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_14 = (max((((var_7 % (max(165, (arr_4 [17])))))), (max((arr_15 [i_0] [i_1] [i_1] [16] [i_4] [i_5]), 18215541680118344894))));
                                arr_18 [i_0] [i_4] [13] [13] [i_0] = (arr_15 [i_0] [i_0] [i_0] [21] [i_0] [18]);
                                arr_19 [17] [i_0] [i_2] [i_2] [i_2] = 55456973;
                            }
                        }
                    }
                    var_15 = (min(var_15, var_5));
                    arr_20 [i_1] [i_0] = (arr_9 [i_0] [i_0]);
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    var_16 = (max(var_16, ((max((!var_7), ((-(arr_8 [i_1] [22]))))))));
                    var_17 = (((arr_22 [i_0] [i_6 + 2] [i_6]) ? (arr_16 [i_6 + 2] [i_6 + 1] [i_6] [i_0] [i_6]) : ((20093 - (arr_8 [i_6 - 1] [i_0])))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_18 = ((((45443 ? var_9 : (arr_9 [i_0] [i_6 + 1]))) | (((arr_9 [i_0] [i_6 - 1]) ? 255 : var_1))));
                        arr_27 [i_0] [i_0] [i_6] [i_7] = (18446744073709551612 && 127);
                        var_19 = -32753;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_31 [i_8] [i_0] [i_0] = (((((20093 ? var_5 : 18))) ? (max((~91), (var_3 & var_0))) : var_0));
                        var_20 = (((max(-1973022351307950403, (arr_22 [i_0] [i_1] [21])))) ? (min(-var_1, (arr_12 [i_0] [0] [i_0] [i_0] [i_0]))) : (((157 - ((var_10 ? (arr_11 [i_0] [1] [i_6] [1] [1] [i_6]) : var_3))))));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_35 [i_9] [i_9] [i_9] [i_0] &= 157;
                        arr_36 [i_0] = (arr_12 [i_0] [i_1] [i_6] [i_0] [i_0]);
                    }
                }

                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_21 ^= ((65504 ? 20096 : (((((128 ? -56 : (arr_11 [i_0] [i_1] [i_10] [i_10] [i_1] [i_1]))) < var_8)))));
                    var_22 -= (((min((arr_3 [1] [i_1] [i_1]), var_5))) || ((((arr_22 [4] [i_10] [i_10]) ? (var_2 <= var_7) : ((((arr_30 [i_0] [i_0] [2] [i_0] [2]) < (-127 - 1))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    var_23 ^= 20093;
                    var_24 = ((!(arr_15 [i_0] [i_0] [i_1] [i_1] [i_11] [i_1])));
                    arr_43 [i_0] [i_0] = 65535;
                    arr_44 [i_0] [16] [i_11] |= (((arr_42 [i_0] [i_0] [2] [i_11]) ? 2145630638301476504 : ((var_0 + (arr_30 [i_11] [i_11] [10] [i_1] [i_0])))));
                    var_25 = (136 / ((var_6 ? var_9 : 97)));
                }
                var_26 = arr_41 [i_0];

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_27 = (max(var_27, ((((arr_41 [i_12]) && var_9)))));
                    var_28 = (((((((max(var_0, (arr_14 [i_0] [4] [i_0] [i_0] [i_0] [12]))) < var_5)))) == (((((((arr_23 [i_0]) == (arr_2 [i_0]))))) * (arr_23 [i_0])))));
                    arr_47 [i_12] [i_0] [i_0] = ((((arr_14 [0] [1] [i_12] [i_0] [i_0] [9]) ? ((var_8 ? var_10 : 6628743316214010838)) : (((3040065833568338167 ? (arr_6 [22] [22] [i_12]) : -2306))))));
                    var_29 = (arr_21 [i_1] [i_1] [i_12] [i_12]);
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    arr_52 [i_0] [i_0] [1] [i_0] |= ((!(((arr_28 [i_13] [i_13] [20] [20] [i_0] [i_0]) && 32698))));
                    var_30 = 956872197;
                }
            }
        }
    }
    #pragma endscop
}
