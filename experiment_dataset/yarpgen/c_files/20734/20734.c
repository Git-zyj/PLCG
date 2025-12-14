/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_17 = var_16;
            var_18 = (arr_3 [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_19 = ((22 && (((28660 ? (arr_9 [i_2] [6] [6]) : (arr_5 [9]))))));
                    var_20 = (max(var_20, ((((arr_4 [i_0]) ? (arr_11 [i_4 + 2] [i_4] [i_4 + 2] [i_4 + 1]) : (var_5 <= 28637))))));
                    var_21 = (max(var_21, var_10));
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_22 = (arr_3 [i_2] [i_2]);
                            arr_17 [i_0] [i_0] [i_3] [8] [i_0] = (((arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 + 2]) ? (arr_6 [i_0]) : 28660));
                            arr_18 [i_0] [i_3] [i_3] [i_6] = (arr_1 [8] [i_5 + 1]);
                        }
                    }
                }
                arr_19 [i_0] [i_3] [i_2] = (((arr_9 [i_0] [i_0] [i_0]) && -28671));
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_23 += (arr_6 [i_7]);
                            arr_27 [i_7] [i_2] [i_2] = (arr_14 [i_0] [i_2] [i_2] [i_8] [i_9] [i_9]);
                        }
                    }
                }
                var_24 = (arr_8 [i_7] [1] [13]);
            }
            var_25 -= arr_3 [7] [7];
        }
        var_26 = (max(var_26, (+-28637)));
        arr_28 [i_0] = var_3;

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_27 = 28657;
            arr_31 [i_0] [i_10] = arr_7 [i_10];
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_28 -= 28642;
                            var_29 = var_2;
                        }
                        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                        {
                            var_30 = ((arr_6 [i_15]) > (arr_6 [8]));
                            arr_46 [i_0] [i_12] [i_0] [3] [1] = (arr_4 [i_13]);
                        }
                        for (int i_16 = 3; i_16 < 11;i_16 += 1)
                        {
                            arr_49 [i_16] = (((arr_22 [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_16] [i_16 - 3]) ? (arr_26 [i_16 - 1] [i_16 - 3] [i_16 - 2] [i_16 + 2] [i_16 + 3]) : (arr_26 [i_16 - 1] [6] [i_16] [i_16 + 2] [i_16])));
                            var_31 = (min(var_31, (((-(arr_12 [i_12] [i_16 - 2] [i_16 + 3] [i_16 + 3] [i_16 - 3] [i_16 - 2]))))));
                            arr_50 [13] [i_16 - 3] [i_16] [i_13] [i_16 - 1] [i_12] = (arr_12 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 - 2]);
                        }
                        var_32 = var_2;
                    }
                }
            }
            var_33 = 28660;
            var_34 = (((arr_21 [i_0] [i_0] [i_11]) ^ (arr_20 [i_0] [i_11] [i_0])));
        }
    }
    var_35 = var_6;
    #pragma endscop
}
