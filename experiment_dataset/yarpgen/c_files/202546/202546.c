/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (((~((-1798702783 ? -59 : ((max((arr_1 [i_0] [i_0]), 1))))))))));
        arr_4 [i_0] [i_0] = max(((((arr_2 [15]) + ((-(arr_1 [i_0] [i_0])))))), (max((min(1798702766, 1279365985104057219)), ((((arr_1 [i_0] [i_0]) ? (arr_3 [6]) : (arr_3 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [1] [i_2] [i_2] = (min((max(((max(var_8, 1))), (((arr_8 [1] [12] [i_1]) ? (arr_1 [i_2] [i_2]) : (arr_3 [i_2]))))), (arr_10 [i_1])));
            arr_12 [i_1] [i_2] [i_2] = (!(((-(arr_8 [i_1] [i_1] [i_1])))));
        }
        var_16 = max((max((arr_1 [i_1] [i_1]), (arr_10 [i_1]))), ((((arr_7 [i_1]) >= (arr_7 [i_1])))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_17 = (max((arr_9 [i_3] [11]), (arr_6 [i_1])));
                    arr_17 [i_3] [i_3] [i_4] = (max((max((arr_2 [i_1]), (min((arr_6 [i_4]), var_4)))), (arr_13 [i_3 - 1] [i_3] [i_3 + 2])));
                    arr_18 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1] = ((((max((arr_15 [i_1] [i_3] [i_4] [7]), (arr_0 [i_1])))) * ((var_7 ? var_5 : (min((arr_1 [i_1] [i_4]), 0))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (max(var_18, (((var_1 ? (arr_13 [4] [i_1] [i_4]) : (arr_8 [i_1] [i_3 + 1] [i_4]))))));
                        arr_21 [i_1] [i_3 + 1] [i_3] [i_5] [6] = ((-(((arr_14 [i_5] [i_3] [i_1]) ? var_3 : var_12))));
                        arr_22 [i_1] [10] [i_4] [i_5] [i_3] = ((-(arr_8 [i_3 + 3] [i_3 + 3] [i_3 - 1])));
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_25 [i_1] [i_1] [i_3] [i_1] = (((arr_16 [i_6] [i_6 + 2]) ? ((max((arr_10 [8]), (arr_0 [i_4])))) : (((arr_5 [i_3 + 1]) ? (arr_5 [i_3 + 4]) : (arr_5 [i_3 + 1])))));
                        var_19 = (max(var_19, ((min((min((arr_2 [i_6 + 1]), (((arr_24 [i_4] [i_3 - 1]) ? var_12 : (arr_0 [i_1]))))), ((max(((~(arr_9 [i_6] [i_6]))), ((max((arr_13 [i_1] [i_1] [i_4]), (arr_0 [i_1]))))))))))));
                        arr_26 [i_1] [i_4] [i_4] [i_3] = var_4;
                        arr_27 [i_1] [i_3] [3] = (((~(arr_9 [i_1] [i_1]))));
                    }
                }
            }
        }
        arr_28 [i_1] = min(((~(max(16137856497817359918, 1)))), (((arr_24 [1] [i_1]) ? (max(var_6, (arr_9 [i_1] [i_1]))) : 16122497461990035168)));
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        arr_33 [i_7 + 2] = ((!((max((arr_32 [i_7 + 1] [i_7 + 1]), (~-1798702785))))));
        arr_34 [i_7] = (!(var_8 >= var_4));
        arr_35 [i_7 - 1] = (arr_0 [10]);
        arr_36 [i_7 + 1] [i_7 - 1] = ((!((min((max((arr_32 [i_7 + 2] [i_7]), (arr_19 [i_7] [2] [i_7 + 1] [i_7 - 2] [i_7]))), var_11)))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((!(((((min(255, (arr_37 [i_10])))) ? (((arr_1 [i_8] [i_9]) * (arr_29 [i_8]))) : 159))))))));
                                arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((~(max((arr_9 [i_11] [i_11]), ((-(arr_3 [i_8])))))));
                            }
                        }
                    }
                    var_21 -= (((min(8571620594160536319, 9)) < ((((arr_44 [i_8] [i_8] [i_10] [i_9 - 1]) ? 1 : -32609)))));
                    var_22 ^= (((arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1]) & (((arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : var_0))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_23 = ((-(arr_48 [i_8] [i_8] [i_8])));
                        arr_59 [i_8] = var_3;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 3; i_16 < 18;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                {
                    arr_68 [i_18] [i_16] [i_16] [i_16 - 2] = ((((arr_2 [i_16 + 2]) / (arr_3 [i_16 + 2]))) | (arr_1 [i_16 + 2] [i_18]));
                    arr_69 [i_16 - 3] [i_16] [i_16] [i_16] = (min(((min((max((arr_62 [i_16] [i_17]), (arr_64 [i_16] [i_17] [i_16]))), (arr_0 [i_16 + 1])))), (min((max((arr_67 [i_16] [1] [i_17] [i_18]), (arr_60 [i_18]))), (((-(arr_2 [i_16]))))))));
                    var_24 = (min(var_24, (!1)));
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
