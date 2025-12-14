/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_19 -= (arr_1 [7] [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = ((!(arr_0 [16] [0])));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_20 -= (arr_4 [i_0] [i_1]);
                            var_21 -= ((((((~(arr_4 [i_2] [i_1]))) + 2147483647)) >> ((((~(arr_4 [i_0] [i_1]))) + 29))));
                            arr_13 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] = (((!(arr_4 [i_2] [i_2]))));
                            var_22 -= (((-(arr_9 [i_0] [i_2 - 2] [9] [i_2 - 2]))));
                        }
                    }
                }
            }
            var_23 -= (((arr_7 [i_0] [20] [6]) != (arr_3 [i_1])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_19 [i_0] [i_1] [i_1] = ((-(arr_10 [i_1] [i_5] [i_6])));
                        arr_20 [i_1] [i_1] = 138;
                        arr_21 [i_1] [i_5] = ((!(arr_16 [i_0] [i_1] [i_5] [i_6] [i_5] [i_1])));
                    }
                }
            }
        }
        arr_22 [i_0] = (arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_26 [i_7] = ((-(128 & 704965238)));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_34 [i_8] [i_8] [i_9] = ((-((-(arr_24 [i_7])))));
                    arr_35 [i_8] [i_8] = (arr_31 [i_7] [i_8] [9] [8]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_24 = (((((!(arr_10 [i_14] [i_11] [i_11])))) >> -0));
                                arr_49 [i_14] [8] [4] [5] [i_14] = ((!(arr_8 [23] [23] [i_13])));
                                var_25 = (!(arr_32 [i_10] [i_10]));
                            }
                        }
                    }
                }
                var_26 -= ((arr_15 [i_10] [i_10] [i_10] [i_11]) || (((-(arr_16 [i_11] [i_11] [i_10] [11] [i_11] [i_11])))));
            }
        }
    }
    #pragma endscop
}
