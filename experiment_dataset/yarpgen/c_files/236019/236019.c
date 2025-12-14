/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, var_3));
                    var_18 += var_7;
                    var_19 = var_13;
                }
            }
        }
        var_20 = var_2;
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_21 = (min(var_21, var_5));

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] = var_14;
                                var_22 = (max(var_22, var_3));
                            }
                        }
                    }
                    var_23 = (max(var_23, var_1));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_24 [i_3] [i_4] [i_3] = var_2;
                    arr_25 [i_3] = var_14;
                    var_24 = var_9;
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    var_25 += var_6;
                    arr_28 [i_3] [i_4] [i_4] = var_7;
                }
                var_26 += var_8;
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 7;i_12 += 1)
                        {
                            {
                                var_27 ^= var_6;
                                arr_35 [i_3] [i_4] [i_10] [i_4] [i_4] [i_4] [i_3] = var_5;
                                var_28 = (max(var_28, var_12));
                            }
                        }
                    }
                }
                arr_36 [i_3 + 1] [i_3] = var_12;
            }
        }
    }
    var_29 = var_6;
    #pragma endscop
}
