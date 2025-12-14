/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (min((min((!var_9), -10924)), (((var_5 || (!-90))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_17 ^= (arr_6 [i_3] [i_3] [8]);
                        var_18 = (~6617347710146693733);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((!((min(var_2, var_2)))));
                        var_20 ^= ((12479 ? -4 : 3377260057));
                        var_21 += ((99 && ((((arr_11 [16] [i_1] [i_1] [i_4] [i_4] [i_1]) ? var_15 : -1022627109)))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_22 = var_13;
                            var_23 = ((-(arr_12 [i_0] [i_2] [i_0] [i_0])));
                            arr_20 [i_6] [i_0] [i_0] = var_15;
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_24 |= (min((max((arr_21 [i_5] [i_5] [i_5] [i_0] [i_0]), 32)), 0));
                            var_25 = ((((+(((arr_8 [i_7] [i_2] [i_2] [i_0]) ? 35548 : (arr_0 [i_0] [i_0]))))) < ((((arr_13 [i_0] [i_1] [i_2] [i_0]) != ((min(254, 54))))))));
                            arr_23 [i_0] [i_5] [i_0] [i_1] [i_0] [i_0] [16] = (arr_21 [10] [i_5] [i_0] [i_1] [i_0]);
                        }
                        var_26 -= 22183;
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_27 = ((var_0 ? (arr_7 [i_0]) : (arr_7 [i_0])));
                        var_28 = (arr_12 [1] [1] [i_2] [i_8]);
                        var_29 += (arr_7 [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_0] [i_0] = (min((min((arr_11 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2]), (((arr_19 [i_2] [i_0] [i_2] [i_0] [1]) * (arr_14 [i_0] [i_1] [i_0] [8]))))), (((-(min(17996, (arr_25 [i_0] [10] [i_2] [i_0]))))))));
                        var_30 = (arr_3 [i_0]);

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_31 = (min(var_31, ((((arr_8 [i_9] [i_9] [i_2] [i_9]) / var_3)))));
                            var_32 ^= -18446744073709551615;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_33 = 1699255644;
                            arr_37 [i_0] [i_0] [i_1] [i_2] [i_9] [i_11] = (arr_15 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_34 = (arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1]);
                        var_35 *= (((arr_1 [i_0] [6]) / 253));
                    }
                    arr_41 [i_0] [i_1] = (arr_17 [i_0] [i_1] [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                var_36 = (max(6617347710146693758, 1));
                var_37 = (((min((((var_8 ? (arr_38 [i_13] [i_13] [i_14] [i_14] [i_14]) : 11))), (min((arr_4 [i_13] [i_13]), var_10)))) + (((var_11 & ((-106 ? var_9 : 110)))))));
                arr_47 [i_13] [i_14] = ((((min(((var_0 ? -10121 : var_9)), ((min(var_12, (arr_2 [i_13]))))))) ? ((-7682586626671400076 / ((max(-97, 2595711651))))) : ((var_0 ? (arr_4 [i_14] [i_13]) : 3925144258))));
            }
        }
    }
    #pragma endscop
}
