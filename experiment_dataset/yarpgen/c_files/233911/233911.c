/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_6 != ((((var_6 >= 16620) > ((var_0 ? 3191 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (arr_3 [i_1] [16] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (arr_14 [i_0] [i_1] [1] [i_3] [i_4] [i_1]);
                                arr_17 [i_1] [i_3 + 1] = -16631;
                                var_13 = (((((var_8 - ((-16621 ? (arr_3 [i_0] [i_3] [i_4]) : (arr_6 [i_1])))))) ? ((0 + (25871 + 29194))) : var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_14 = ((+((min((arr_21 [i_6] [i_6]), 7252)))));
                            var_15 = (arr_25 [i_8] [i_8] [i_8] [i_7]);
                            var_16 = (arr_24 [i_7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_17 = ((((max((((arr_23 [i_5] [6] [i_5]) | var_9)), ((var_4 ? 1 : 2673))))) ? ((16620 ? (((arr_25 [1] [i_6] [1] [i_9]) ? (arr_22 [i_5] [i_5]) : 16383)) : ((min(-16621, var_9))))) : ((((arr_23 [i_5] [i_9] [i_5]) > ((max(-30212, var_6))))))));
                            var_18 = ((((((arr_20 [i_6 - 1] [i_5 - 2]) / (arr_29 [i_5 - 1] [i_5 - 1] [i_9] [21])))) ? ((~(arr_32 [i_6 - 1] [i_6 - 1] [i_9] [i_5 - 2]))) : ((((!(arr_24 [i_9]))) ? (arr_25 [i_9] [i_9] [i_6] [i_9]) : (((arr_23 [i_6] [i_9] [i_10]) & (arr_21 [i_6] [i_5])))))));
                            var_19 = ((+((((((arr_26 [i_5] [i_5] [i_5]) ? (arr_20 [i_5] [i_5]) : -1))) ? ((var_0 ? (arr_24 [i_9]) : (arr_26 [i_5] [i_5] [i_9]))) : ((((arr_28 [i_5 - 2] [i_6 - 1] [i_9] [1]) || 0)))))));
                            var_20 = (~var_1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_21 = ((0 * (var_7 || 18497)));
                            var_22 = (arr_18 [i_5]);
                            arr_37 [i_11] = max(-14199, 16380);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_23 = ((+(max((arr_32 [i_16] [i_15] [i_14] [i_13]), -var_3))));
                            arr_46 [i_16] [0] [i_16] [i_16] [i_16] = (((((min(var_0, (arr_44 [i_15] [i_16] [i_16] [i_16] [i_13])))) || (arr_23 [11] [11] [i_15]))));
                            arr_47 [i_13] [i_13] [i_16] = (min(-16383, 1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        {
                            var_24 = (arr_36 [i_17] [i_14] [i_17] [i_18] [i_17 - 2] [i_14]);
                            arr_54 [i_18] [i_18] [i_17] [i_18] [i_13] = (((((arr_18 [i_18]) ? ((min(1, (arr_51 [i_13] [i_14] [i_17 + 4] [i_18])))) : (((arr_34 [i_18] [i_18] [i_14]) ? (arr_27 [i_18]) : (arr_45 [i_14] [i_14]))))) + ((min((arr_33 [7] [7]), (arr_38 [i_18]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_19 = 2; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_25 = max(var_10, (max((arr_42 [i_19] [i_19 - 2] [i_19 - 2]), (arr_35 [i_19] [i_19] [i_19 + 1] [i_19 - 1]))));
                                var_26 = (max((((arr_31 [i_19 - 2]) ? (arr_31 [i_19 - 2]) : (arr_31 [i_19 - 1]))), ((((arr_43 [i_13] [i_14]) < -16620)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
