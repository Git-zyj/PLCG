/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0 - 2] [i_1] [i_2 + 1] [i_1] &= (((arr_2 [i_0 + 2]) == -8530965470441413539));
                        var_10 = var_3;
                        arr_10 [i_0] [i_1] [i_0] [i_3] = var_4;
                    }
                }
            }
        }
        arr_11 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = var_0;
        arr_15 [i_4] = ((arr_4 [i_4 - 1] [i_4]) ? (((var_4 ? (arr_3 [17]) : (arr_13 [i_4])))) : var_6);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_11 += (((arr_21 [i_6 + 1] [i_7 + 1]) ? (((arr_0 [i_5] [i_5]) >> (((arr_22 [i_7 + 1] [i_6] [i_5]) + 109)))) : (((var_6 ? 4294967168 : var_0)))));

                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_27 [i_5] [i_6 + 2] [i_7] [i_8] = (((~(arr_5 [i_8] [i_5] [i_5] [i_5]))));
                        arr_28 [i_7] [i_7] [i_7] &= (arr_22 [i_8 - 1] [i_6] [i_5]);
                        var_12 = 4294967173;
                        var_13 = (min(var_13, (arr_25 [i_5] [i_6] [i_6] [i_8])));
                    }
                    arr_29 [i_5] [i_5] [i_5] = -1262932782;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_36 [i_5] [i_6] [i_7] [i_6] [8] = (~var_7);
                                var_14 *= (((4294967167 > -5) != (arr_20 [i_6] [i_6 + 2] [i_6 - 1])));
                                arr_37 [0] [0] [i_10] [4] [i_10 - 1] = ((var_8 << (((arr_35 [i_10] [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 2] [i_10 + 2]) - 60))));
                                arr_38 [i_5] [i_6] [i_6] [i_6] [i_9] [i_9] = var_5;
                                arr_39 [i_5] = ((((-(arr_17 [i_10 + 3])))) ? (arr_19 [i_9]) : (!1492301417187525391));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_15 = ((arr_6 [i_5] [i_6 - 1] [i_5] [i_6 - 1]) | 878830391);
                                arr_47 [i_6] = var_4;
                                arr_48 [i_13] [i_12] [i_11] [i_6] [i_5] |= (((arr_7 [i_5] [i_5] [i_11] [11]) >> ((((~(arr_43 [9]))) + 60528))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_16 = ((var_3 ? (((arr_4 [i_5] [i_11]) ? var_1 : (arr_12 [i_6] [i_11 - 1]))) : (arr_43 [i_15])));
                                arr_54 [i_14] [i_6 + 1] [i_14] [i_6 + 1] [i_6 + 1] = var_7;
                                arr_55 [i_15] [i_11] [11] [i_11] [i_5] [i_5] = (((!var_4) > (arr_7 [i_14] [i_14 + 1] [i_14] [i_14])));
                            }
                        }
                    }
                }
                arr_56 [11] = ((!(((((min((arr_8 [7] [i_6]), var_5))) / ((-1551524787297891290 ? var_1 : 34359738336)))))));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_17 += (((((arr_6 [i_17] [i_16 - 1] [i_16 - 1] [i_16 - 1]) >> (34359738344 - 34359738330))) * var_5));
                            var_18 = (min((min((arr_51 [i_5] [i_5] [i_16 - 1] [i_16] [3] [i_16]), (arr_51 [i_5] [i_5] [i_16 - 1] [i_16 - 1] [i_16] [i_17]))), (((!(arr_51 [i_16] [i_16] [i_16 - 1] [i_16] [i_17] [i_17]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 |= (max(var_8, var_2));
    #pragma endscop
}
