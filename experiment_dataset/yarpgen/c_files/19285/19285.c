/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((((var_3 ? (max(var_4, (arr_0 [6]))) : (arr_0 [i_0])))) ? ((var_3 ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_2]))) : (((arr_4 [1] [i_1] [i_2]) ? (arr_2 [i_1]) : (arr_0 [i_1])))));
                    var_18 = (((((arr_5 [1] [3] [i_1]) ? (arr_5 [i_0] [i_0] [i_1]) : (arr_5 [i_0] [i_1] [i_1])))) ? var_8 : (arr_2 [i_1]));
                }
            }
        }
        var_19 = arr_1 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_0] = ((var_8 ? (arr_13 [i_0] [i_0]) : (arr_10 [i_3] [i_3])));
                    arr_15 [i_4] [0] [i_0] [i_0] = (((arr_9 [10] [i_4 + 3]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : ((((min((arr_1 [i_0] [i_0]), (arr_6 [i_0] [i_3])))) ? var_8 : (arr_11 [i_4 + 1] [i_4] [i_4] [i_4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_7, (min(-838343413, 29507))));
                                var_21 = (arr_5 [i_3] [i_3] [2]);
                                var_22 = var_4;
                            }
                        }
                    }
                    var_23 = (arr_16 [i_0] [i_3] [i_4] [1] [i_3] [1]);
                    arr_22 [0] [i_0] = (((arr_3 [i_0]) ? (arr_16 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4 + 1]) : var_0));
                }
            }
        }
        var_24 -= ((((((arr_2 [10]) ? (arr_2 [6]) : (arr_2 [0])))) ? (arr_2 [0]) : (arr_2 [1])));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_25 = (min(var_25, var_16));
        var_26 = (arr_10 [i_7] [i_7]);
        arr_26 [i_7] = (min((max((min(var_4, (arr_25 [i_7] [i_7]))), (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]))), (arr_16 [i_7] [1] [i_7] [i_7] [1] [8])));
        var_27 ^= ((((min(4294967295, (arr_6 [i_7] [3])))) ? (arr_20 [10] [i_7] [10] [1] [i_7]) : (arr_2 [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        var_28 = (max((min((arr_24 [i_8]), ((min(var_15, var_5))))), (((((min((arr_34 [i_7]), (arr_3 [i_8])))) ? (arr_32 [i_10 + 1] [i_10 - 1]) : var_9)))));
                        var_29 = (((arr_25 [i_7] [i_8]) ? (arr_34 [i_10 + 1]) : (((((var_11 ? (arr_2 [i_8]) : (arr_16 [i_7] [i_8] [i_7] [5] [i_7] [i_7])))) ? ((var_13 ? var_17 : (arr_35 [i_7] [i_8] [i_9] [i_8]))) : (arr_11 [i_8] [i_10 + 1] [i_10] [i_10])))));
                        var_30 = (min(((var_4 ? ((var_5 ? var_5 : (arr_3 [i_8]))) : (arr_32 [i_9] [i_10]))), (arr_20 [i_7] [i_8] [i_8] [1] [i_10])));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            {
                                var_31 = (min((((arr_31 [i_8] [7] [i_9] [i_11]) ? (((var_7 ? (arr_23 [i_9]) : (arr_34 [i_12])))) : (max((arr_1 [i_7] [i_7]), (arr_6 [i_7] [i_7]))))), ((((arr_40 [i_11] [i_12 + 1] [i_12] [i_11] [i_12]) ? (arr_40 [i_9] [i_12 - 1] [i_12] [i_12] [i_12]) : var_9)))));
                                var_32 = (((((var_12 ? (arr_20 [i_7] [i_8] [1] [i_11] [i_12]) : (arr_41 [i_8] [i_12 - 1] [i_12 + 1] [i_12] [i_11] [i_8])))) ? ((min((arr_39 [i_7] [i_12 + 2] [i_9] [i_8] [i_12]), (arr_16 [i_7] [i_12 + 2] [i_9] [i_9] [i_12] [i_9])))) : ((((((arr_20 [i_7] [i_8] [i_9] [4] [i_8]) ? (arr_36 [i_11] [i_8] [i_9] [i_11]) : (arr_25 [0] [i_12])))) ? var_6 : ((min((arr_21 [i_11] [5] [i_8]), (arr_8 [i_11]))))))));
                                arr_43 [4] [i_11] [i_8] [i_8] [i_8] [9] = (arr_2 [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 20;i_15 += 1)
            {
                {
                    var_33 = (min(var_33, var_1));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 21;i_17 += 1)
                        {
                            {
                                arr_58 [10] [i_17] [i_15] [i_15] [i_17] [i_13] = arr_54 [i_14] [i_14] [i_16] [i_17];
                                var_34 = (max(var_34, (arr_56 [8] [i_15] [i_16] [i_15 + 4])));
                                var_35 = (arr_56 [i_13] [i_13] [i_17] [i_13]);
                                arr_59 [i_17] = (min(((max((arr_49 [i_13] [i_14] [i_13] [i_17]), (arr_49 [i_13] [12] [i_15] [i_16])))), (min((arr_52 [i_17] [i_14] [i_15 + 4] [i_16]), (arr_52 [i_13] [i_14 + 2] [i_16] [i_13])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = var_8;
    var_37 = var_15;
    #pragma endscop
}
