/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (-32767 - 1);
        var_20 = 3482965994544299705;
    }
    var_21 = var_8;
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] = var_4;
                                arr_19 [i_2] [i_3] [i_2] = (arr_12 [6] [i_2] [i_2]);
                                arr_20 [19] [i_2] = (var_17 < (((arr_15 [i_1 + 1] [i_1] [i_1 + 3] [i_1 - 2]) ? (((arr_10 [i_5] [i_5] [i_5] [i_5]) ? (arr_4 [i_1 + 2] [i_1]) : (arr_15 [i_1] [i_1] [i_3] [i_4]))) : (max(var_4, 3482965994544299711)))));
                            }
                        }
                    }
                    var_22 = min((((arr_14 [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_2]) ? (arr_5 [i_1 + 1] [i_2] [i_1 + 3]) : (arr_14 [i_1 - 1] [i_2] [i_3] [i_3] [i_3]))), (((((-117 ? (arr_12 [i_1] [i_2] [i_2]) : 1661254389))) ? ((min(var_0, (arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))) : (((arr_12 [i_1] [i_2] [i_2]) ? (arr_15 [i_1] [i_2] [i_3] [i_2]) : 92)))));
                    var_23 = (((arr_3 [i_1 - 2]) ? ((((!(arr_5 [i_1] [i_2] [i_3]))))) : (arr_16 [i_3] [i_3] [i_2] [i_1])));
                    var_24 = (arr_7 [i_1] [i_3]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_25 = (arr_4 [i_6] [i_8]);
                    arr_31 [i_6] [i_6] [i_8] = var_14;
                    var_26 = ((((~(arr_3 [i_8]))) < ((3 ? (arr_8 [i_6] [i_7]) : (arr_3 [i_8])))));
                    var_27 = (max(((((((arr_14 [i_6] [i_6] [i_7] [i_6] [i_8]) ? 1661254389 : var_18))) ? (((arr_24 [i_6] [10]) ? var_6 : (arr_12 [i_6] [i_7] [i_6]))) : var_16)), (((arr_3 [i_7]) ? ((min(242, 0))) : (arr_17 [i_6] [i_7] [i_8] [7] [i_7] [i_6] [18])))));
                    var_28 = (var_18 / var_15);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_29 = ((((((arr_36 [i_7] [i_7] [i_7] [i_7] [i_6]) ? -109 : var_9))) ? 1661254389 : (((((arr_39 [i_9] [i_7] [i_9] [i_10] [i_7] [i_7]) || 98))))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_43 [i_6] [i_7] [i_9] [i_6] [i_7] = var_13;
                            arr_44 [i_6] [14] [i_7] [i_7] [i_6] = ((1832434088 || ((((arr_22 [i_6]) / var_11)))));
                            var_30 = ((var_12 ? (arr_36 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_36 [i_6] [i_7] [i_9] [i_10] [i_6])));
                            var_31 = (arr_22 [i_6]);
                            arr_45 [i_6] [i_7] [i_9] [i_6] [i_6] = var_12;
                        }
                    }
                    arr_46 [i_6] = (7 ? var_1 : (arr_34 [i_9] [i_6] [i_6] [i_6]));
                }
                arr_47 [i_6] [i_6] = (((((-(arr_6 [i_6] [i_7])))) ? (((arr_16 [i_6] [i_6] [i_7] [i_7]) ? (max(8592, (arr_3 [i_7]))) : (117 || 233))) : (min(14963778079165251911, (~36)))));
            }
        }
    }
    #pragma endscop
}
