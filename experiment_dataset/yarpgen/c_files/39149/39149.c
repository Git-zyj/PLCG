/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (min((arr_7 [1] [9] [12]), (((!((((arr_2 [13]) ? -1 : (arr_7 [8] [5] [7])))))))));
                    arr_8 [2] [11] [0] [14] = var_5;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    var_12 += (((arr_11 [22]) + (max(var_0, (arr_13 [i_3] [1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_13 ^= (((max(32640, 65535))));
                                arr_20 [2] [19] [4] [12] [16] [0] [24] = (!255);
                                arr_21 [5] [1] [17] [24] = (((var_4 * (arr_18 [2] [i_5 + 3] [i_5 + 3] [16] [19] [9]))));
                            }
                        }
                    }

                    for (int i_8 = 3; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_25 [0] [8] [20] = ((((~(65509 % -31912))) >= (arr_24 [22] [i_8 + 1] [23] [0])));
                        arr_26 [14] [23] [23] [18] [1] [19] = (min(var_9, (!var_1)));
                        var_14 = ((((max(((26 ? 65527 : (arr_16 [16] [1] [13] [15] [1] [12]))), ((-(arr_19 [1] [1] [19] [4] [3])))))) / ((((((arr_16 [5] [1] [18] [1] [12] [7]) ? (arr_23 [1]) : (arr_15 [11] [1] [12])))) ? (((-(arr_19 [19] [9] [15] [22] [14])))) : ((var_2 / (arr_17 [4] [3] [7])))))));
                    }
                    for (int i_9 = 3; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_29 [23] [11] [16] [20] [24] [1] = var_4;
                        var_15 = (max(var_15, (arr_15 [3] [1] [16])));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        arr_34 [8] [24] [5] [15] [23] [1] = (((((~((max(65531, 63)))))) ? (((arr_15 [19] [i_5 - 3] [23]) ? (arr_15 [19] [i_5 - 1] [7]) : var_1)) : (((((max(1, (arr_17 [1] [22] [2])))) || (((arr_9 [17]) || var_3)))))));
                        var_16 = 1;
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_17 += (max(((7654617394907756852 >> (65527 - 65501))), (((((!(arr_22 [10] [10] [23] [14]))) ? (arr_13 [23] [9]) : (((arr_15 [9] [21] [24]) ? var_7 : 5368)))))));
                        var_18 = (max(var_18, var_0));
                        arr_38 [8] [18] [19] [6] = (4290772992 == 9);
                        arr_39 [15] [1] [8] [1] = (arr_22 [15] [1] [10] [1]);
                    }
                    var_19 = (((arr_10 [5]) ? (((arr_14 [15] [i_5 - 3] [11] [8]) ? ((max((arr_11 [16]), (arr_14 [17] [1] [19] [7])))) : 31938)) : (max((arr_19 [i_5 - 1] [i_5 + 3] [22] [i_5 - 2] [14]), 63))));
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
