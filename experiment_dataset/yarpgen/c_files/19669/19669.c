/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((0 ? 102 : var_7)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = (max(var_20, ((min((arr_5 [6]), (((var_1 ? (arr_1 [1]) : (max(2999266592, var_2))))))))));
            var_21 = (arr_4 [i_0]);
            arr_6 [i_0] [i_1] = (min(6322749786377622760, var_2));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((~85) ? ((min(-103, -4713954435199246004))) : 1)))));
                            arr_19 [6] [i_0] [i_0] [i_0] [i_0] = ((((min((arr_18 [i_4] [1] [i_4] [i_4 - 1] [i_3]), 32))) ? ((min((arr_16 [i_4] [i_4] [i_4] [i_4 + 1] [i_3]), 753113728))) : (((arr_18 [i_5] [i_5] [i_4] [i_4 + 1] [1]) ? 2291776377185417648 : (arr_12 [1] [i_4] [i_4 - 1] [9])))));
                            arr_20 [i_0] [i_0] = ((31135 && 2999266592) > (~var_8));
                            arr_21 [i_0] [i_2] [0] [2] [0] [i_2] [i_2] = (max(753113728, ((min(1045370778, 753113736)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_23 = ((var_16 ? var_12 : ((((2712 ? (arr_23 [i_6] [i_0]) : (arr_26 [i_7] [i_6 + 3] [i_0] [i_0]))) | (arr_16 [i_6 - 1] [2] [i_0] [i_7] [2])))));
                        var_24 = ((((max(12, (!-112)))) ? ((-(arr_26 [i_0] [i_0] [i_6 - 1] [i_0]))) : ((((min(var_19, (arr_9 [i_0] [7]))))))));
                        var_25 = ((var_11 & (((arr_10 [i_6 + 1] [i_6 + 1]) ? -103 : (arr_5 [i_0])))));
                        var_26 = 1295700683;
                    }
                }
            }
        }
        var_27 = (((((29594 ? 3541853560 : 65513))) / (max(var_16, 2291776377185417651))));
        var_28 = 6601;
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_43 [i_8] [i_9] [i_10] [i_8] [i_10] = ((var_16 | (arr_35 [i_8] [17] [i_8] [i_8])));
                            arr_44 [i_8] [2] [i_10] [i_10] [i_9] [i_8] [i_8] = 112;
                            var_29 = ((3468862767745040243 ? var_10 : (arr_38 [i_10] [i_9] [3] [i_10] [10])));
                            arr_45 [i_8] [i_9] [i_8] [i_10] [i_11] [i_12] = ((~((((arr_29 [i_8] [i_8]) >= var_5)))));
                            arr_46 [i_8] = (((arr_42 [i_8] [i_8] [i_8] [i_10] [i_11] [i_12] [i_12]) ? (arr_42 [i_8] [i_8] [i_10] [i_10] [i_11] [i_10] [i_12]) : (arr_42 [i_10] [i_12] [0] [i_10] [i_10] [i_9] [0])));
                        }
                    }
                }
            }
            var_30 = ((var_9 ? (arr_41 [i_8] [i_8] [i_9] [i_9] [13] [i_8]) : (arr_41 [i_9] [i_8] [i_9] [i_8] [i_8] [i_8])));
            var_31 ^= arr_39 [i_9] [i_9] [i_9] [i_8];
            arr_47 [i_8] [i_8] = ((var_6 ? (arr_35 [i_8] [i_9] [i_8] [i_8]) : -21045));
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            var_32 = (-2147483647 - 1);
            var_33 = ((42 ? 73 : 25779));
        }
        var_34 = 22;
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_35 = (((1 ? (((min(var_14, var_4))) : -3286974392252083822))));
        var_36 = 31162;
    }
    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                {
                    arr_62 [6] [i_16] [i_16] [i_15] = ((max(var_12, var_19)));
                    var_37 = ((min(var_1, ((min(var_4, var_14))))));
                    var_38 = (max((max(var_14, (arr_29 [i_16] [i_17]))), (var_8 < 12073)));
                }
            }
        }
        var_39 = -87;
    }
    #pragma endscop
}
