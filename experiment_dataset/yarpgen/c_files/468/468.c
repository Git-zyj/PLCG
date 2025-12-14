/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_19 = ((!(arr_7 [i_1])));
                    var_20 = ((-(arr_3 [i_1] [i_1])));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [1] = ((((max(var_1, (((arr_3 [3] [3]) ? (arr_3 [i_0] [21]) : var_8))))) ? ((((((arr_5 [2] [i_1] [i_0]) << (((arr_3 [i_3] [i_0]) + 1061444632500048620))))) ? ((((arr_4 [11]) || (arr_1 [i_0] [i_0])))) : var_4)) : (((!(arr_4 [i_1]))))));
                    var_21 += ((!(((1 ? -var_1 : (arr_5 [i_0] [i_1] [i_1]))))));
                    var_22 = 1273913690433850499;
                    var_23 = (min((arr_0 [i_0]), 12));
                }

                for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_5] = ((-(arr_8 [i_0] [i_4 - 1])));
                        var_24 = (((arr_4 [i_4 - 4]) ? (arr_10 [i_4 - 3] [i_4 + 2] [i_4 - 1] [i_4 - 1]) : (arr_10 [i_4 - 4] [i_4 - 1] [i_4 + 2] [i_4 + 2])));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 = ((((1 ? (arr_5 [20] [i_1] [i_4 - 3]) : var_0)) >> (((((var_9 + 9223372036854775807) << (((((arr_3 [i_0] [i_6]) + 1061444632500048580)) - 23)))) - 5836491406845444447))));
                            var_26 = (min(var_26, ((((var_14 ? 1 : var_6))))));
                            var_27 = ((arr_20 [i_4] [6] [i_7] [i_4 - 1] [i_4]) ? (((arr_2 [i_1] [i_6]) / (arr_21 [i_0] [i_1] [i_4 + 3] [i_6] [7]))) : var_8);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_25 [i_8] [16] [i_6] [i_4] [i_1] [i_0] [i_0] = ((((-(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((~(arr_12 [0]))) : (((-1022049664239563284 ? 1 : var_8))));
                            var_28 *= ((((((arr_2 [i_8] [i_1]) < 0))) << (((arr_1 [i_0] [i_1]) + 1505234689025760170))));
                            var_29 = (min(var_29, 1));
                            var_30 = (arr_5 [i_1] [i_4 - 4] [i_1]);
                        }

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_31 = ((((((var_2 <= (arr_18 [i_4 - 1] [i_4 - 1] [i_4 - 4] [i_4 + 2] [i_4 + 1]))))) != ((((max(var_1, (arr_19 [i_1])))) ? (arr_20 [i_9] [i_6] [i_1] [i_1] [i_0]) : 1))));
                            arr_28 [6] [i_1] [i_4] [i_6] [i_6] [i_9] = -26261;
                            arr_29 [i_0] [i_1] [i_1] [i_1] [i_4 - 3] [i_6] [i_1] = ((-(((arr_9 [i_9] [10]) | var_6))));
                            var_32 = max(-1014757148773098387, 0);
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            arr_33 [i_0] [i_0] = (((((!(((1 ? (arr_32 [i_0] [i_0] [2] [i_0] [i_0]) : var_14)))))) >= 1));
                            var_33 -= (((((var_6 >= (arr_32 [i_0] [i_0] [i_4] [i_6] [i_10])))) << (((arr_10 [i_0] [i_4 + 1] [i_6] [i_10]) + 2568))));
                            var_34 = (((arr_31 [i_4 + 1] [i_4 + 1] [i_4 - 4] [i_4] [i_4]) | (((arr_27 [i_4 - 4] [i_4 - 1] [i_6]) << (((arr_27 [i_4 - 4] [i_10 - 1] [i_10 + 4]) - 5701679440805582944))))));
                        }
                        arr_34 [1] [12] [i_4 + 2] [i_4 + 3] [i_6] = (1 | 1);
                    }
                    var_35 = ((((var_12 ? (arr_16 [20] [20] [i_1] [i_4] [i_4 + 3]) : (arr_26 [i_4] [i_4] [i_4 - 3] [i_4] [i_4 + 3] [i_4 - 1] [i_4])))) ? -1 : ((-(arr_30 [i_4] [i_4 + 2] [i_4 - 2] [i_4] [i_4 - 3] [i_4 + 2] [i_4]))));
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_0] [i_0] = 1;
                    arr_40 [i_0] [i_1] [i_11] [i_11] |= (((arr_9 [i_11 - 2] [i_11 - 1]) ? (arr_9 [i_11 - 4] [i_11 - 3]) : (arr_9 [i_11 - 3] [i_11 + 1])));

                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        var_36 = (max(var_36, var_14));
                        var_37 = (max(var_37, (((!(arr_32 [i_12 + 1] [i_11 - 3] [14] [i_11 - 4] [i_11 - 4]))))));
                        var_38 = (((arr_26 [i_11] [i_11] [i_12] [i_11] [i_1] [i_1] [i_12 + 3]) ? 274877906943 : 249));
                    }
                    var_39 = (((arr_35 [i_11 - 4] [i_11 + 2] [i_11] [i_11 - 3]) & (!var_9)));
                }
                for (int i_13 = 4; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    var_40 = (max((((((min((arr_37 [i_13 - 2] [i_13]), (arr_16 [i_0] [i_1] [i_0] [i_0] [i_13])))) ? ((max(var_5, 233))) : ((min(var_15, (arr_2 [i_0] [i_0]))))))), ((-var_5 ? ((-(arr_3 [i_0] [i_13 + 1]))) : var_10))));

                    /* vectorizable */
                    for (int i_14 = 4; i_14 < 20;i_14 += 1)
                    {
                        var_41 += ((-(arr_37 [i_0] [i_0])));
                        var_42 = (!var_12);
                    }
                    arr_47 [i_0] [i_0] [i_13 - 3] [i_13] = ((-9223372036854775788 ? 17 : (~-8)));
                }
            }
        }
    }
    var_43 = ((-(min(var_0, var_1))));
    var_44 = var_3;
    #pragma endscop
}
