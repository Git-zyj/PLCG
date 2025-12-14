/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = 0;
                            var_18 = (arr_7 [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [8] [i_1] [i_5] [10] [i_5] = 7711;
                                arr_21 [i_1] [i_1] [i_4] [i_5] [i_5] [9] = var_16;
                                var_19 = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_20 -= 18446744073709551605;
                            var_21 = 1100394813995107697;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_32 [i_0] [i_11] [i_1] = 8736402016635034664;
                                arr_33 [i_0] [i_1] [i_9] [i_9] [i_10 + 1] [i_11] [i_11] = var_9;
                                var_22 = (arr_25 [i_1]);
                                var_23 = -11;
                                var_24 -= 4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_9;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_26 -= (arr_34 [i_14]);
                            var_27 = -21;
                            arr_44 [i_12] [i_14] [i_12] [i_12] [i_15] [i_13] = -11;
                            arr_45 [i_14] [i_13] [i_14] [i_13] |= (arr_39 [i_12] [i_14] [i_14] [i_15]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_28 |= var_15;
                            arr_51 [i_12] [0] [9] [5] [9] [i_17] = 37;
                        }
                    }
                }
            }
        }
    }
    var_29 = -1907390103;
    #pragma endscop
}
