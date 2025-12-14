/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 1] [i_2] [1] = ((-((max((arr_6 [i_1 + 1] [i_1] [i_1]), (arr_7 [i_1 + 1] [i_2] [i_2]))))));
                    var_19 ^= ((((min((((arr_4 [i_0]) > var_6)), (((arr_3 [1]) > (arr_4 [i_1])))))) ^ (arr_0 [i_0])));
                }
            }
        }
        var_20 = (min(((-(max((arr_5 [i_0] [i_0]), var_1)))), ((((arr_1 [i_0] [i_0]) * 23185)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_21 = ((~(((arr_10 [6] [i_5] [i_3]) * var_18))));
                            arr_19 [i_3] = ((-(max(((var_12 ? (arr_4 [i_6]) : (arr_10 [i_0] [1] [i_4]))), (~45483)))));
                        }
                        arr_20 [i_3] [1] [i_4] [i_4] = ((((((arr_1 [i_5 + 1] [i_5 - 1]) >= (arr_1 [i_5 + 1] [i_5 + 1])))) - (arr_1 [i_5 + 1] [i_5 - 1])));
                        var_22 -= (arr_12 [i_0] [i_3] [i_4] [i_4]);
                        var_23 = (min(var_23, (((-((-(arr_0 [i_0]))))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_24 = ((!((!(arr_23 [10])))));
                        var_25 = var_2;
                        var_26 = (min(((((min(63, (arr_28 [i_9] [i_8] [5] [i_10])))) ? (min((arr_31 [i_7] [i_7] [11] [i_8 + 1] [i_9] [i_10]), (arr_27 [i_7] [i_9] [i_9] [i_9]))) : (((~(arr_22 [i_7])))))), (~63)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                {
                    var_27 -= (((min((((!(arr_30 [i_7] [i_7]))), (arr_28 [i_12] [i_11] [i_12] [i_11]))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_28 -= (max(((var_4 ^ (arr_33 [i_13 + 1] [5] [i_14]))), (arr_29 [i_11] [i_13 - 1])));
                                arr_44 [i_12] [i_11] [i_12] [i_12] &= (!(arr_32 [i_7] [14] [i_13 + 1] [i_7]));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 14;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_29 = (max((((min((arr_52 [i_16] [i_16]), (arr_47 [i_16 + 1] [i_16]))))), (max((arr_53 [i_15] [i_16] [i_17] [i_18] [i_18] [i_18]), (((!(arr_52 [i_15] [i_16]))))))));
                            var_30 |= (max((arr_45 [i_16 + 2]), (arr_52 [i_15] [i_15])));
                            var_31 = ((~((~(arr_52 [i_16 + 1] [i_16 + 2])))));
                        }
                    }
                }
                var_32 = (min(var_32, (((var_6 ? var_12 : (((((var_13 ? 159 : (arr_50 [12] [i_16] [i_15]))) != (arr_48 [6] [i_16])))))))));
            }
        }
    }
    #pragma endscop
}
