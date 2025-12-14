/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = min((((max((arr_3 [i_0]), (arr_8 [i_0]))))), (min((min((arr_2 [i_0]), (arr_2 [i_0]))), (((arr_8 [i_0]) >> (11222098742418816756 - 11222098742418816705))))));
                            var_18 = (max(var_18, ((min((((-(-603954170 < -603954170)))), (((((arr_2 [i_1]) >> (arr_6 [i_3] [i_1]))) | ((((!(arr_8 [i_1]))))))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = 0;
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= (((arr_0 [1]) ? (max((((arr_4 [i_0 + 1] [i_0 + 1] [i_5 - 3]) / (arr_10 [i_6] [i_5 + 1] [i_4] [i_1]))), (((arr_14 [i_0] [i_1] [i_0 + 1] [i_0 + 2] [i_0] [i_0]) / (arr_19 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4]))))) : ((6539793797589174382 | ((-(arr_18 [i_0] [i_0] [2] [i_0] [i_0])))))));
                                var_20 *= (((((arr_19 [i_6] [i_4] [i_4] [i_4] [i_0] [i_0]) / -14503540936909780244)) < ((0 * (((arr_13 [i_0] [i_0]) * (arr_8 [i_6])))))));
                            }
                        }
                    }
                }
                var_21 ^= (((((~(arr_18 [i_1] [i_1] [i_0] [i_0] [i_0]))) != (arr_13 [i_1] [1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_27 [i_7] = (arr_24 [i_7]);
        arr_28 [i_7] [i_7] = -72;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_22 = (((arr_26 [i_7]) ? (arr_23 [i_7]) : (((arr_39 [i_7] [i_7] [i_9] [i_10] [i_7]) ? (arr_26 [i_7]) : 0))));
                                var_23 = ((78 / (arr_36 [i_7] [i_7] [i_7] [i_7] [i_7])));
                            }
                        }
                    }
                    var_24 = ((arr_38 [i_7] [i_7] [i_8] [14] [i_8] [i_8]) << (-65 + 103));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_25 &= ((707118003 ^ (arr_26 [i_9])));
                                var_26 = ((((((arr_24 [i_8]) ? (arr_35 [i_13] [i_8] [i_9] [i_12] [i_9]) : 15965010185624641223))) ? (arr_33 [i_7] [i_7] [i_13]) : (((-578260869133915903 <= (arr_35 [i_13] [i_8] [i_13] [i_12] [i_7]))))));
                                var_27 = (-1 * -4403);
                                arr_47 [i_7] [i_8] [i_9] [i_8] [i_13] [i_8] |= (((arr_39 [i_7] [i_8] [i_9] [i_12] [i_13]) > (arr_33 [i_7] [i_7] [i_7])));
                            }
                        }
                    }
                    var_28 |= (arr_33 [i_7] [i_7] [i_7]);
                }
            }
        }
    }
    var_29 = (((((max(var_6, var_0)))) & (max(var_14, var_12))));
    #pragma endscop
}
