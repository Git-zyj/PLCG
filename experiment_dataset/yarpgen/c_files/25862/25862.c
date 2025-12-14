/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_2 * var_1) && var_5));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] = 777706919;
                                var_15 ^= (((arr_4 [9] [9] [9]) - (min(-var_13, (arr_9 [i_4] [i_4 + 1] [0] [i_4] [i_4] [i_4 - 1] [i_4 - 3])))));
                                var_16 = ((arr_6 [i_0] [9] [i_1]) ? ((((((var_11 ? (arr_7 [7] [i_1] [i_1] [3] [2] [i_1]) : 65532))) && (arr_8 [i_0] [i_0] [i_2] [i_4 - 4] [i_4] [i_0])))) : var_10);
                            }
                        }
                    }
                    var_17 = ((((((((~(arr_10 [5] [i_1])))) * (arr_4 [i_0] [i_1] [i_2 - 3])))) / (((arr_4 [i_0 - 1] [i_0 - 1] [i_2 + 3]) ? ((~(arr_0 [i_0 - 1]))) : (((((arr_5 [i_0] [i_0] [i_1] [2]) && (arr_0 [i_2 - 1])))))))));
                }
            }
        }
        var_18 = ((((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))) && 8321583490554768606));
        arr_12 [8] [i_0] = 1572698249;
        var_19 = (min((((((min((arr_3 [i_0] [i_0]), (arr_1 [i_0])))) ? -24 : ((-(arr_4 [i_0] [i_0] [i_0 - 2])))))), (arr_3 [i_0] [i_0 - 1])));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_15 [9] = (1572698246 * ((((arr_4 [i_5 + 1] [i_5] [i_5]) && (arr_6 [i_5] [i_5 - 2] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_20 = -5;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_28 [i_6] [i_8] [i_5] [i_5] [i_6] = (((arr_24 [i_8 + 1] [i_8 + 1] [i_8] [i_9]) + ((1572698249 ? (arr_18 [i_6]) : (arr_17 [i_5])))));
                                var_21 = (max(var_21, ((((((((0 ? 1268738749 : 0)) - var_10))) ? (arr_18 [i_5]) : var_6)))));
                                var_22 = (max(var_22, (var_1 || 5)));
                                var_23 ^= arr_6 [i_5] [i_6 + 4] [i_5];
                            }
                        }
                    }
                    var_24 = (((((arr_13 [i_7 + 1]) ? (arr_20 [i_5 + 1] [i_7 - 1]) : (arr_25 [i_6]))) ^ (~16)));
                    var_25 = (min(var_25, (((((max((max(1572698249, -1139870198)), (max(-2147483646, -1572698247))))) ? 4294967271 : ((min((~245), (max(var_2, -18))))))))));
                }
            }
        }
        var_26 ^= (((arr_26 [i_5] [8] [i_5] [i_5] [i_5]) ? (12 & -1032040735) : 0));
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_31 [i_10] [i_10] = -1572698246;

        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_27 = (((arr_39 [6] [6] [i_11 - 2] [i_11] [i_11 - 2]) ? -10 : var_4));
                        arr_42 [i_10] [i_12] = ((((((arr_32 [i_10] [i_11] [i_12]) / -2147483642))) ? (arr_35 [i_10] [2] [i_12]) : (arr_39 [i_11 - 1] [i_11 + 2] [i_12] [i_13] [2])));
                    }
                }
            }
            arr_43 [i_10] = 20;
        }
    }
    var_28 = (((+-1139870202) ? ((max(var_5, 10))) : ((3 + (max(var_7, var_0))))));
    var_29 = var_3;
    #pragma endscop
}
