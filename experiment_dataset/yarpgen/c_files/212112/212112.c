/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_12 |= ((((92 >> (((arr_0 [i_0]) >> (((arr_0 [i_0]) - 19980)))))) >> (((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 - 2]) : 1179669368)) - 124698967))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((((max((arr_7 [8] [i_1] [i_0 - 1] [i_0 - 1] [i_3]), -var_3))) ? ((max(1179669353, (((arr_5 [i_0] [i_0] [i_2] [i_3]) ? (arr_1 [i_2]) : var_1))))) : 14458203497545213044));
                        arr_11 [i_0] = (min((max((arr_1 [i_0 + 2]), (arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]))), var_7));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] = (arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1]);
                        arr_15 [i_4] [i_4] [i_2] [i_1] [i_0] [i_0] = (min((((var_10 ? -var_11 : var_5))), (min((min(var_8, var_1)), ((max(var_5, (arr_3 [i_0] [i_0] [2]))))))));
                        var_13 = -3988540576164338591;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_14 = (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0]);
                            var_15 = (((arr_17 [i_0] [i_0] [i_0] [i_4] [7] [i_0 + 2]) >> (((arr_17 [i_0] [i_5] [1] [1] [i_5] [i_0 - 2]) - 1818768474669995741))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [1] [1] [i_1] [i_2] [i_6] [i_2] [i_2] = 14458203497545213019;
                            arr_22 [i_0] [1] [1] [1] [i_6] = arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [1] [i_0 - 1];
                        }
                        var_16 *= (((((((min((arr_2 [i_0] [i_4]), (arr_8 [i_1])))) ? (min(var_6, 2097151)) : (1 && var_1)))) ? (max(var_2, (max(var_8, (arr_20 [i_4]))))) : ((((!((((arr_8 [i_0]) ? var_11 : (arr_19 [i_4] [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_17 = arr_7 [i_0] [i_0] [i_2] [i_7] [i_7];
                        arr_26 [i_7] = (((arr_13 [i_0 - 1] [i_1]) ? 14458203497545213019 : (var_0 % 3988540576164338572)));
                    }
                    var_18 = var_0;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_19 *= (((51 & 12288) ? ((var_8 % (arr_0 [i_0 + 2]))) : (((((var_7 ? var_1 : var_11))) ? (arr_18 [i_0 - 2] [i_0]) : (max(182, 9466581214791293118))))));
                    arr_33 [i_9] [i_8] [i_8] [i_0] = var_10;
                    arr_34 [i_8] [i_8] [i_9] = (min(3558349675052927125, (((((min(18446744073709551615, 78))) ? 32759 : -27)))));
                }
            }
        }
        arr_35 [0] = ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((min(var_7, var_9))) : var_0)));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_20 = (max(var_20, (((-((((var_6 * (arr_16 [i_0] [i_10] [i_0] [i_11] [i_10]))) / ((var_11 / (arr_37 [11] [i_10]))))))))));
                    var_21 = (!var_5);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_44 [i_0] [i_11] [i_11] [i_11] [6] [i_11] [i_0] = ((~(max(((min(-1179669355, (arr_19 [i_10] [i_12] [6] [i_10] [i_10] [i_0])))), (min(var_6, 4194303))))));
                                var_22 *= (arr_36 [i_0] [i_0]);
                                var_23 = (min(((((arr_27 [i_0 - 1]) || (arr_27 [i_0 - 2])))), (((arr_31 [i_11] [i_13]) / (((arr_16 [i_0] [i_10] [i_11] [i_12] [i_0]) & -1074467063))))));
                                var_24 += ((var_0 % (max(32505856, 3988540576164338588))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_14 = 3; i_14 < 15;i_14 += 1)
    {
        var_25 += ((((31 ? -4194303 : 593604250))) || 0);
        var_26 *= var_10;
    }
    var_27 = (61189 != 4194303);
    var_28 = ((-((var_4 >> (((max(1, 1074467083)) - 1074467057))))));
    var_29 += (((!var_9) != var_10));
    #pragma endscop
}
