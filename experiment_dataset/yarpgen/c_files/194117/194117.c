/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_8 ? var_0 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_12 [i_4 + 1] [i_0] [i_0] [i_1] = (arr_4 [i_0] [i_2]);
                                var_11 += (min(16080, 49461));
                                arr_13 [2] [i_1] [2] [12] [i_0] = arr_2 [i_0] [i_3];
                                var_12 = (arr_3 [i_0] [i_1 + 3] [i_2]);
                                var_13 ^= (arr_5 [0]);
                            }
                        }
                    }
                }
                arr_14 [4] [4] [i_0] = ((((~((min(var_4, 1))))) >> ((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) + 6781295686259752251))));
                var_14 = ((((((min((arr_0 [i_0]), var_7))) ? (arr_3 [i_1] [i_0] [i_0]) : (var_7 | var_1)))) <= (((arr_11 [i_1] [9] [i_1 - 1]) ? (arr_11 [i_1] [i_1 - 1] [i_1 - 1]) : (arr_11 [i_1] [i_1 + 1] [i_1 - 1]))));

                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    arr_18 [i_0] = (((16083 | 1) >> ((((49461 ? (arr_8 [i_0] [i_0] [i_5 - 2] [i_1 - 1]) : (arr_16 [i_0] [i_1] [i_0]))) - 6781295686259752189))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_15 -= (arr_8 [i_6] [i_6] [i_1] [i_1]);
                                arr_24 [i_0] [i_1] = (min((arr_15 [i_0] [i_1] [i_6]), (arr_6 [i_1 + 2] [i_5 + 1] [i_1 + 1] [i_1 + 2])));
                            }
                        }
                    }
                    arr_25 [i_0] = ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_16 ^= (min(var_5, (min(((min(1, 49455))), (((arr_15 [6] [i_1] [i_1]) / (arr_3 [i_0] [i_0] [i_0])))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_17 = (((arr_23 [i_0] [i_0] [i_8] [1]) ? var_7 : (arr_19 [9] [i_1] [i_1] [i_0])));
                        arr_31 [i_8] [12] [12] [i_0] |= (arr_16 [i_0] [i_1] [6]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_18 |= (max(((var_7 ? ((var_1 ? (arr_28 [2] [i_1] [2] [2]) : (arr_5 [i_1]))) : var_3)), (((((((arr_6 [12] [12] [11] [i_10]) ? (arr_19 [i_0] [6] [i_8] [2]) : (arr_23 [i_0] [i_1 + 3] [i_8] [i_1 + 3])))) ? (arr_20 [i_0] [i_0] [i_1 + 1] [i_10]) : (((arr_5 [i_10]) ? (arr_29 [i_0] [i_0] [i_8] [i_0] [i_10]) : (arr_26 [i_0]))))))));
                        arr_34 [i_0] [i_0] [i_0] = (min((min((arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2]), (arr_8 [i_0] [i_0] [i_1 + 2] [2]))), var_4));
                        var_19 = (!16109);
                        arr_35 [i_0] [i_0] [i_1 + 2] [12] [i_10] [i_0] = (min(((((((~(arr_2 [i_0] [i_0])))) ? ((var_7 ? var_6 : (arr_20 [i_8] [i_8] [i_1] [i_0]))) : (arr_32 [i_10] [1] [i_0] [i_1 - 1] [i_1 - 1])))), (arr_17 [i_0] [i_1] [i_0] [i_10])));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_20 = (arr_5 [13]);
                        var_21 += (((arr_21 [12] [i_1 - 1] [i_1 + 2] [i_11]) / (((arr_7 [i_0] [i_1] [i_0]) ? (arr_29 [i_11] [i_11] [i_8] [i_1] [i_0]) : var_1))));
                        arr_39 [i_0] [10] &= ((16093 ? (arr_6 [i_0] [i_1 + 2] [i_8] [i_11]) : 16085));
                        arr_40 [i_0] = (((arr_37 [i_0] [i_1 + 2] [i_0]) & (arr_37 [i_0] [i_1 + 3] [i_0])));
                        var_22 += 16092;
                    }
                }
                arr_41 [i_0] [i_1] [i_0] = (arr_29 [i_1 + 3] [10] [10] [i_1 + 1] [i_1 + 2]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 3; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 19;i_14 += 1)
            {
                {
                    arr_52 [i_12] [i_13] = (arr_42 [i_12]);
                    var_23 = (min((max((arr_44 [i_12]), var_2)), ((var_6 & (arr_44 [i_12])))));
                }
            }
        }
    }
    var_24 = (max(var_24, (((((min(((22269 ? var_7 : var_7)), ((var_9 ? -1594676317 : var_7))))) ? var_6 : var_5)))));
    var_25 = ((var_8 ? (min((min(6182305951852495518, var_6)), (((var_8 ? -126 : var_7))))) : var_4));
    #pragma endscop
}
