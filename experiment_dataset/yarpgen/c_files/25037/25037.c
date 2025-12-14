/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 = ((!(arr_2 [i_0] [i_0 - 1])));
        arr_3 [i_0 + 2] [i_0] = ((~((~((~(arr_0 [i_0 + 3])))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 = (((((arr_4 [i_1] [i_1]) ^ (arr_4 [i_1] [i_1]))) & (arr_4 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = (arr_5 [i_4]);
                        var_15 = (((arr_4 [i_1] [i_2]) / (arr_11 [i_1] [i_2] [i_4] [i_4])));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_16 = (arr_5 [i_5]);
                arr_19 [i_1] [i_5] = ((-(((arr_11 [i_1] [i_2] [i_5] [i_5]) & var_0))));
                arr_20 [i_1] [i_2] [i_5] = (((arr_2 [i_1] [i_2]) + var_0));
                var_17 = var_6;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_18, (arr_25 [i_1] [i_1] [i_6] [i_7])));
                            arr_30 [i_1] [i_1] [i_6] [i_7] [i_6] = (((arr_29 [i_1] [i_6] [i_1] [i_6] [i_6] [i_7] [i_8]) + (arr_29 [i_1] [i_6] [i_1] [7] [7] [i_1] [i_1])));
                            arr_31 [i_6] [i_6] [18] [i_6] [i_8] [i_7] = (arr_1 [i_1]);
                            arr_32 [i_1] [i_1] [i_1] [i_7] [i_6] = (~var_5);
                        }
                    }
                }
                var_19 = ((~(((arr_14 [8] [8] [8] [8]) ^ (arr_16 [i_1] [i_2] [i_6])))));
            }
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_42 [i_1] [i_1] [i_1] [1] [i_1] [i_1] = (((arr_24 [i_10] [i_9 - 2]) ^ (arr_24 [i_1] [i_9 + 2])));
                            var_20 ^= (arr_17 [i_9] [i_9]);
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_21 = (max(var_21, (((!(arr_27 [i_9 - 2] [i_9 + 1] [i_9 - 3] [i_9 + 3] [i_9]))))));
                    var_22 = (min(var_22, (arr_36 [i_1] [i_2] [i_9] [i_9 - 3])));
                }
                arr_45 [i_1] [i_2] [i_9 - 3] [i_9] = (arr_0 [i_1]);
                arr_46 [i_1] [i_1] [i_9 - 1] [i_9 + 2] = ((~(arr_0 [i_1])));
            }
            var_23 = var_10;
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_24 -= (((arr_22 [i_13 - 1]) + var_8));
                            arr_55 [i_14] [i_14] [i_14] [i_1] [i_1] [i_2] [i_1] = (arr_16 [i_13] [i_13] [i_2]);
                            arr_56 [i_1] [i_14] [i_2] [i_2] [i_1] = (arr_12 [i_13 + 1] [i_13 - 2] [i_13 - 1] [i_13 - 2]);
                            var_25 = (min(var_25, -var_4));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
