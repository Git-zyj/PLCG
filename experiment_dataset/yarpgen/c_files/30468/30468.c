/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_2;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = var_12;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_2] [i_1] [i_1] [i_3] [i_1] [i_0] = var_8;
                            var_17 = var_5;
                            arr_16 [i_1] [11] [i_1] [i_1] [i_1] = var_3;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0 - 1] = var_11;
                            arr_20 [4] [4] [i_1] = var_7;
                            arr_21 [i_0] [i_1] [i_0] = var_7;
                            var_18 = var_5;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_19 = var_2;
                            var_20 = var_2;
                            arr_25 [i_0] [i_1] [i_1] [i_3] [i_6] = var_2;
                            arr_26 [2] [i_1] [i_0] [3] [i_0 - 3] = var_6;
                        }
                        var_21 = var_13;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_22 = var_9;
                        var_23 = var_6;

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_24 = var_5;
                            var_25 = var_5;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_26 = var_5;
                            var_27 = var_7;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_35 [i_1] [i_1] [i_2] [i_7] [i_10] [4] = var_12;
                            var_28 = var_4;
                            var_29 = var_7;
                        }
                        var_30 = var_10;
                    }
                    arr_36 [i_1] = var_10;
                }
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    var_31 = var_12;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_32 = var_7;
                                arr_44 [i_1] [i_12] [i_11 - 1] [i_1] [i_1] = var_9;
                                arr_45 [i_1] = var_5;
                            }
                        }
                    }
                    arr_46 [i_1] [i_1] [i_1] = var_5;
                    var_33 = var_2;
                }
            }
        }
    }
    var_34 = var_5;
    #pragma endscop
}
