/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 + 1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [23] = (((0 || 0) ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 - 1])));
        arr_5 [i_0] = var_17;
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_19 = (min(var_19, (max(((max(var_10, (min(1058855380, 0))))), ((((((-1058855380 + 2147483647) << 0))) ? (max(18, (arr_3 [i_1]))) : (((0 ? 1 : -6004671167543556847)))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_20 = (max(var_20, ((min(((~((~(arr_6 [i_1] [i_4]))))), (((((max(var_7, 31))) ? ((((arr_11 [4] [i_1]) >= var_17))) : 1))))))));
                        var_21 = (arr_12 [i_3] [i_1 + 3]);
                        var_22 = (min(var_22, (((~((var_4 ? ((((arr_12 [i_2] [1]) || -6464))) : 1)))))));
                        arr_14 [i_3] [i_2] = (min((((!(arr_13 [i_1 - 3] [3] [i_1] [10] [i_1 - 1])))), ((((arr_0 [i_1]) / (arr_10 [i_1] [i_2]))))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_23 = (min(var_23, (((((((arr_17 [i_1] [i_2] [0] [2] [i_1] [i_4] [i_2]) ? (arr_13 [i_1] [i_2] [13] [i_4] [i_5]) : (arr_17 [i_1] [1] [i_1] [i_1 + 2] [i_1] [4] [4])))) && (arr_13 [i_1] [i_2] [i_3] [i_4] [i_5]))))));
                            arr_18 [i_1] [i_2] [i_3] [7] [7] [5] = ((((arr_7 [i_1 - 3]) ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 - 2]))) < 80);
                            arr_19 [i_3] [14] [i_3] [i_4] [14] [13] [6] = (arr_7 [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 = (min(var_24, ((((((max((arr_22 [1] [i_2] [i_2] [8] [1] [6] [2]), (arr_6 [i_1] [7]))))) ? ((var_3 ? (arr_17 [i_1 + 3] [i_1 + 1] [i_1 - 4] [4] [1] [8] [i_6]) : (arr_17 [i_1 - 4] [i_1 + 2] [i_1 + 1] [i_4] [i_4] [14] [7]))) : ((((max(var_15, (arr_21 [5] [14])))) ? (arr_16 [i_1] [i_2]) : ((max((arr_15 [i_1] [6] [i_3] [i_4] [1] [1]), 1))))))))));
                            arr_23 [i_3] = ((!(arr_15 [i_1 + 4] [i_1 + 4] [i_1 - 2] [i_1 + 3] [i_1 - 3] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_25 = (min(var_25, (((((((arr_2 [i_7]) == 880997309))) + ((max(0, -30071))))))));
        arr_27 [15] = ((((((arr_1 [23]) && -125))) >= ((~(arr_1 [i_7])))));
        var_26 = (min(var_26, (((-((~(((arr_25 [0] [i_7]) ^ (arr_0 [9]))))))))));

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 23;i_10 += 1)
                {
                    {
                        var_27 = arr_28 [12] [i_8];

                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            var_28 = (arr_26 [10]);
                            var_29 = (max(var_29, ((((-(arr_39 [i_9 + 3] [i_11 - 2] [6] [i_11] [11])))))));
                            var_30 = (((arr_35 [i_8] [i_8] [i_9 - 1] [i_11]) ? ((~(max((arr_2 [i_10]), 1293682262)))) : (arr_0 [i_9])));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_43 [i_7] [i_7] [i_8] [i_8] [14] [i_12] = (~-30037);
                            arr_44 [i_7] [i_8] [i_9] [2] [i_8] = var_2;
                        }
                    }
                }
            }
            var_31 = (max(((((arr_40 [19] [1] [i_7] [i_7] [i_8] [1] [i_8]) || (arr_24 [i_7] [i_8])))), (max(((min(134, (arr_35 [i_8] [1] [i_8] [i_7])))), (~var_12)))));
        }
    }
    #pragma endscop
}
