/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_2, (((var_8 ? var_4 : ((126 ? 126 : 126))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (((((var_15 ? ((var_0 / (arr_2 [i_0] [13]))) : ((min((arr_3 [i_0]), var_4)))))) ? (max(var_5, (((~(arr_3 [i_0])))))) : 112));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (min(-126, (((var_16 - (arr_4 [i_0] [i_0]))))));
            arr_6 [i_1] [i_1] [i_1] = (((((arr_3 [i_1]) ? (arr_5 [i_0]) : -var_11)) <= var_6));
            var_21 = ((var_5 ? (arr_1 [i_0] [i_1]) : ((min((min((arr_3 [i_0]), 115)), var_7)))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = (max(125, -126));
                        var_22 = (min(var_22, ((min((arr_8 [i_2 + 2] [12]), (((((min((arr_0 [i_2] [i_2]), (arr_9 [i_3] [i_2] [i_2] [i_0] [i_1] [i_0])))) ? (arr_4 [i_2] [i_1]) : 1694))))))));
                    }
                }
            }
        }
        arr_12 [8] = 65535;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_23 = ((0 ? ((-(!0))) : (arr_5 [i_4])));
        var_24 = (-106 % 126);
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] = ((-(!50)));
                    arr_25 [i_5] [i_5] = min((max((arr_16 [i_5]), (!-35184372088832))), (((((((arr_13 [i_6]) >> (var_9 - 20665)))) <= (((arr_5 [i_6]) ? 126 : 0))))));

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_29 [i_5] [7] [i_5] [i_5] = ((((var_14 >= (arr_13 [i_6]))) ? ((max(126, 1))) : var_0));
                        var_25 ^= var_7;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_32 [i_5] [i_7] [i_5] [i_5] = var_14;
                        var_26 = (min((max((arr_7 [i_6] [i_6] [i_6]), ((max((arr_28 [i_5 + 1] [i_6] [i_5 + 1]), 126))))), (((-(((arr_18 [i_7]) ? var_17 : (arr_16 [i_9]))))))));
                        var_27 += var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_39 [i_5] [i_6] [i_5] [i_5] [i_11] [i_5] [i_5] &= (((0 ? (((max(0, (arr_2 [i_5] [i_5]))))) : (max(-8601379518466930165, var_17)))));
                                var_28 = ((-(1 + 112)));
                                var_29 = (min(var_29, ((max((arr_17 [i_5 - 1] [i_10 + 1]), ((((arr_2 [i_7 - 2] [i_7]) ? (arr_16 [i_6]) : (arr_3 [i_5 + 1])))))))));
                                arr_40 [i_10] = ((((((max(0, 1))) ? (((arr_21 [i_5] [i_5]) ? var_7 : var_9)) : ((var_0 ? (arr_28 [i_5] [i_5] [i_5]) : -360011732)))) <= 65515));
                            }
                        }
                    }
                }
            }
        }
        var_30 = var_8;
        var_31 = (min((arr_28 [i_5 + 1] [i_5 + 1] [i_5 - 1]), ((var_11 & (arr_28 [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                {
                    arr_47 [i_5] [i_5] [i_5] [i_13] = (arr_43 [i_5] [i_5] [i_13 - 2]);
                    var_32 = ((-(min(((3018140322 ? 251 : var_8)), -19))));
                }
            }
        }
    }
    #pragma endscop
}
