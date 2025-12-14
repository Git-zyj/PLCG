/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_0;
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 ^= (((-17 + 2147483647) >> (215 - 207)));
                var_15 |= 1;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_16 = (max(var_16, -var_7));
                    var_17 = ((-var_11 ? 4 : var_4));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_14 [i_3] [13] [i_0] = ((((min(var_1, 8045420423201763279)) * (((min(var_9, var_8)))))));
                    arr_15 [i_0] [3] [i_3] = (((-4095 < 14250) ? (arr_6 [4] [i_1] [4]) : var_11));
                    var_18 = (min((((-4 * (arr_10 [i_3])))), ((-715292409692555370 ? ((max(1, 3315082729))) : -1152921504590069760))));
                }
                var_19 = 53;

                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    var_20 = (min((arr_12 [i_4 - 1] [i_1]), var_7));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [7] [i_4] = ((((((arr_2 [i_1] [i_4]) ? 246 : var_4))) ? 34 : var_5));
                                var_21 = (max(var_21, ((max(((max(var_9, (arr_7 [i_4 - 3])))), ((var_10 ? 27498 : 954587914)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = (((((arr_21 [i_0] [i_0] [i_4] [i_7] [i_8 + 2] [i_8] [i_0]) * (arr_4 [i_0] [i_1] [i_8 + 2]))) < 1));
                                arr_28 [i_4] = ((((min(146, (max(75, 2929))))) ? (var_7 < 1073741823) : (max(-3, (-715292409692555380 * var_4)))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_23 = max(((max((arr_16 [i_4 - 1] [i_4 - 3] [i_4 - 2] [i_4]), -351581158))), (min(((14232 & (arr_25 [4] [i_1] [i_4] [4] [i_9]))), var_6)));
                        arr_32 [i_0] [i_1] [i_4] [i_9] = ((((((arr_5 [i_0] [i_0] [i_0]) ? var_6 : (arr_5 [i_9] [i_4 - 1] [6])))) ? ((12 ? (arr_5 [i_1] [i_1] [i_0]) : 1)) : ((1322688641 ? -2 : 90))));
                        var_24 = 0;
                        arr_33 [i_4] [i_1] [i_1] [7] [7] [i_4] = (((1 >> ((((var_5 ? 1723827883361654658 : (arr_20 [i_0] [i_1] [i_4] [3] [i_1] [i_4] [i_1]))) - 30717)))));
                    }
                }
            }
        }
    }
    var_25 = 161;
    #pragma endscop
}
