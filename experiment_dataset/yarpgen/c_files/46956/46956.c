/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [18] [i_1] [i_0] = (max(3052309223, ((((~5) <= ((-(arr_0 [i_2] [i_3]))))))));
                                var_20 += ((((min((arr_6 [i_3 + 3] [i_3 + 3] [i_3] [i_3]), (arr_6 [i_3 + 3] [i_4 + 1] [i_3 + 3] [i_4])))) ? (((arr_6 [i_3 + 3] [i_4] [i_4] [i_4]) ? (arr_6 [i_3 + 3] [4] [4] [i_4]) : (arr_6 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3]))) : 120));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 += (arr_11 [i_0] [i_1] [i_0] [i_6] [i_6 - 1] [i_7]);
                                arr_20 [i_1] [i_5 + 1] = var_16;
                                arr_21 [19] [i_1] [i_1] [i_1] [16] [i_6] [21] = ((~(arr_6 [i_5] [i_5] [i_1] [i_0])));
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_5 + 2] [i_6 + 1] [3] = (arr_19 [i_7] [i_1] [i_1] [i_0]);
                                arr_23 [i_0] [i_1] [i_1] [i_6] [i_7] = (max(-var_1, ((min((arr_16 [i_5 + 2] [i_1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7 - 1]), (!64))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_22 = arr_5 [i_0] [i_1] [i_0];
                                var_23 *= min((((((120 >> (((arr_6 [12] [i_8] [5] [2]) - 131))))) / (arr_7 [i_10]))), (((-(arr_28 [i_10])))));
                                var_24 = ((((min((((203 ? (arr_19 [i_10] [i_1] [i_1] [i_0]) : (arr_30 [i_0] [i_1] [i_8])))), (min(3199387273, 7666))))) ? 13 : ((((arr_27 [i_0] [i_1] [i_1] [i_8] [i_9] [i_10]) ? (arr_27 [i_1] [i_1] [i_8] [i_9] [i_10] [i_10]) : (arr_1 [i_0] [i_9]))))));
                                arr_32 [i_0] [i_1] [i_1] [i_8] [10] [i_1] [i_10] = (arr_10 [i_8] [i_1]);
                                arr_33 [i_0] [i_0] &= (!-1424194357);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_49 [i_14] [i_14] [i_13] [i_14 + 1] [i_15] = 1949270567362707782;
                                var_25 += (min((((1242658075 - (arr_48 [i_11] [i_12] [i_13 + 1] [i_11] [i_15] [i_11])))), (((arr_27 [i_11] [i_11] [i_13 - 1] [i_14] [i_15] [0]) ? (arr_34 [i_13 + 1]) : 9298070721856319605))));
                                var_26 = (arr_43 [i_11] [i_12] [i_13 - 1] [i_14]);
                                arr_50 [i_15] [i_14] [2] [i_14] [i_11] = ((!((((((arr_25 [i_14]) || 6016))) <= (~-14331)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_27 -= (max((arr_9 [i_13] [i_16]), 35));
                                var_28 += ((max((arr_8 [i_11] [i_12] [i_11] [i_17 - 2]), 9298070721856319617)) <= (arr_18 [4]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
