/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] = ((max((arr_2 [0] [i_2]), (~0))));
                                var_19 &= (max((min(0, ((var_3 - (arr_7 [6] [i_1] [i_0] [i_0] [i_1]))))), (arr_5 [i_2] [0])));
                            }
                        }
                    }
                }
                var_20 = var_9;
                arr_12 [i_0] [0] [i_0] = var_17;

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_15 [i_0] [1] [8] [1] = (arr_13 [1] [1] [i_5] [6]);
                    arr_16 [i_0] [5] [3] [i_5] = (((~(arr_2 [10] [i_1]))));
                    var_21 = ((-(((32756 + 1) ? ((((arr_2 [1] [1]) || 1))) : var_14))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_19 [i_0] [i_6] [9] = 1;
                    var_22 = (arr_2 [9] [i_6]);
                    var_23 = (arr_2 [1] [6]);
                    arr_20 [i_6] [0] = var_8;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_24 [i_7] [9] [6] = max((arr_23 [i_0] [i_1 - 3] [i_7] [1]), 996809237);
                    arr_25 [5] [i_1] [4] = (max(var_10, 254));
                    var_24 = max((64253 + 5), (arr_2 [i_0] [i_0]));
                    arr_26 [i_0] [i_7] = (((-1283 - var_9) ? (((max((min(var_0, var_14)), (arr_0 [i_1 + 1]))))) : (arr_2 [1] [i_7])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            {
                arr_33 [i_8] [i_9] = var_10;
                var_25 = (max(((min(var_16, (arr_30 [i_8] [i_8] [7])))), (arr_17 [i_9 - 3] [i_8])));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_26 -= (max((arr_8 [6] [i_10] [i_8] [6]), ((0 ? (arr_8 [i_8] [i_8] [i_8] [i_8]) : (arr_8 [i_8] [0] [i_8] [4])))));
                            arr_40 [i_9] [3] = (min((((((max(1, (arr_28 [i_8] [0]))))) ^ (arr_10 [i_9 + 1] [i_9] [8] [4] [i_10] [i_10 - 1]))), ((0 ? (arr_10 [1] [i_10 - 1] [i_9 - 2] [i_8] [i_8] [9]) : (arr_10 [4] [i_10 - 1] [i_9 - 3] [i_8] [2] [1])))));
                            arr_41 [i_8] [i_9] [1] [2] [4] [0] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_27 = (var_17 || var_9);
    var_28 = var_6;
    var_29 = (max(var_13, (min(var_15, 0))));
    #pragma endscop
}
