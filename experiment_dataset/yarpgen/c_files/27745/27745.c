/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (var_7 / 4167)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(((-((var_6 ? (arr_5 [i_0] [i_0]) : (arr_2 [i_1]))))), (arr_3 [i_0] [1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 |= (-((((arr_1 [i_0 - 2]) <= ((max((arr_7 [11]), var_3)))))));
                            var_13 |= 1208933315;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_1] [i_0] [8] [i_5] = ((~(arr_19 [7] [i_1] [i_1] [i_5] [5])));
                                var_14 = (min((((arr_13 [i_0]) + (((24827180 ? (arr_0 [i_0]) : var_1))))), (min(((min((arr_8 [1] [i_1] [11]), var_3))), 24827195))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_15 = (min(((~(arr_38 [i_10] [i_11] [i_11 + 1] [i_11 - 1] [i_11 + 1]))), ((~(arr_34 [1] [1] [1] [i_11 + 1])))));
                                arr_39 [i_7] [1] [i_10] [i_10] [1] = 206;
                                arr_40 [i_7] [18] [i_10] = ((((min(((61 ? (arr_31 [i_7] [i_8] [i_9] [i_10]) : -1121942327)), var_6))) ? (arr_31 [i_11 + 1] [i_10] [i_8] [i_7]) : var_0));
                                arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_10] = (min(562949953419264, (((((var_1 % (arr_31 [i_10] [i_10] [i_10] [i_10])))) / (min(var_8, (arr_29 [i_7] [21] [i_9] [i_9])))))));
                            }
                        }
                    }
                    var_16 = var_3;
                    var_17 = 1490301373;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_49 [i_9] [i_9] [5] [23] [i_13] [i_9] [i_9] = (arr_25 [i_8] [i_12] [i_13]);
                                var_18 ^= (((arr_25 [i_7] [i_9] [i_7]) ? -32747 : (arr_32 [1] [i_7] [i_13])));
                                var_19 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_20 ^= ((~(((arr_27 [i_7] [9] [i_9]) ? (arr_34 [i_8] [i_9] [i_14] [i_9]) : var_3))));
                                arr_54 [i_7] [i_7] [i_7] [i_7] [1] = ((((((arr_26 [i_7] [i_8]) ? (arr_26 [i_9] [i_8]) : (arr_26 [i_8] [i_8])))) ? ((2449199272 ? 18446744073709551615 : (arr_26 [i_8] [1]))) : (arr_26 [i_7] [i_7])));
                                var_21 += var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
