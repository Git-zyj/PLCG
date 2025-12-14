/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_10 |= (arr_1 [i_0 + 3] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [2] [i_2] [i_1] [i_0] &= (((var_3 + 2147483647) >> (235 - 206)));
                        var_11 = ((((((var_6 ? (arr_7 [12] [12] [9] [12] [12]) : 0)) + 2147483647)) >> ((((var_4 ? 32753 : var_3)) - 32738))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_12 = ((var_9 * (var_2 < var_4)));
                var_13 = var_6;
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_14 = ((395818395 * ((((arr_12 [8] [i_0 - 4] [i_0 - 4] [i_0 - 4]) ? (arr_15 [i_6]) : (arr_12 [i_0 + 2] [11] [i_6] [11]))))));
                arr_16 [i_0] &= -3925904180;

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_15 &= (((arr_12 [i_0 - 2] [i_4] [i_0 + 3] [i_7]) ? (369063116 | 395818395) : (arr_3 [i_6])));
                    var_16 = arr_9 [i_0 + 1] [i_0 - 4] [i_0 + 1];

                    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_17 = (arr_7 [i_8 - 1] [6] [i_7] [6] [6]);
                        var_18 = (max(var_18, (arr_15 [i_0 - 4])));
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_19 = var_5;
                        var_20 = (((((369063115 ? (arr_20 [23] [i_4] [i_4] [1] [i_4] [5] [i_4]) : (arr_15 [i_7])))) ? var_8 : (((var_1 >= (arr_22 [3] [i_6] [i_6] [i_4] [i_6] [i_0]))))));
                    }
                }
            }
            arr_25 [i_0] = (arr_2 [i_4] [i_0]);
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_30 [3] = (var_9 - 8);
            var_21 += var_8;
            var_22 &= arr_23 [i_0] [3] [i_10] [i_0 - 1] [i_10];
            arr_31 [i_0 + 3] [i_0 + 3] [20] = (((arr_14 [i_0 + 2] [i_0 - 2] [1] [i_0 + 1]) & (arr_14 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 4])));
        }
        arr_32 [i_0 + 1] = (arr_29 [i_0 + 1] [i_0] [i_0 + 1]);
        var_23 = (arr_3 [i_0 + 2]);
    }
    for (int i_11 = 4; i_11 < 15;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 14;i_13 += 1)
            {
                {
                    arr_41 [2] [15] [i_13 + 1] [i_13] = ((-((var_7 - ((var_1 / (arr_14 [11] [1] [i_11] [i_11])))))));
                    var_24 = (max(274876858368, (arr_1 [i_11 + 1] [i_13 - 1])));
                    var_25 = ((((min((arr_33 [i_13]), (arr_23 [i_11] [i_11 - 2] [i_12] [i_13 - 1] [i_13 - 2])))) * ((min(-32756, (max(var_7, 7496)))))));
                }
            }
        }
        arr_42 [i_11] &= ((((arr_12 [i_11] [i_11 - 1] [i_11 - 1] [1]) / ((min(var_8, var_3))))));
        var_26 = (((((var_5 | var_7) ? (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11]) : (max((arr_22 [16] [0] [16] [i_11] [i_11] [i_11 - 3]), (arr_6 [i_11] [i_11] [i_11] [i_11]))))) | var_0));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    {
                        var_27 = (369063116 != 17334146349536630830);
                        var_28 = ((((((((var_8 != (arr_39 [i_11] [i_11])))) <= (arr_7 [i_11 - 3] [i_14] [i_11 - 3] [i_16] [i_14])))) | ((12 << (((arr_18 [i_11 + 1]) - 4069664171))))));
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, ((((max((var_7 + var_6), ((max(var_1, var_6))))) * var_8)))));
    var_30 = ((((max(243, 213))) >> ((((10 ? var_4 : 235)) - 18446744071674893566))));
    #pragma endscop
}
