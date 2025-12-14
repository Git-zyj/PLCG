/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = (max(var_18, var_15));
        arr_2 [i_0] = var_6;
        var_19 += var_6;
        var_20 = (max(var_20, var_3));
        arr_3 [5] = var_8;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_2] [i_1 - 1] [i_2] = var_2;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_18 [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1] = var_4;
                            var_21 = (min(var_21, var_3));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = var_14;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_25 [i_1] [i_2] [i_2] [i_3] [i_6] [1] [i_7] = var_8;
                            arr_26 [i_1] [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] = var_3;
                            arr_27 [10] [10] [i_2] [10] = var_13;
                        }
                    }
                }

                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    arr_30 [i_1] [i_1] [5] [i_2] = var_9;
                    arr_31 [i_2] [1] [i_2 - 1] [i_2] = var_5;
                    arr_32 [i_1] [0] [i_3] &= var_6;
                    var_22 = (min(var_22, var_12));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_36 [i_1] [i_1] [i_1 - 1] [i_2] = var_5;
                    arr_37 [i_1] [i_2] = var_1;
                    var_23 = var_12;
                    arr_38 [i_2] = var_13;
                }
                var_24 = var_14;
            }
            for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
            {
                arr_41 [i_2] [i_2] [i_2 - 1] = var_5;
                arr_42 [i_2] [i_2] = var_13;
                var_25 = var_15;
                var_26 = (max(var_26, var_15));
                var_27 = var_6;
            }
            for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_28 ^= var_1;
                            arr_51 [i_1 - 1] [i_11] [i_11] [i_2] [i_13] = var_4;
                            var_29 = (min(var_29, var_5));
                        }
                    }
                }
                var_30 = var_10;
                arr_52 [i_2] [i_2] [i_11] = var_15;
            }
        }
        var_31 = var_13;
        var_32 *= var_15;
    }
    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        var_33 = var_8;
        var_34 = var_6;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {
                        var_35 = var_10;
                        arr_63 [i_14] [i_15] [i_14] = var_16;
                    }
                }
            }
        }
        var_36 = var_11;
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 15;i_18 += 1)
    {
        for (int i_19 = 3; i_19 < 12;i_19 += 1)
        {
            {
                var_37 ^= var_7;
                arr_69 [i_19] = var_1;
                var_38 = var_9;
                var_39 ^= var_11;
            }
        }
    }
    #pragma endscop
}
