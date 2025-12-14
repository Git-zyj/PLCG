/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 *= ((!((max((arr_3 [i_0] [i_0] [i_0]), (min(3894716654160497412, 251)))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_1] = ((1 || (arr_3 [i_0] [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 &= (~-7524036684761702322);

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = (max(((var_12 ? 33521664 : (((arr_9 [i_2] [i_2]) | 1)))), var_0));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = (var_10 ? ((((var_10 > var_17) ? (var_5 == 47586) : (((arr_11 [19] [i_4]) ? (arr_12 [i_4] [i_3] [i_4] [i_5 + 1]) : (arr_11 [i_2] [i_4])))))) : (arr_19 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5]));
                                arr_21 [i_2] [i_3] [i_4] [i_2] [i_6] [i_3] [i_3] = 17950;
                                var_24 = 17950;
                                var_25 = 1;
                                arr_22 [19] [i_4] [i_4] [i_4] [18] = (max((min((((16992560805388079286 || (arr_14 [i_2] [i_2] [i_2] [i_2] [i_4])))), (((arr_6 [i_2]) ? 47586 : 1)))), ((((arr_18 [i_2] [i_4] [14] [i_5 + 1] [i_5 + 1]) || (arr_18 [i_5 - 1] [i_4] [i_5] [i_5 + 1] [i_5 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_26 = (max((arr_19 [i_2] [i_3] [i_2] [i_7] [i_8]), (((arr_19 [i_2] [i_3] [i_4] [17] [i_8]) ? (arr_19 [i_2] [i_2] [i_4] [i_7] [i_8]) : (arr_19 [i_2] [i_3] [i_4] [i_7] [i_8])))));
                                arr_30 [i_2] [i_3] [i_3] [i_4] = ((~(~53934)));
                                var_27 = (min(var_6, (arr_15 [i_2] [i_3] [i_4] [i_7] [i_3])));
                                arr_31 [i_4] = (arr_11 [i_3] [i_4]);
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    arr_34 [i_3] [i_9] = (arr_32 [i_2] [i_3] [i_9 + 3] [i_9]);
                    var_28 = ((!(!286572889)));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_29 = (((~180) ? (((min(-7762797063436966923, 286572889)))) : 1));
                    arr_38 [i_10] [i_3] [12] = (((((var_11 ? var_0 : 250))) ? ((max((arr_23 [i_2] [i_3] [i_3] [i_3] [i_10]), 51779))) : 42468));
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_48 [i_2] [i_2] [13] [13] [i_13] = 10512;
                                var_30 = 5679877471714988661;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
