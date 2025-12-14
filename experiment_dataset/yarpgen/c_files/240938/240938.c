/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_5, ((max(var_2, 10)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_11 = (((var_6 ? ((max(511, 246))) : -17579)));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] = (arr_6 [7] [1]);
                            var_12 ^= ((-(((arr_6 [i_2 - 2] [i_3]) ? (arr_8 [i_0] [i_1] [i_1] [4] [i_1]) : (min((arr_7 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]), 15702))))));
                            var_13 = (arr_8 [i_2] [i_2] [i_2] [i_3] [6]);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, -117));
                            arr_16 [9] [8] [i_2] [i_1] [9] [i_2 + 4] [i_2] = (arr_9 [i_1] [i_3]);
                            arr_17 [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] [1] = (((var_4 > (arr_5 [i_2 + 1] [i_2 + 1] [i_2]))));
                        }
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_25 [i_8] [i_8] [i_8] [i_8] = (arr_1 [i_8]);
                        var_15 |= (arr_21 [i_8]);
                        arr_26 [i_8] [i_8] [i_8] [i_8] = (((min((arr_21 [i_6 - 4]), (arr_2 [i_7]))) + (arr_7 [i_6 + 2] [1] [i_6 - 2] [4] [i_6] [i_6 - 4])));
                        var_16 = -var_0;
                    }
                }
            }
            arr_27 [i_0] = var_2;
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_30 [i_9] = ((var_1 ? var_9 : ((var_0 ? -2117776028 : ((2601 ? -7561404420600833649 : 2117776017))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        var_17 = (arr_4 [i_11] [i_9] [i_9]);
                        var_18 = ((-((max((arr_19 [i_11 + 1] [i_11] [i_11]), (arr_19 [i_11 + 1] [i_0] [1]))))));
                    }
                }
            }
            var_19 ^= (((((-(arr_35 [4] [i_9] [i_9] [i_9]))) < (arr_19 [i_0] [i_9] [i_0]))));
        }
        var_20 = (max(((min((var_2 && 7561404420600833652), (~1)))), ((min(26870, 1029538002115122099)))));
    }
    var_21 = ((((((var_7 ? 1 : var_9))) ? var_1 : (var_0 / 7561404420600833645))));
    #pragma endscop
}
