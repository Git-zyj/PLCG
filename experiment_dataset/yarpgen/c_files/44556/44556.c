/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] = (arr_8 [i_4 + 1] [i_4 + 1] [i_2] [i_4 + 1]);
                                arr_14 [0] [i_1] [16] [i_2] [i_3] [0] [i_4 + 2] = (arr_0 [i_2 - 1]);
                            }
                        }
                    }
                    var_14 = (arr_9 [i_2 + 1] [i_2 + 1]);
                    var_15 = (arr_4 [18] [i_1] [i_2 - 1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    var_16 = (arr_7 [i_0] [i_0] [12] [i_0]);
                    var_17 &= (arr_11 [i_5 - 1] [i_6 + 1] [i_6 + 1] [1] [6] [i_6 - 1] [i_6 + 2]);
                }
            }
        }
        var_18 = (arr_18 [i_0] [i_0] [1]);
        arr_20 [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_19 = arr_17 [i_8] [2] [i_7];
                    arr_27 [i_8] [i_7] = (arr_0 [i_9]);
                    var_20 = (max(var_20, (arr_15 [i_7] [i_8])));
                    var_21 = (min(var_21, (arr_10 [i_7] [i_7] [i_7] [i_7])));
                    var_22 = (arr_2 [i_9] [12] [i_7]);
                }
            }
        }
        var_23 = (arr_17 [i_7] [i_7] [i_7]);
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_24 = (min(var_24, (arr_28 [i_10])));
            var_25 = (arr_29 [i_10]);

            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                var_26 = (arr_29 [i_10]);
                var_27 = (min(var_27, (arr_30 [1] [i_11] [1])));
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_28 = arr_30 [i_10] [16] [i_10];
                var_29 = (arr_30 [i_10] [i_10] [i_10]);
                var_30 = (arr_33 [i_10] [i_11] [i_11]);
            }
        }
        var_31 -= (arr_36 [i_10] [i_10] [12] [i_10]);
        arr_38 [i_10] = (arr_29 [i_10]);
        arr_39 [i_10] [i_10] = (arr_28 [i_10]);
    }
    var_32 ^= var_9;
    #pragma endscop
}
