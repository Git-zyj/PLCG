/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_2] [i_2] [i_0] [11] = (arr_3 [i_1 - 2]);
                            arr_9 [i_0] [i_1] [i_2] [10] [11] = var_2;
                            var_10 = (max(var_10, (((var_0 << (arr_5 [i_1 - 2] [1] [i_1]))))));
                            var_11 = ((~((((arr_1 [i_0]) != 1104490324)))));
                        }
                    }
                }
                var_12 = (arr_7 [i_0] [i_0] [i_1 + 1]);
                var_13 = (max(var_13, (((0 ? (((((arr_4 [6] [i_1] [6]) % (arr_0 [8] [i_0]))))) : ((~(((!(arr_4 [i_0] [i_0] [16])))))))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_14 = (max((max(-var_0, 8)), (((((((arr_11 [i_0]) ? (arr_5 [i_0] [6] [i_0]) : (arr_11 [i_0])))) ? var_9 : (((var_3 || (arr_6 [i_4] [i_1] [7] [i_0])))))))));
                    arr_12 [i_0] [15] [i_0] [17] = (max((((arr_1 [i_1 - 1]) ? 246 : 2093056)), ((max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1]))))));
                    arr_13 [i_1] [i_0] [i_0] [i_0] = var_2;
                }
            }
        }
    }
    var_15 |= var_4;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_16 += ((max((((var_4 ^ (arr_24 [i_7] [2] [i_5])))), (arr_4 [14] [i_6 - 1] [20]))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_31 [i_6 - 1] [i_7] [i_9] = ((-(max((arr_18 [i_6 - 2] [i_6]), 4294967295))));
                                var_17 = (arr_20 [i_7]);
                                var_18 = (~1104490324);
                                arr_32 [i_9] [i_7] [i_9] [i_9] [i_9] = ((((arr_11 [i_7]) ? var_7 : ((var_4 ? var_8 : (arr_27 [i_5] [i_8] [i_7] [i_7]))))) - ((((1 << (var_1 - 56765))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_19 = ((-(max((((-(arr_7 [11] [i_7] [14])))), ((var_1 ? var_7 : (arr_28 [i_5] [6] [0] [i_10] [i_10] [i_7] [i_7])))))));
                                var_20 = ((((arr_37 [i_5] [i_6 + 2] [i_6] [i_6 - 2] [i_7] [i_11 + 1] [i_11]) / (arr_37 [i_5] [i_6] [i_6] [i_6 + 2] [0] [i_11 + 2] [i_11]))) < (((arr_37 [i_5] [i_6] [1] [i_6 - 1] [i_7] [i_11 + 2] [i_11 + 2]) << var_2)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_21 = (arr_26 [i_5] [4] [i_13] [i_12 + 2] [i_13] [0]);
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_22 = (-(arr_46 [i_5] [i_12] [i_13] [i_14 + 1] [i_12]));
                                arr_47 [i_12] [1] [i_13] [7] [i_15] [i_15] = max(72, 8891805733179106160);
                            }
                        }
                    }
                    arr_48 [i_12] [i_12] [i_13] [i_13] = (max(1, ((((var_3 % (arr_42 [i_12] [i_12]))) % 6481276564955608361))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                {
                    var_23 = (min(var_23, (((+(max((arr_37 [i_17] [1] [i_16] [i_16] [10] [i_5] [i_5]), ((var_2 ? (arr_26 [10] [i_17] [10] [i_5] [1] [0]) : var_9)))))))));
                    var_24 -= (((((var_8 ^ (arr_39 [i_17] [i_16] [1])))) / (max(4294967294, (18446744073709551615 == 15468658638333779274)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        var_25 = (arr_7 [13] [i_18] [i_18]);
        arr_57 [i_18] [i_18] = (((arr_3 [i_18]) ? -var_8 : (arr_10 [1] [1] [1])));
    }
    #pragma endscop
}
