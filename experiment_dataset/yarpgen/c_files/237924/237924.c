/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_1 + var_6) > var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_15 - 864691128455135232) ? (((((arr_0 [i_0]) != var_9)))) : ((var_13 ? 864691128455135264 : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_0])));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_19 *= (!var_14);
                        arr_10 [i_0] = (~-864691128455135255);

                        for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_4] [i_1] [i_2] [i_4] [i_1] [i_1] [i_4] = ((var_11 ? (((arr_9 [i_0] [i_1] [i_2] [i_3]) ? var_8 : -1)) : -1471604987));
                            var_20 = (((var_5 - var_15) - (14 ^ -15)));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] [3] = (((arr_4 [i_4 + 1] [i_1]) ? (arr_7 [i_4 + 2] [i_4 + 1] [i_4 - 3] [i_4]) : (arr_1 [i_4 + 2])));
                        }
                        for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_2] [i_0] = ((((-15 ? var_10 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_5 - 3] [i_5 - 2] [i_5 - 3])));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5 - 1] = (((arr_12 [i_0] [i_1] [i_1] [i_3] [i_5 + 2] [i_5 + 2]) ? (((arr_9 [i_2] [i_2] [i_1] [i_0]) ? (arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] [i_5]) : 15)) : var_12));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_21 = var_7;
                            var_22 = 1;
                            var_23 = ((((((arr_16 [i_6] [i_6]) ? var_2 : (arr_5 [i_1] [i_1] [i_1])))) ? (arr_16 [i_0] [i_1]) : ((1 ? 10 : 1))));
                        }
                        var_24 ^= (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_11 [i_2] [i_3] [i_2] [i_1] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_25 = -864691128455135275;
                        arr_26 [i_0] [i_1] [i_1] [i_1] [i_0] = (17616629916763491278 > var_4);
                        var_26 = (((arr_13 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_0]) ? (arr_13 [i_7] [1] [i_0] [i_1] [i_0] [i_0] [i_0]) : var_11));
                        var_27 = (max(var_27, (arr_4 [i_1] [i_1])));
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_1] = ((~4984403030478497443) ? var_1 : (arr_12 [i_8 + 4] [i_8] [i_8] [i_8 + 3] [i_8] [i_8 + 3]));
                            var_28 = ((var_12 - (arr_13 [i_0] [i_1] [i_2] [i_9] [i_2] [i_9] [2])));
                            arr_32 [i_0] [i_8] = ((var_15 || (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_33 [i_0] [i_0] [16] [i_8 + 4] [1] = 87;
                        }
                        arr_34 [i_8] [i_2] [i_2] [i_2] [i_1] [i_0] = (arr_25 [i_8] [7] [7] [i_8] [i_8 + 1]);
                        var_29 = ((-(var_7 | var_1)));
                        var_30 = 10260;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_31 = ((((((arr_23 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0]) && var_4))) - ((((arr_27 [i_10] [i_10] [i_0] [i_0] [i_0]) || (arr_7 [i_0] [i_2] [i_0] [i_0]))))));
                        arr_39 [i_10] [i_0] [i_2] [i_0] [i_0] = (arr_23 [i_0] [i_1] [i_1] [i_10] [i_2] [i_0]);
                        arr_40 [15] [i_1] = ((~-10903) ? (15 > var_5) : (((arr_27 [i_0] [i_1] [i_1] [i_10] [i_1]) - (arr_17 [i_10] [i_0]))));
                    }
                }
            }
        }
        var_32 *= (((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) + 15)) : ((var_5 >> (((arr_7 [7] [12] [7] [7]) - 82))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] [i_11] = (473681392107621694 || -15);
        arr_44 [i_11] = (arr_3 [i_11] [i_11] [i_11]);
        var_33 = (var_0 ? (arr_28 [i_11] [i_11] [i_11]) : (arr_28 [i_11] [i_11] [i_11]));
    }
    #pragma endscop
}
