/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = ((((-var_4 >> (var_3 - 20344))) - var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_0] [i_1] [i_2] [i_3] = (arr_7 [i_1] [i_1] [i_1] [i_1 - 1]);
                        arr_13 [i_0] [i_1] [i_2] [i_3] [11] [i_1] = (arr_4 [i_0] [16]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_4] [4] [i_6] [i_4] = var_6;
                                arr_25 [i_0] [i_7] [1] [4] [i_4] [i_0] |= (((arr_2 [i_7 - 3] [i_0]) | (arr_2 [8] [i_7 - 2])));
                                var_12 = ((~(((arr_20 [i_5] [3]) % var_2))));
                            }
                        }
                    }
                    arr_26 [i_4] [i_4] [i_4] = (((arr_20 [8] [10]) % (((arr_9 [i_4]) ? var_6 : var_7))));
                }
            }
        }

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_13 = (!(arr_16 [i_9] [i_8 + 3] [15]));
                var_14 = (max(var_14, ((((arr_4 [i_0] [9]) - (arr_18 [i_0] [i_8 + 3]))))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_15 *= ((arr_22 [i_10] [i_10] [i_10 - 2] [i_10] [i_8]) / (~var_6));
                            arr_40 [15] [i_10] [i_9] [i_8] [i_0] = var_2;
                            var_16 = ((((arr_28 [1] [i_8]) ? (arr_0 [i_9] [i_11]) : var_7)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        var_17 = ((var_0 <= ((~(arr_23 [i_13] [i_12] [i_8] [13] [i_0])))));
                        var_18 -= arr_18 [i_12] [i_13];
                    }
                }
            }
            arr_46 [10] = ((((var_8 ? (arr_16 [i_0] [i_0] [i_0]) : (arr_38 [i_0] [i_0] [i_0] [i_8] [9] [1] [i_8]))) * (var_4 >= var_4)));
        }
    }
    var_19 = (max(var_19, var_7));
    #pragma endscop
}
