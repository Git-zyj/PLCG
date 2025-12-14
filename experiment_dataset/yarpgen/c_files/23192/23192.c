/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(var_4, (min(var_1, var_13))));
    var_15 = ((-3213 && (-32767 - 1)));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = ((536805376 && (arr_1 [13] [2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (((arr_6 [i_2] [i_0 - 1] [i_1]) ? (arr_6 [i_0] [i_0 - 1] [i_2]) : (arr_0 [i_0 + 1])));
                    arr_7 [i_0 - 1] [i_1] [i_2] [i_2] = var_0;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    {
                        var_18 = (arr_5 [i_0 + 1] [i_5 + 2]);
                        var_19 = min(((((max((arr_11 [i_4]), (arr_3 [i_5] [i_0])))) * (arr_14 [i_0]))), (((-(arr_17 [i_4] [8] [i_4] [i_4])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            {
                var_20 = (max((arr_3 [i_6] [13]), var_8));
                var_21 = 1;

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_24 [16] [i_7] [i_8] [16] |= (arr_12 [i_7] [15] [i_8] [i_8]);
                    arr_25 [i_8] [i_7] [i_6] [i_8] = (arr_11 [i_6]);
                    var_22 = (min(var_22, var_3));
                    var_23 = (arr_0 [i_6]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_30 [i_6] = ((arr_10 [i_6] [i_6] [i_9]) ? ((((arr_20 [14] [i_7] [i_6]) ? (arr_13 [i_6]) : (arr_13 [i_7])))) : (arr_5 [i_6] [i_7 - 2]));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_24 = -var_4;
                                arr_35 [i_6] [16] [i_9] [i_10] [i_11] [i_7 + 2] = var_10;
                                var_25 = (arr_12 [i_6] [1] [i_9] [2]);
                                var_26 = arr_27 [i_6];
                            }
                        }
                    }
                    var_27 = 31744;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_43 [i_6] [i_7] [i_6] [i_12] [i_13] [i_9] [i_9] = ((var_11 && (arr_4 [i_6] [i_7])));
                                var_28 = var_6;
                                var_29 = (min(var_29, var_1));
                                var_30 = (arr_4 [i_7 - 1] [i_12 - 1]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_46 [i_6] [i_6] [10] [i_6] = (arr_29 [i_6] [i_7 - 3] [i_14]);
                    arr_47 [0] [i_6] = var_1;
                }
                var_31 = (min(var_31, (((var_2 ? (((((arr_32 [i_7] [12] [i_7] [i_7] [i_6]) == (arr_41 [i_6] [i_6]))))) : var_5)))));
                var_32 = (min(var_32, var_10));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 4; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    arr_55 [i_16] [i_16] [i_17] [i_15] = (arr_26 [i_15]);
                    arr_56 [1] [i_15] = (((((max(var_5, (arr_12 [i_15] [i_17] [i_17] [i_15]))))) ? ((var_13 ? ((var_1 ? 15866442050234257550 : (arr_48 [i_15]))) : (arr_42 [i_15] [5] [i_17] [i_17] [i_15]))) : (((8909663708540190372 ? -39 : 536805397)))));
                }
            }
        }
    }
    #pragma endscop
}
