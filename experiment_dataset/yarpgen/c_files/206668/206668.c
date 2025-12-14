/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] &= (((arr_4 [i_0] [i_1] [i_2]) ? (arr_1 [i_0] [i_0]) : ((max(-1085329928228258036, var_10)))));
                                var_14 = ((((var_13 ? ((~(arr_2 [i_4]))) : -1968786717973996713)) >= (arr_11 [i_0] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                }
                var_15 = ((((((var_10 >= var_7) & ((~(arr_9 [i_0] [i_0] [i_1] [i_1] [i_1])))))) ? 2305843009205305344 : -370010212));
                var_16 = (!370010196);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_17 -= var_13;
                                var_18 = 21;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_8] [i_8] [i_10] = (max((((var_6 * 8870) == ((var_4 ? var_10 : var_13)))), (((arr_22 [i_8]) <= 370010206))));
                    var_19 = ((2305843009205305359 & (min(((((arr_22 [i_8]) ? 35272 : var_9))), ((16140901064504246272 ? var_3 : var_5))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_20 = ((((((arr_35 [i_12] [i_9] [i_12 + 1] [i_8] [i_12 - 1] [i_8]) > var_5))) >> (var_7 + 424351427)));
                                var_21 = (((((((var_7 ? 1 : 38140))) ? var_1 : ((min(var_5, var_4))))) / (arr_36 [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])));
                                var_22 = (((((+((var_1 ? (arr_33 [i_8] [i_8] [i_8] [i_12 + 1]) : (arr_24 [i_10])))))) ? -370010202 : (min((arr_25 [i_12]), (var_3 + var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_23 = (((((min((arr_42 [i_8] [i_9] [i_8]), var_5)) * (((arr_27 [i_9] [i_9]) ? 1 : (arr_39 [i_9] [i_9] [i_9] [i_9] [i_9]))))) == ((((~var_4) ? ((((arr_40 [10] [i_9] [10] [i_14]) || 0))) : ((((arr_36 [i_14] [9] [i_10] [i_8] [i_8]) >= (arr_29 [i_8])))))))));
                                var_24 = (min(var_24, (((2305843009205305343 ? 6179 : 49782)))));
                            }
                        }
                    }
                    arr_44 [i_10] [i_9] [i_9] [i_8] = (arr_43 [i_8] [i_8] [1] [i_9] [1] [i_10] [i_8]);
                }
            }
        }
    }
    var_25 = (max(((((-18899 ? 2 : 1)) & var_7)), var_0));
    #pragma endscop
}
