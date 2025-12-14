/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = var_13;
    var_18 = var_1;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = var_15;
                    var_20 = (max(var_20, var_8));
                    var_21 = (min(var_21, var_2));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, var_14));
                    arr_16 [i_0] [i_3] = var_9;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_23 = var_7;
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 7;i_8 += 1)
                        {
                            {
                                arr_29 [5] [i_5] = var_3;
                                var_24 = var_0;
                                var_25 = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_35 [i_5] [i_10] [i_6] [i_9 - 1] [i_10] [i_6] [i_10] = var_13;
                                arr_36 [i_6] [i_5] [i_6] [i_6] [i_6] = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 8;i_12 += 1)
                        {
                            {
                                var_26 = var_1;
                                arr_43 [i_0] [i_6] [i_5] [i_6] [i_5] = var_11;
                                arr_44 [i_6] [i_5] = var_1;
                                var_27 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        arr_47 [i_13 + 1] [i_13] = var_12;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    arr_53 [i_13] = var_1;
                    var_28 &= var_15;
                }
            }
        }
        var_29 = var_10;
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_56 [1] = var_9;
        arr_57 [i_16] = var_14;
        var_30 = var_13;
    }
    #pragma endscop
}
