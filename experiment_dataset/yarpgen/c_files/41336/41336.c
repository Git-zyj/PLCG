/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((var_6 ? var_10 : ((var_4 ? var_10 : var_6)))));
    var_14 = (min(var_14, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [1]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (arr_11 [i_1 + 2] [i_3 - 1] [i_4]);
                                arr_13 [i_0] = arr_10 [i_0] [i_1] [i_4];
                                var_16 = (min(var_16, (((((!(arr_10 [i_1] [i_3] [i_4]))) ? (arr_0 [i_4]) : (arr_11 [1] [i_1 + 1] [i_0]))))));
                                arr_14 [i_0] [i_1] [15] [i_2] [1] [19] [i_4] = (arr_6 [i_4] [i_3] [i_2] [i_0]);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1 - 2] [i_2] [i_2] [i_6] &= (arr_1 [i_0]);
                            arr_21 [i_0] [i_5] [1] [14] [5] [i_0] = (arr_9 [i_0] [i_1]);
                            var_17 &= (arr_9 [i_0] [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_5] = (arr_23 [i_0] [i_0] [i_5] [i_0] [i_0]);
                            arr_25 [i_5] [i_1] [i_1 + 2] [i_1] [i_1] [10] [i_1] = ((~(arr_7 [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_18 = (((arr_17 [i_0]) ? (arr_11 [i_0] [3] [i_2]) : ((~(arr_27 [i_0] [i_1])))));
                            var_19 ^= (arr_10 [i_0] [i_2] [i_8]);
                        }
                        arr_28 [i_5] [i_5] = ((((((arr_0 [i_0]) ? (arr_17 [i_0]) : (arr_22 [i_1 + 3] [i_2] [i_5])))) ? (arr_23 [i_0] [i_1] [i_5] [i_5] [i_5]) : (((arr_27 [i_0] [i_2]) ? (arr_27 [i_0] [i_1]) : (arr_8 [1])))));
                    }
                    arr_29 [i_2] [i_1] &= (((arr_5 [i_0] [i_1] [i_1] [i_0]) ? ((-(arr_1 [i_1 + 1]))) : (arr_7 [i_0])));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_20 = (((arr_8 [i_9]) ? ((-((-(arr_16 [i_9] [i_9]))))) : (arr_22 [i_9] [i_9] [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_35 [i_11])));
                        var_22 = (max(var_22, ((((arr_41 [i_9] [i_9] [i_9] [i_9]) ? (arr_38 [i_9] [i_10 + 1] [i_11] [i_12]) : (arr_4 [i_9]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
