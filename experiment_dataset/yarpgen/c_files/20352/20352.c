/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_12 ? var_9 : 3423867029125391436)) * var_18));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2 - 2] = (arr_0 [i_2 + 1] [i_1 + 1]);
                    var_22 = 117;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_23 = 3423867029125391436;
                        arr_10 [i_2] [i_1 + 3] [i_1 + 3] [i_3] |= (((arr_3 [i_0] [i_1]) ? (arr_2 [i_2 - 1] [i_1 + 1]) : (arr_5 [i_1 + 2] [i_1 + 2] [i_2 - 1])));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_4] = var_19;
                            arr_22 [i_0] = ((3 * (((~((~(arr_19 [i_0] [5] [i_5] [i_5] [i_0] [i_0] [i_0]))))))));
                        }
                    }
                }
            }
            arr_23 [i_0] [i_0] = (arr_5 [1] [i_4] [i_4]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_31 [12] [i_8] [i_9] [i_8] [12] |= ((-4770012152955039126 ? 3423867029125391409 : 26013));
                        arr_32 [i_8] [i_8] [i_8] [i_8] = var_0;
                    }
                }
            }
            var_24 = (arr_15 [i_0] [i_8]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((arr_12 [i_0]) + (((arr_14 [i_11] [i_0]) ? 18446744073709551601 : 103)))))));
                        var_26 = (min(var_26, 15022877044584160165));
                        arr_38 [12] [i_8] [i_8] [10] = (arr_25 [i_12 + 1]);
                        var_27 += var_10;
                    }
                }
            }
        }
    }
    var_28 = var_17;
    var_29 = (min(var_29, (((var_2 ? var_19 : var_11)))));
    #pragma endscop
}
