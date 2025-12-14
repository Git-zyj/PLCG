/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (max(((var_7 ? 74 : (max(1, 4688201033568429761)))), (((+(min((arr_0 [i_0]), (arr_6 [i_2] [i_2]))))))));
                                var_16 |= (max((min(((min((arr_1 [i_2]), (arr_2 [12])))), var_7)), ((((arr_0 [2]) * (arr_0 [6]))))));
                                var_17 = (((((-(arr_6 [1] [i_2 + 1])))) != ((-var_2 * (((arr_11 [i_0] [3] [3] [i_3] [7]) / var_7))))));
                                arr_13 [i_0] [i_2] [i_0] = ((((-(max(-1169051634, 1)))) + var_14));
                                var_18 = ((-(--1007555301)));
                            }
                        }
                    }
                }
                var_19 = (((-(max(var_11, (arr_10 [i_0]))))));
                var_20 = (max(var_20, (((1683739820 / (-127 - 1))))));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_16 [1] [i_1] [4] [i_5] |= -var_12;
                    arr_17 [i_0] = (max((((((max(var_7, (arr_11 [6] [6] [i_1] [0] [i_5])))) ? (((arr_14 [i_0]) ? var_13 : var_8)) : ((((arr_5 [i_0] [i_0] [i_0]) <= var_0)))))), (((((var_11 ^ (arr_15 [i_0] [i_0])))) ? (arr_7 [1] [1] [i_5]) : ((var_10 ? var_7 : var_10))))));
                    var_21 = min(((543747998 - (111 - 0))), -1683739824);
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    var_22 = (max(var_22, ((((((var_2 ? (((arr_8 [i_0] [i_0] [i_0] [i_6] [6] [6]) ? (arr_4 [0]) : var_3)) : (arr_20 [i_0] [i_6])))) ? var_7 : ((((arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [8] [i_6 + 1]) ? (arr_0 [10]) : (arr_0 [6])))))))));
                    arr_21 [12] [2] [i_0] = ((-(arr_5 [i_6 + 1] [i_6 + 1] [i_6 + 2])));
                    arr_22 [i_0] [i_0] [i_6] = (min((((arr_2 [i_0]) ? (((var_15 ? (arr_6 [i_0] [i_0]) : (arr_10 [i_0])))) : (arr_8 [i_0] [i_0] [i_0] [3] [i_0] [i_6]))), (arr_20 [i_1] [3])));
                    var_23 = ((!(((arr_9 [i_6 + 2] [i_0] [i_6 - 1] [i_6 - 1]) && var_12))));
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_24 -= (~1073733632);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 = ((((min(var_9, (arr_0 [i_0])))) ? ((((arr_0 [i_0]) ? (arr_28 [i_0]) : (arr_28 [i_0])))) : (arr_0 [i_0])));
                                var_26 = (((((arr_0 [i_0]) ? -32512 : 94))) ? (max((((arr_15 [i_0] [i_0]) / var_3)), (((var_10 == (arr_20 [i_0] [11])))))) : ((((-(arr_23 [3] [i_7] [3] [i_9]))) % (arr_24 [i_7 + 1] [i_8]))));
                            }
                        }
                    }
                    var_27 |= ((-((~(((arr_23 [i_0] [i_1] [i_7] [i_7]) ? var_11 : var_14))))));
                    var_28 = ((-(arr_4 [i_0])));
                    arr_33 [i_0] [i_0] [13] = (((1 && 2141594840) ? ((-((-(arr_0 [i_0]))))) : var_3));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_29 = ((((((arr_31 [i_0] [i_0] [i_10]) + (arr_5 [i_0] [i_0] [i_0])))) * var_4));
                    var_30 = var_1;
                    var_31 = (min(var_7, (max((arr_11 [9] [9] [10] [10] [i_10]), var_4))));
                }
            }
        }
    }
    var_32 = (min(((3245553169 ? 3381351141337070035 : -var_11)), -5987));
    var_33 = ((26437 ? (((213 ? var_15 : var_14))) : -15045686457146477402));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_34 = ((-(((var_11 % var_14) ? ((var_9 ^ (arr_26 [12] [12] [i_12] [i_11]))) : (min(var_4, (arr_5 [9] [4] [4])))))));
                    var_35 = (arr_31 [i_11] [i_11] [i_13]);
                    arr_46 [i_11] [i_11] = (+((((min((arr_11 [i_11] [1] [1] [1] [1]), var_7)) != (arr_15 [i_11] [i_11])))));
                }
            }
        }
    }
    #pragma endscop
}
