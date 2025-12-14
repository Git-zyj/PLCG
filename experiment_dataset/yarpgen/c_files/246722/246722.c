/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = ((((((-(arr_0 [i_0]))) ? 4294967295 : var_3))));
        arr_2 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = (max(-7, (-127 - 1)));
                    var_11 = 4213297279786570347;
                    arr_11 [i_2] [i_2] [i_2] = ((-(((var_9 ? -1 : 7125539394177866528)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_4] [i_2] [i_5] [i_1] = (((((arr_15 [i_4 - 1] [1] [i_2] [i_4] [i_4 - 1] [i_4]) ? (arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_1]) : (-127 - 1))) ^ (arr_5 [i_4 - 1])));
                                arr_20 [i_1] [i_2] [i_3] [i_2] [i_5] = (max((((~var_4) ? (((var_7 ? (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : -351596086))) : (min((arr_13 [i_2]), var_7)))), (((var_8 ? (arr_18 [i_4 - 1]) : var_7)))));
                                arr_21 [i_2] [i_2] [i_3] [i_4] [i_5] = (min(((((arr_9 [i_5] [i_4 - 1]) ? var_4 : (arr_13 [i_4 - 1])))), (min((arr_9 [i_2] [i_4 - 1]), (arr_13 [i_4 - 1])))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] = (arr_15 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]);
                }
            }
        }
        var_12 = ((((((arr_6 [6] [i_1] [i_1]) + (arr_5 [i_1])))) ? (((!(arr_5 [i_1])))) : (!39)));
    }
    var_13 = (((max(var_0, 230))) ? var_5 : var_0);
    var_14 = ((((var_0 - var_6) ? (var_1 < var_3) : var_1)));
    var_15 = ((((var_6 & var_1) == (~var_2))));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 23;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_16 = var_1;
                            arr_35 [i_6] [i_6] [i_9] [i_9] [i_7] [i_8] = (((((!(arr_15 [1] [i_7] [i_6] [i_8] [i_9] [i_9]))))));
                            arr_36 [i_9] [i_6] [i_6] [i_6 - 1] = ((~(!207)));

                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                            {
                                arr_39 [i_10] [i_6] [i_8] [i_8] [i_7] [i_6] [i_6] = (((59998 ? 29 : 116)));
                                arr_40 [i_6] [i_6 - 3] [i_7] [i_7] [i_8] [i_6] [i_10 + 1] = ((!(15 % 116)));
                            }
                            /* vectorizable */
                            for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                            {
                                arr_43 [i_6] [i_7] [21] [i_9] [i_6] = (arr_25 [i_6]);
                                var_17 += 351596085;
                                var_18 -= (arr_13 [i_6 - 1]);
                            }
                            var_19 = 10999;
                        }
                    }
                }
                arr_44 [i_6] [i_7] = (((((!10991) ^ (var_1 < var_9)))) ? (((arr_13 [i_6 - 1]) ? (arr_13 [i_6 + 1]) : (arr_13 [i_6 - 2]))) : (((((((((arr_9 [i_6] [i_7 - 4]) || -6138425184720355617)))) == 15513081651506404337)))));
            }
        }
    }
    #pragma endscop
}
