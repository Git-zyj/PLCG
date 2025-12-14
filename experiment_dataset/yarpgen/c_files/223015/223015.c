/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = var_2;

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_19 = 3164299634828036792;
                    var_20 = (min((min(16818126969688232297, 2704142293)), (!2704142293)));
                    arr_7 [i_0] = (((!3824754452) && (((var_15 ? (((max(var_4, 1)))) : 12381655840274067996)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((!((((!1527) & (!8206282625730845539)))))))));
                                var_22 = (max(var_22, ((~(arr_9 [i_4 - 2] [1] [1] [i_4] [i_4 + 2])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_5] [i_0] [i_5] [i_6] [i_6] [i_5] |= arr_12 [i_0] [i_0] [i_5] [i_6];
                        arr_23 [i_0] [i_0] [i_1] [i_6] = 17;
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, var_7));
                        var_24 = (((((((arr_21 [i_0] [i_0] [i_0] [i_7] [i_0]) == (max((arr_11 [i_0] [i_1] [i_5] [0] [i_7] [0]), var_15)))))) != 662503304));
                        var_25 = (max(1966080, -1821536869995185314));
                    }

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_26 -= (((!2201719266071834342) == var_13));
                        var_27 ^= 662503283;
                    }
                    arr_30 [i_0] [i_0] [i_0] [i_0] = (var_4 ? 16245024807637717273 : var_0);
                    arr_31 [i_0] [i_0] [0] [15] = 1590824993;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_28 = ((-((411077155592188787 ? var_15 : var_7))));
                    var_29 = (-var_13 - 3632463991);
                    arr_35 [i_0] [i_0] = (min(((-(~11847940192894500785))), (!5443015619042415394)));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_30 += (arr_13 [i_0] [i_0] [i_1] [i_1] [7] [i_10]);
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_31 = (!3981404814);
                                var_32 = ((((16245024807637717258 & (arr_2 [i_0]))) << (((arr_8 [13] [i_0] [1] [i_0]) - 18446744072667957392))));
                                var_33 &= arr_37 [i_0] [i_1];
                                arr_43 [i_0] [i_1] [i_10] [i_0] [12] [i_12] = (arr_4 [i_1] [i_10]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_51 [i_0] [i_0] = (min(var_9, 3981404801));
                                var_34 = (max(var_34, (((!((min(2374765052, (arr_17 [i_13])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
