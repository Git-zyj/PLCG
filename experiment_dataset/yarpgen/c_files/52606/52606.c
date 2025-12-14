/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = var_11;
        var_19 = var_5;
        var_20 = (min(var_20, (((+(((((arr_0 [i_0]) <= (arr_0 [i_0]))) ? (var_16 <= var_0) : (max(var_14, var_17)))))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (min(var_21, (arr_2 [i_1])));
            var_22 = var_0;
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_23 = (min(var_23, ((max(((max(((max((arr_5 [i_2] [i_2 + 3] [i_0]), (arr_7 [4] [i_2] [i_2 + 1])))), (min(var_7, var_15))))), ((((!(arr_6 [i_0] [i_2] [i_2]))) ? (((var_0 ? var_10 : (arr_1 [i_0])))) : (max(var_3, var_4)))))))));
            var_24 = ((((min((arr_6 [i_2 + 4] [i_2] [i_2]), var_16))) ? (((var_0 ? (arr_5 [i_0] [i_2 + 1] [i_0]) : (arr_5 [i_0] [i_2 + 3] [11])))) : (max((arr_4 [i_0] [i_2] [i_2 + 3]), ((((arr_7 [i_0] [i_2 + 1] [i_0]) > var_15)))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_25 = (((arr_5 [i_0] [i_3] [i_3]) ? var_14 : (arr_5 [3] [i_3] [i_3])));
                        var_26 = (min(var_26, (((-(arr_7 [i_0] [i_0] [3]))))));
                    }
                }
            }
            arr_15 [i_0] [i_0] [5] = var_4;
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] |= ((((var_3 ? (arr_16 [i_6] [i_6]) : (arr_16 [i_6] [1]))) * ((((arr_17 [i_6] [i_6]) < (arr_17 [i_6] [i_6]))))));
        var_27 = max(var_16, (arr_17 [9] [i_6]));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_28 = ((((((arr_21 [i_7]) ? (arr_19 [i_7] [i_7]) : var_11))) ? (arr_20 [15] [i_7]) : (((var_5 < (arr_20 [19] [i_7]))))));
        var_29 &= var_11;
    }
    var_30 ^= var_4;

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_9] [i_8] = (max((arr_16 [i_8] [3]), (arr_27 [i_10] [i_9])));

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_31 = (max(var_31, ((min((((arr_26 [i_11] [i_10]) ? (arr_26 [i_9] [i_10]) : (arr_32 [i_9] [i_10] [i_9] [i_9] [i_9]))), (max((arr_24 [i_11] [i_11]), (arr_24 [i_11] [i_10]))))))));
                        var_32 = (min(var_32, (arr_26 [i_10] [i_9])));
                        var_33 = (max(((((max((arr_17 [i_8] [i_10]), (arr_24 [i_8] [i_9])))) ? (arr_25 [11] [i_9]) : (max(var_11, (arr_25 [i_8] [i_10]))))), (arr_17 [i_8] [18])));
                        var_34 = (((((-(arr_21 [1])))) ? var_15 : (((((var_10 ? var_7 : var_11))) ? (arr_27 [i_8] [i_8]) : var_7))));
                    }
                }
            }
        }
        var_35 = ((((max((!var_9), ((var_3 & (arr_28 [1] [i_8] [i_8])))))) ? (((!(arr_31 [i_8] [i_8] [i_8] [7])))) : (arr_17 [i_8] [19])));
    }
    for (int i_12 = 2; i_12 < 8;i_12 += 1)
    {
        var_36 = (max(var_36, ((((((~(arr_9 [i_12 + 1] [i_12 + 2] [i_12 - 2])))) ^ (max(var_12, (arr_29 [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12 - 1]))))))));
        var_37 = (((((arr_12 [i_12] [i_12 + 1] [i_12 + 1] [i_12]) ? ((var_13 ? var_11 : var_1)) : -var_17))) ? ((var_9 ? (arr_26 [5] [i_12]) : var_14)) : (max(var_12, ((max(var_2, (arr_26 [i_12 - 1] [i_12])))))));
        var_38 = ((~(min(((((arr_21 [4]) & var_11))), var_1))));
    }
    var_39 = var_5;
    #pragma endscop
}
