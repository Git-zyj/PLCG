/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1192168651;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_10 = (-9223372036854775807 - 1);
            var_11 = (max(var_11, 89));
        }
        var_12 = 67;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_13 = (min(var_13, 3102798646));
                            var_14 = 3102798645;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_24 [i_7] [i_3] [6] [i_7] [6] &= 5448218108438338240;
                            arr_25 [i_2] [i_2] [13] [i_4] [i_7] = 1;
                            var_15 |= 16445;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_30 [13] [13] [i_4] [i_4] [i_4] = 2;
                            arr_31 [i_2] [i_4] [9] [i_5] [14] = 3102798649;
                        }
                        var_16 = 1;
                        arr_32 [i_2] [i_3] [i_3] [i_5] [i_5] |= 90;
                    }
                }
            }
        }
        var_17 = -27969;
    }

    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_18 = 23;
        var_19 ^= 1;
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        arr_38 [i_10 + 1] = 8129;
        var_20 = 483370031481384283;
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_21 = 1192168645;
        var_22 = 0;
        arr_42 [i_11] = 3102798621;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 14;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_23 ^= 10841;
                                var_24 = -102;
                                arr_54 [i_11] [i_12] [i_13] [i_14] [i_15] [i_13 - 2] = -73;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_25 += 65511;
                                arr_59 [i_16] [13] [i_13 + 2] [i_16] [i_17] = 255;
                                arr_60 [i_16] [i_12] [i_12] [7] = 1;
                                arr_61 [i_16] [i_16] [i_16] [i_16] = 32767;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 20;i_18 += 1)
    {
        arr_66 [i_18] [i_18] = 9139097740559960915;
        var_26 *= 0;
        /* LoopNest 3 */
        for (int i_19 = 2; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    {
                        arr_73 [5] [i_21] [i_18] [i_21] [6] = 0;
                        arr_74 [i_18 + 1] [i_19 - 1] [i_21] [i_18] [i_18] = -2507683501854580829;
                        arr_75 [i_18] [i_18] = 4;
                        arr_76 [i_18] [i_20] [i_20] [i_19] [i_19] [i_18] = 7605;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_22 = 1; i_22 < 20;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 22;i_24 += 1)
                {
                    {
                        var_27 = 72;
                        var_28 = 1560362722;
                        var_29 = 2646884153;
                        var_30 = 59;

                        for (int i_25 = 0; i_25 < 23;i_25 += 1)
                        {
                            arr_88 [i_18] [i_18] [15] [i_24] [i_25] = 1153485188;
                            var_31 += -67;
                            arr_89 [i_18] [i_18] = 39;
                        }
                        for (int i_26 = 0; i_26 < 23;i_26 += 1)
                        {
                            arr_94 [i_24] [14] [14] [i_18] [i_22 + 2] = -396025032;
                            arr_95 [i_26] [i_18] [4] [i_24] [i_26] = 3102798658;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
