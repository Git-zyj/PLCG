/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((-((3398797450 ? 9840390292521286389 : 0)))), (arr_2 [i_0] [i_1])));
                var_13 = (arr_2 [i_0] [9]);
                var_14 = (arr_0 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((var_0 ? (arr_5 [i_4] [i_4]) : 8606353781188265224)))));
                                arr_14 [i_0] [i_1] [i_0] [7] [i_2] [i_3] [1] = (min(-1415798712, ((((arr_10 [i_3] [i_4 - 3] [i_4 + 1] [i_4 - 1] [i_4] [i_4]) ? (arr_13 [i_3 + 1] [i_0] [i_4 - 2] [i_0] [i_4]) : (arr_13 [1] [i_0] [i_3] [i_3] [i_3]))))));
                                var_16 = (((574784193 ? 598943882 : 63)) - (arr_5 [i_3 + 2] [i_0]));
                                var_17 = (((((((4095 > (-2147483647 - 1)))) > (arr_13 [i_0] [i_0] [i_0] [i_3] [i_4]))) ? ((-(arr_13 [i_0] [i_0] [i_4 - 2] [i_4] [i_4 - 4]))) : ((((min(4294967295, (arr_7 [i_4] [i_0] [i_0] [1])))) ? ((-(arr_0 [i_2] [17]))) : var_10))));
                                var_18 = ((((((-(arr_0 [i_0] [17]))) <= ((~(arr_2 [i_0] [i_4]))))) ? (896169845 > 8606353781188265226) : (arr_5 [i_1] [i_0])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_19 -= (((((arr_7 [i_0] [16] [i_2] [i_0]) ? 2937261574 : (-127 - 1))) / (((+((14869975571901043066 ? (arr_11 [i_0] [i_1] [18] [15]) : (arr_10 [0] [i_1] [0] [i_5] [i_1] [0]))))))));
                        var_20 |= (arr_7 [i_0] [i_0] [i_2] [i_0]);
                        var_21 = (((arr_5 [i_0] [i_0]) / 896169817));
                        var_22 = (max(var_22, ((((!2210591483) ? (arr_16 [i_1] [i_1] [i_2] [i_5]) : (arr_12 [i_2] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 = (max(var_23, -5));
                        var_24 = (((arr_4 [i_0]) > 65512));
                        var_25 = (((((arr_15 [i_0] [i_0] [i_0]) ? var_11 : 34539)) - (arr_0 [i_1] [i_1])));
                    }
                    arr_20 [i_0] = (((arr_4 [i_0]) ? var_3 : (arr_10 [i_0] [17] [5] [17] [i_1] [i_0])));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_0] [18] [i_9] = ((arr_22 [i_1]) <= (-1249351692 > 9329438175965640779));
                                var_26 |= (((((var_0 & (arr_19 [i_1] [i_1]))) / (((-(arr_1 [i_1])))))));
                                var_27 = (-1444073321 * 2430908693);
                                var_28 = (min(var_28, 3398797446));
                            }
                        }
                    }
                    var_29 = (110 / 9329438175965640786);
                }
                var_30 = (arr_12 [15] [i_0]);
            }
        }
    }
    var_31 *= 0;
    var_32 = (max(var_32, ((((((-15 ? var_12 : var_6))) ? var_10 : 21)))));
    #pragma endscop
}
