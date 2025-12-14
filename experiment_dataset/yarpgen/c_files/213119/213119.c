/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (((!var_3) ^ var_14));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1 + 1] [i_2] = (arr_2 [i_2 + 1] [i_0] [i_0]);
                    arr_7 [1] = ((((var_7 ? 4294967295 : 23309)) | (arr_2 [i_0] [i_0] [i_0])));
                    var_19 += ((~(arr_5 [i_0] [i_0] [i_2 - 2] [6])));
                    arr_8 [i_0] [11] [i_2 - 2] [i_2] = ((var_10 != (((((arr_1 [i_2]) == (arr_5 [1] [1] [i_0] [1])))))));
                }
            }
        }
        arr_9 [i_0] = (~-23310);
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_20 = (arr_10 [i_4 + 1] [i_4 + 1]);
                    var_21 += ((((((arr_16 [2]) + 937539419))) ? (arr_12 [0]) : (arr_14 [18])));
                    var_22 *= (((((arr_14 [12]) ? (arr_12 [8]) : (arr_15 [i_3] [14] [i_5]))) % ((-15533 ? -102 : var_15))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_23 = (((!var_2) ? ((~(arr_18 [i_7] [i_7]))) : (arr_20 [i_3] [1] [i_3] [i_7 + 1])));
                    var_24 += -73;
                    var_25 = (((arr_13 [i_7 + 1]) ? (arr_13 [i_7 + 1]) : (arr_13 [i_7 + 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_26 += (((arr_21 [i_3] [i_6] [i_7] [14] [i_6]) ? (arr_21 [i_3] [i_6] [10] [i_8 - 3] [i_6]) : (arr_21 [i_3] [12] [i_9] [i_8] [i_6])));
                                arr_27 [i_3] [18] [18] [i_8] [i_8] [6] [i_3] = (((arr_20 [i_9 + 3] [i_3] [i_3] [i_7 + 1]) ? (arr_20 [i_9 - 1] [i_3] [i_3] [i_7 + 1]) : (arr_20 [i_9 + 2] [i_3] [i_3] [i_7 + 1])));
                                var_27 ^= (((var_4 >> (((arr_15 [i_9] [12] [i_6]) - 189)))) != 15532);
                            }
                        }
                    }
                }
            }
        }
        var_28 ^= (var_0 && var_5);
    }
    #pragma endscop
}
