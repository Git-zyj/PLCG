/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 ^= var_5;
                    arr_11 [i_1] [i_0] = (arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 += (~14300);
                                var_21 = (arr_15 [i_0] [i_2] [i_0] [7] [i_4] [7]);
                                var_22 = ((((max(-14301, 37660722)))) ? (((4257306573 - ((max(var_4, (arr_6 [7] [7] [7]))))))) : (arr_1 [i_0]));
                                var_23 -= (max((((arr_18 [i_0] [i_0] [i_0] [i_0]) ? (arr_17 [i_0] [i_1] [i_1] [i_3]) : ((var_4 ? var_7 : (arr_7 [i_1] [i_1] [i_1]))))), (((-96 > 3963890210) / 37660725))));
                                arr_19 [i_0] = 32764;
                            }
                        }
                    }
                    var_24 = (((arr_5 [i_1] [i_0]) ? (max((arr_12 [i_0] [i_1]), (4103001262 & 467522473))) : 113));
                    var_25 = (max(var_25, (arr_17 [i_0] [i_1] [i_1] [i_2])));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_26 = (((((4257306589 ? 1101635090 : 118))) ? ((var_4 ? (((~(arr_8 [i_7])))) : var_0)) : ((((max(37660722, var_17)))))));
                                arr_31 [i_5] [i_5] [i_7] = ((!(~-114)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_27 *= (max((arr_23 [4] [i_6]), (arr_12 [i_5] [i_10])));
                                var_28 = (max(var_28, (((((var_12 | var_11) > (arr_27 [i_10] [i_10]))) ? (((~((14311 ? (arr_18 [15] [i_6] [i_6] [i_10]) : -123))))) : (max((((arr_28 [2] [i_6] [i_7] [i_5] [i_11] [4] [i_6]) >> 0)), (4257306571 >= var_6)))))));
                                var_29 = (max((((arr_22 [i_6] [i_10] [i_11]) >= ((45 ? var_12 : (arr_27 [i_5] [i_6]))))), ((!(arr_9 [i_10] [9] [i_7] [i_10])))));
                                var_30 = arr_8 [i_7];
                                var_31 = (max(var_31, (arr_34 [i_10] [i_10] [i_10] [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_32 = (((arr_43 [i_13] [i_12] [i_6] [i_5]) << (((max((~var_7), (var_11 | var_6))) - 788602683))));
                                var_33 = (((arr_32 [i_7] [i_13] [i_7] [i_12] [i_7]) ? (arr_32 [i_7] [i_5] [i_5] [i_5] [i_5]) : (!var_16)));
                            }
                        }
                    }
                }
            }
        }
        arr_45 [i_5] = ((((((4294967289 / (arr_17 [i_5] [i_5] [i_5] [12]))))) ? (0 / var_13) : ((max(3499829003, 3450118226)))));
    }
    var_34 = var_6;
    #pragma endscop
}
