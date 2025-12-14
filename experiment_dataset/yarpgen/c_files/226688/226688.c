/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 = -26;

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (((arr_5 [i_0] [7] [10]) <= ((2147483647 ? ((55299 ? 55272 : 10237)) : 10244))));
                        var_15 = (max(var_15, (arr_2 [i_3] [16] [i_3])));
                        arr_10 [i_2] [i_0] [i_2] [1] [i_2] [1] = (~55272);
                        var_16 = (((var_0 / var_10) || ((((((-(arr_7 [i_3] [5])))) ? (arr_4 [i_2] [i_3 + 1] [15] [i_3]) : (55309 && 55299))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_17 = (max((max((((arr_15 [i_0] [i_4] [1] [i_2] [i_4] [i_5]) ? (arr_6 [i_0] [10]) : (arr_9 [8] [7] [8] [i_0] [i_0]))), (((arr_12 [i_4]) ? 10219 : (arr_14 [15] [i_1]))))), (arr_5 [i_0] [i_2] [i_2])));
                                var_18 = min(((((var_3 ? (arr_11 [1] [i_2] [i_4] [0]) : 10236)) | ((((arr_7 [i_1] [8]) + (arr_8 [i_0] [11] [i_4] [1])))))), (((((max((arr_7 [i_2] [i_4]), (arr_8 [3] [2] [i_4] [1])))) ? ((max(10237, (arr_3 [10] [i_2] [i_4])))) : ((min((arr_7 [i_0] [i_5]), 10237)))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, (((((((~(arr_13 [13] [i_1] [i_1] [9] [15] [i_2] [7]))))) + 55306)))));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_20 = (((arr_14 [i_1] [9]) ? var_6 : (arr_1 [i_6])));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_20 [i_7] [i_6] [7] [3] [i_1] [i_0] = var_11;
                        arr_21 [i_0] [8] [15] [i_7] = 10254;
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_21 = var_3;
                    var_22 = (min(var_22, var_3));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_31 [6] [i_8] [1] [5] [i_9] [15] = (((arr_19 [11] [i_0] [i_9] [6] [i_10 + 1]) != (var_0 ^ var_12)));
                                var_23 = (min(var_23, (arr_22 [13] [12] [i_1])));
                            }
                        }
                    }
                }
                var_24 = (max(var_24, ((min(((min((arr_29 [9] [i_1] [16] [1] [i_1]), var_7))), var_8)))));
                arr_32 [1] [i_1] = ((max(10238, 55298)));

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_25 = (max(var_25, (arr_17 [i_0] [i_1] [13] [7])));
                    arr_35 [7] [i_11] [4] [i_11] = (((((((arr_19 [1] [6] [i_0] [i_11 - 1] [i_11 - 1]) || (arr_19 [14] [i_0] [0] [i_11 - 1] [i_11 - 1]))))) != (max((arr_19 [i_0] [1] [i_0] [i_11 - 1] [i_11 - 1]), (arr_19 [10] [i_0] [i_1] [i_11 - 1] [i_11 - 1])))));

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_38 [8] [4] [i_0] [i_11] [6] = 55292;
                        arr_39 [i_11] [6] [i_11] [i_11] [3] [8] = ((var_9 || (((+((55298 ? (arr_1 [1]) : var_12)))))));
                    }
                }
            }
        }
    }
    var_26 = var_8;
    var_27 = 10256;
    #pragma endscop
}
