/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_10 |= var_2;
                            var_11 = max(-9223372036854775807, ((-((9223372036854775807 ? 9223372036854775792 : -9223372036854775807)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_12 -= ((~((((1 ? (arr_13 [i_5]) : -9223372036854775805)) * (((9223372036854775807 ? var_3 : var_8)))))));
                                arr_21 [i_1] [9] [8] [1] [i_6] = (((-5363938864091783177 ? var_0 : 9223372036854775807)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_35 [i_7] [0] [i_9] [i_7] [i_11] [i_11] = ((arr_33 [16] [i_10 - 2] [i_10] [1] [i_10 + 1]) ? (min((3168695655 || var_5), 9223372036854775792)) : (((arr_30 [5] [i_10 + 1] [i_11]) ? ((377368508580429144 ? -9223372036854775807 : 1706102775)) : 120)));
                                arr_36 [i_7] [i_11] [i_9] [i_11] [14] [i_8] [i_9] = (max(166, 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_13 = max(-9223372036854775807, 565437509386641069);
                                var_14 = 194;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 15;i_15 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                arr_54 [i_17] = ((var_7 ? ((((max((arr_33 [i_18] [i_17] [i_16] [4] [i_14]), -1))) ? 233 : ((1877410847 ? 2 : 9223372036854775807)))) : ((((arr_45 [i_15 - 2]) ? (arr_45 [i_14]) : (arr_45 [i_18]))))));
                                var_15 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        {
                            arr_60 [i_14] [i_15 + 1] [i_19] [i_14] = 9223372036854775807;
                            arr_61 [i_14] [i_14] [i_19] [i_20] [i_19 + 1] [i_20] |= (((((((arr_42 [i_15 - 1] [i_19]) ? var_0 : 10)))) ? -3044829421187965185 : (((((min(3044829421187965185, var_4))) ? ((~(arr_32 [i_14] [23] [i_15 - 1] [i_20] [i_19] [i_20]))) : var_3)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
