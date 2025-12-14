/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (!11552)));
    var_20 = max(var_6, (max(var_17, (max(var_9, var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (max(var_21, -var_15));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_22 = ((var_13 ^ (arr_0 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, (arr_0 [i_0 + 2])));
                                var_24 = ((((max((arr_2 [i_0] [i_0 + 2]), var_18))) ? var_4 : ((max((arr_4 [i_0] [i_0 - 1] [7]), var_9)))));
                                var_25 -= (!-var_5);
                                var_26 = (min(var_26, (((var_12 << (((arr_4 [i_0 + 2] [i_0 + 2] [i_2]) - 2133)))))));
                            }
                        }
                    }
                    var_27 = (max(var_12, 9393));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_28 = (max(((max(var_12, (arr_3 [i_5 + 1] [i_0 + 2] [i_2])))), (((arr_3 [i_5 + 1] [i_0 + 2] [i_2]) & (arr_3 [i_5 + 1] [i_0 + 2] [8])))));
                                var_29 = ((~(arr_9 [i_0 + 2] [7] [i_2] [i_0] [i_1])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_30 = (min(var_30, (arr_23 [i_8 - 1] [i_8] [i_8] [9] [i_9 - 1] [i_9])));
                                var_31 = (((arr_0 [i_0 - 1]) ? (arr_12 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8]) : 28149));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_32 = (((arr_14 [i_0 + 1] [i_10] [i_11 + 1] [i_11 + 1] [i_0 + 1]) ? (arr_25 [i_0] [i_0 + 2]) : var_12));
                                var_33 += (((arr_10 [i_10] [4] [i_0 - 1]) ? var_15 : (arr_10 [i_10] [14] [i_0 + 2])));
                                var_34 = (25073 + 9679);
                                var_35 = (((-24802 + 2147483647) << (var_18 - 5973)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_36 = ((((max(-11552, var_3))) ? (arr_25 [i_12 + 2] [0]) : var_13));
                                var_37 = ((((max((arr_36 [i_14] [i_13] [i_12] [i_1] [i_0 + 1]), -32759))) ? ((~(arr_10 [i_14] [i_12 + 1] [i_12 - 1]))) : (((arr_21 [i_1] [i_12 - 1] [i_13 - 2] [i_14]) ? (((arr_33 [i_0] [i_12] [i_13] [i_14]) ? (arr_25 [i_0] [i_0]) : 32767)) : 9746))));
                                var_38 = (~-32759);
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = var_4;
    #pragma endscop
}
