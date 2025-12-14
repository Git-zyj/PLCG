/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_15 = (~(arr_12 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1]));
                                var_16 = ((-6050252253529106847 ? (arr_2 [i_0]) : (arr_0 [i_4])));
                            }
                            var_17 = ((min(18446744073709551613, ((min(2104127915, 6050252253529106847))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_18 = ((min((arr_21 [i_0]), var_2)));
                                arr_23 [i_0] [9] [i_0] [i_6] [i_7] [i_7] [i_7] = (max(((~(~10))), (max(-1, (max((arr_0 [i_0]), var_10))))));
                                var_19 = max(-9, 18068);
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_0] = max((((~(arr_25 [i_0] [i_1] [i_0])))), (((~-6050252253529106847) ? ((((6050252253529106847 < (arr_3 [i_8]))))) : (arr_5 [i_0 - 2]))));
                    var_20 = ((arr_24 [i_0]) ? (max(4230498208549746150, 536608768)) : 6050252253529106847);
                    arr_27 [i_0] = ((!((((arr_16 [i_1] [i_0] [i_0]) ? (arr_25 [6] [i_1] [i_0]) : (arr_25 [i_0] [4] [i_0]))))));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_21 = ((arr_13 [i_0] [i_0] [6] [0] [i_0]) ? ((((max(22741628, var_4))) + (max(-96362232274739078, 6050252253529106847)))) : 4294967286);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_22 = ((max((arr_14 [i_0] [i_0]), var_10)));
                                var_23 = 6613074897111818309;
                                var_24 = ((((((max(14356104480987144213, (arr_7 [i_0] [i_1] [i_10] [i_10])))) ? (arr_33 [i_11 + 1] [i_11 + 1] [i_9] [i_10] [i_11 + 1] [i_10]) : (arr_30 [i_11 - 2] [i_1] [i_11 - 2] [2] [i_0 + 2] [i_11]))) < -8606823248018403414));
                            }
                        }
                    }
                    var_25 = (min(-96362232274739078, ((((((arr_21 [i_1]) ? -6542974194631480119 : 4294967286))) ? (arr_20 [i_9] [i_0 - 3] [3] [13]) : ((var_6 ? (arr_21 [i_0]) : var_0))))));
                    arr_34 [i_0] = max(96362232274739068, (min(211106232532992, ((((arr_10 [i_0] [i_0] [i_9]) < 211106232532992))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_39 [i_0] [3] [i_9] [i_12] [i_13] = ((var_2 - (arr_14 [1] [i_0])));
                                arr_40 [i_0] [i_1] [13] [i_12] [i_0] [9] [i_9] = (arr_18 [i_13] [i_13 - 3] [1] [11] [8] [8]);
                                var_26 = -211106232532992;
                                arr_41 [5] [5] [i_0] [i_0] = (max((arr_11 [i_0] [i_0] [i_0] [i_0]), ((((((arr_9 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1]) ? 2190839398 : var_7))) ? var_2 : (arr_11 [10] [8] [8] [i_12])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_0;
    var_28 = var_2;
    var_29 = (((max((min(var_13, 211106232532997)), (max(var_4, -4230498208549746167)))) <= var_6));
    #pragma endscop
}
