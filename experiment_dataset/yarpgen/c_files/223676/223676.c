/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 ^= -28580;
        var_21 = (min(var_21, 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [8] = 1;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] [1] [i_1] [i_0] = 1;
                        var_22 -= -28580;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, -106));
                        var_24 = -22520;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_1] [i_0] [i_5] [i_0] = (-127 - 1);
                        var_25 += -40;
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_23 [8] [i_0] [i_0] [i_0] = 22519;
                        arr_24 [i_0] [12] [i_0] = -15029;
                    }
                    arr_25 [i_0] [1] [7] [i_0] = -61;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_26 = (min(var_26, 1));
        arr_28 [i_7] = -25435;
        var_27 = (min(var_27, -49));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_28 |= 22501;
                    arr_35 [1] [i_7] [i_8] [i_9] = -22501;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_39 [i_8] [0] [i_10] = -65;
                        arr_40 [1] [0] [9] = 31106;
                        var_29 = 1;
                        arr_41 [0] [1] [10] [1] [6] = (-127 - 1);
                        var_30 -= -106;
                    }
                    arr_42 [12] = 1;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_48 [1] [i_11] [11] [6] [i_7] = 0;
                                var_31 -= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_32 = 52;
                        arr_60 [i_14] [6] [i_13] [i_16] [i_13] = 0;
                        var_33 = -57;

                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            arr_64 [i_13] [i_14] [i_13] [i_16] [i_17] = 3870;
                            var_34 = 28672;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_73 [i_13] [2] [1] [i_13] = 40;
                        arr_74 [i_13] [i_13] [i_19] = -108;
                        arr_75 [i_13] [i_18] [i_19] |= -17340;
                        arr_76 [8] [i_13] [i_19] [i_20] = 1;
                    }
                }
            }
        }
    }
    var_35 = (-127 - 1);
    #pragma endscop
}
