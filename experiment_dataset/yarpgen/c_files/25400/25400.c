/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (-(min(((-(arr_0 [i_1] [i_2]))), (arr_3 [i_1] [i_1]))));
                    arr_8 [8] [i_2] [i_1] [14] = (!1079794765925132955);
                    var_18 = (min(var_18, (arr_1 [i_1 - 3])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 -= (max(((((268435455 ? 1100023665146512238 : 17346720408563039377)) | (arr_0 [i_0] [i_0]))), ((min(((~(arr_0 [i_0] [i_1]))), var_6)))));
                                var_20 = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_20 [i_0] [i_1] [9] [9] [i_1] [1] [i_6])));
                                var_22 = (min(38, (arr_17 [i_1 + 1] [i_1 - 1])));
                                var_23 = (min(var_23, ((((arr_10 [i_0] [i_1] [i_2] [i_5] [i_5]) == (((((!(arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] [15] [i_6]))) ? (((1304124264105696276 < (arr_19 [19] [i_0] [i_1] [i_2] [12] [18] [i_1])))) : 218))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_12;
    var_25 *= var_16;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_7] |= ((17346720408563039377 | 251) ? (min((arr_21 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]), 17)) : (((arr_17 [i_7] [i_7]) + (arr_7 [i_8] [1] [1] [i_7]))));
                var_26 = (max(((var_10 ? 2835919533537723320 : (arr_6 [i_7] [9] [i_8]))), ((max((arr_6 [i_7] [i_7] [i_8]), (arr_6 [i_7] [i_8] [i_8]))))));
                var_27 = (min((arr_14 [i_7] [i_8]), (arr_14 [i_7] [i_8])));
                var_28 = ((((min(255, (1100023665146512238 != 2102294822)))) ^ (((((~(arr_16 [i_7] [i_8] [i_7] [i_7])))) * (((arr_24 [i_7] [i_8]) + (arr_21 [i_7] [10] [i_7] [i_7] [i_7] [i_7])))))));
                var_29 = -844184799;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            {
                var_30 -= (arr_29 [i_9 + 1]);
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_39 [i_9] [i_10] [i_11] [7] [7] = var_14;
                                var_31 = (min(0, 1100023665146512238));
                                var_32 = 0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_33 = 3381573278;
                            var_34 |= (arr_41 [i_9] [i_9] [i_14] [i_15]);
                            var_35 = (min(var_35, ((min((((var_14 / (1100023665146512238 && var_9)))), ((-(arr_38 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1]))))))));
                            var_36 = (min((arr_32 [i_9]), (~var_14)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
