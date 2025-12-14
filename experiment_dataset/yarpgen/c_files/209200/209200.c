/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] = max(((((arr_7 [i_0] [i_3] [i_3]) ? var_7 : (arr_6 [i_0] [0] [6] [i_3])))), (((var_14 | var_13) ? (min(var_15, var_6)) : (arr_9 [i_3] [i_1]))));
                        var_16 = ((((min(var_12, var_9)) + 49152)) / var_15);
                        var_17 -= (((max((max(var_13, (arr_6 [6] [i_1] [i_2] [6]))), 141918837)) == ((((max(var_4, var_12))) ? var_15 : ((var_15 >> (var_2 - 1686900690)))))));
                    }
                    var_18 += (((((max(var_3, var_4)) ^ (arr_6 [i_0] [5] [10] [i_2])))) ? (arr_9 [i_1] [9]) : (((arr_2 [i_0] [6]) ? (arr_4 [i_0] [i_0] [8]) : (arr_9 [i_1] [i_2]))));

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_19 = (((arr_2 [i_0] [i_0]) || (((((min((arr_3 [i_0]), 4294918141))) ? ((1471145801 + (arr_5 [i_0]))) : (1471145801 / var_2))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] = min((min((arr_1 [i_0] [i_4 + 1]), 2447646843)), (max((arr_6 [i_0] [0] [i_0] [i_4]), var_13)));

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            var_20 = ((arr_4 [i_4 - 1] [i_5 - 3] [8]) ^ (arr_16 [i_2]));
                            var_21 = arr_12 [i_4] [i_1] [i_0] [6];
                            arr_18 [0] [0] [9] [0] [i_0] = var_1;
                        }
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = var_5;
                        var_22 = var_1;

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] = min(var_3, (((arr_12 [i_0] [i_1] [i_0] [i_6]) + var_6)));
                            var_23 = (min(2526948922, (arr_5 [i_0])));
                            arr_25 [i_0] [i_1] [i_2] [i_6] [i_0] = var_7;
                            var_24 |= (2823821495 ? (max(var_14, 4294918143)) : (((((arr_1 [i_6] [i_7]) <= 2823821513)))));
                        }
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            var_25 += min((((arr_27 [i_8 + 1] [i_8 + 1] [i_2] [i_2] [i_8 + 1]) ^ (arr_22 [i_8 + 1] [i_6] [i_6] [i_6] [i_8 + 1]))), var_2);
                            var_26 -= (((((var_2 > (min(var_4, var_5))))) << (((min(((var_6 ? (arr_7 [i_8 + 1] [i_1] [i_1]) : 2823821495)), var_12)) - 1615512443))));
                            arr_29 [i_0] [i_1] [i_2] [i_2] [i_0] = max((min(var_6, (arr_15 [2] [i_1] [i_2] [i_0] [i_8 - 1]))), (min(var_12, var_6)));
                            arr_30 [i_0] [i_1] [i_0] [i_0] [i_2] [i_6] [i_8 - 1] = ((((-(arr_2 [i_1] [i_0])))) ? (min((arr_23 [i_0] [i_8 - 1] [i_0] [i_6] [11]), var_14)) : var_0);
                        }
                        var_27 |= min(4294967295, (max(var_11, var_12)));
                        var_28 = min((((arr_17 [i_0] [i_0] [i_0]) ? (min(var_4, var_0)) : (max((arr_6 [i_0] [i_0] [i_2] [i_6]), var_8)))), (arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [8]));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_29 = var_5;
                        arr_34 [1] [i_0] [6] [i_9] = ((arr_11 [i_0] [i_1] [i_2] [i_9] [i_0] [i_1]) * (4294967295 | var_12));
                    }
                    var_30 = min(var_15, (min((arr_28 [i_0] [i_0]), (min(var_12, (arr_4 [i_0] [i_1] [i_2]))))));
                    var_31 = var_2;
                }
            }
        }
    }
    var_32 = (((min(var_6, (min(var_1, var_8))))) ? ((((max(18, var_7))) ? ((var_13 ? var_7 : var_15)) : (max(var_4, var_6)))) : (min((max(var_13, var_12)), (4294918144 & 49152))));
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_33 -= (((4294967286 + var_7) + (arr_23 [8] [i_11] [8] [2] [2])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 8;i_14 += 1)
                        {
                            {
                                var_34 = var_12;
                                var_35 = var_3;
                                var_36 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
