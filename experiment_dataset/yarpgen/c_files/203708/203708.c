/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 *= var_2;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, var_3));
                                arr_13 [12] [12] [i_2] = var_1;
                            }
                        }
                    }
                }
                var_12 ^= var_0;
            }
        }
    }
    var_13 = (min(var_13, var_1));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_6] = var_9;

                /* vectorizable */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_14 -= var_2;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_15 = var_1;
                                var_16 = var_4;
                            }
                        }
                    }
                    arr_28 [i_5] [i_5] [i_5] = var_6;
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 6;i_10 += 1) /* same iter space */
                {
                    arr_31 [i_5] [i_5] [i_10] [i_10] = var_2;
                    var_17 = (min(var_17, var_0));
                    var_18 = var_6;
                    var_19 = var_2;
                    var_20 = (max(var_20, var_6));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 6;i_11 += 1) /* same iter space */
                {
                    var_21 = var_6;

                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        var_22 = var_4;
                        arr_37 [i_5] [i_5] [i_5] [i_11] [i_5] = var_5;
                        var_23 = var_5;
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_24 = var_8;

                        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            var_25 = var_0;
                            var_26 = var_2;
                            var_27 = var_3;
                            var_28 = var_4;
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                        {
                            arr_48 [i_5] [i_6] [i_11] [i_13] [i_15] [i_15] = var_2;
                            var_29 = var_7;
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                        {
                            var_30 = var_8;
                            arr_51 [i_5] [i_11] [1] = var_6;
                        }

                        for (int i_17 = 2; i_17 < 9;i_17 += 1)
                        {
                            arr_56 [i_5] [i_11] [i_5] [i_5] [i_5] [i_5] = var_8;
                            var_31 = var_8;
                            arr_57 [i_5] [i_11] = var_9;
                            var_32 = var_0;
                        }
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            arr_62 [i_5] [i_6] [i_11] [i_13] [i_13] [i_11] = var_8;
                            var_33 *= var_8;
                        }
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            var_34 = var_0;
                            arr_65 [i_5] [9] [i_5] [i_11] [7] = var_4;
                            var_35 = var_8;
                        }
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_36 = var_5;
                        arr_69 [i_11] [i_6] = var_8;
                        var_37 = var_0;
                    }
                    var_38 = var_9;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 18;i_21 += 1)
    {
        for (int i_22 = 3; i_22 < 14;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 16;i_23 += 1)
            {
                {
                    var_39 = var_4;
                    var_40 &= var_9;
                    var_41 = (min(var_41, var_3));
                }
            }
        }
    }
    #pragma endscop
}
