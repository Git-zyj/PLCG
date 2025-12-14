/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_8);
    var_16 |= (((var_12 ? ((0 ? var_10 : -9177223095253260642)) : ((var_14 ? var_11 : 9177223095253260641)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = -9177223095253260628;
                                var_18 += (((arr_1 [i_4]) ? ((((var_7 ? var_4 : (arr_9 [i_0] [7] [i_3] [i_4]))))) : (arr_14 [i_0] [i_0] [10] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, -0));
                                var_20 = var_8;
                                var_21 = ((((((arr_7 [i_5] [i_1 - 2] [i_0]) ? (arr_7 [i_0] [i_1 + 1] [i_2]) : (arr_7 [i_0] [i_1 - 1] [i_5])))) ? ((var_3 ? (arr_16 [i_2] [i_1 + 1] [i_6]) : (arr_16 [i_2] [i_2] [i_5]))) : ((((arr_19 [17] [i_2] [9]) ? ((-9177223095253260641 ? var_4 : -3910546509946767497)) : (arr_14 [i_0] [i_1] [i_2] [i_5] [i_6] [i_5]))))));
                                var_22 = (((arr_22 [i_2] [i_1 - 1]) ? ((8342439514639667513 ? 113 : (arr_22 [i_2] [i_1 + 1]))) : (((arr_22 [i_2] [i_1 + 1]) ? (arr_22 [i_2] [i_1 - 2]) : (arr_22 [i_2] [i_1 - 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_30 [i_1] [i_1] &= var_2;
                                var_23 = (((max((arr_26 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1] [i_2] [i_8 + 2]), (arr_26 [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1] [i_2] [i_8 + 1]))) && (!-20277)));
                                var_24 = (arr_17 [i_8 + 4] [i_8 + 3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((var_1 ? ((253 ? (arr_22 [i_0] [i_1]) : (arr_10 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]))) : 6380)))));
                                var_26 ^= (((arr_36 [i_1 - 1] [i_10 - 2] [16] [i_9]) ? (((arr_36 [i_1 - 1] [i_10 - 1] [i_2] [i_2]) & var_10)) : 65535));
                                var_27 = ((var_5 ? (((var_8 ? (arr_35 [i_0] [i_1 + 1] [i_2]) : var_6))) : ((6386 ? 44 : 7929241856119442956))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
