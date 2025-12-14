/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = var_7;

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_21 = (max(var_21, var_12));
            var_22 = var_4;
            arr_5 [i_1] [15] [i_1] = var_13;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_1] = var_13;
                        var_23 = (min(var_23, var_16));

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            var_24 = (max(var_24, var_3));
                            var_25 = var_14;
                            var_26 = var_18;
                            var_27 = var_0;
                            var_28 = (min(var_28, var_2));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_1] [i_3 + 3] [9] [i_1] [i_0] [6] [i_1] = var_8;
                            var_29 &= var_18;
                        }
                        arr_19 [i_1] = var_3;
                        arr_20 [i_2] [i_2] [i_1] [i_1] [0] [i_0] = var_4;
                    }
                }
            }
        }
        arr_21 [i_0] = var_11;
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = var_15;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_30 = var_2;
                        arr_32 [i_9] [i_7] = var_4;
                        var_31 = (min(var_31, var_18));
                        var_32 ^= var_10;
                    }
                }
            }
        }
    }
    #pragma endscop
}
