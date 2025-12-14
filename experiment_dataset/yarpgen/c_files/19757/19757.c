/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = 1658746781;

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((!((((arr_4 [i_0] [i_1] [i_1]) ? (((arr_0 [i_2]) ? (arr_7 [i_0] [3] [3]) : (arr_6 [i_0] [i_1] [1]))) : (arr_1 [i_0]))))));
                    var_22 = (max(((min((((arr_6 [i_0] [i_1] [5]) + (arr_0 [i_0]))), (arr_1 [i_0])))), ((((-1658746755 ? 19 : 1509737309)) - (((arr_0 [i_0 - 1]) + var_15))))));
                }
            }
        }
        var_23 = (arr_2 [i_0 - 3]);
        arr_9 [i_0] [i_0] = ((arr_1 [i_0]) & (((arr_3 [i_0 - 1]) * (var_18 <= 32657835))));
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (((!((min(253, 8732269755759485724))))));
        arr_13 [i_3 - 3] = (((((arr_0 [i_3]) >> (((arr_3 [0]) - 36))))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_24 = (~-1);
                    var_25 = ((var_12 ? (((arr_22 [i_4 - 1] [i_5]) ? 0 : (arr_20 [i_4] [i_4] [i_4] [7]))) : (arr_20 [i_4 + 2] [i_4] [i_4 - 3] [i_4])));
                    var_26 = ((!((((arr_15 [i_5]) % (arr_19 [i_4] [i_5] [i_5] [i_6]))))));
                    var_27 = (((arr_14 [i_4 + 2]) ? -10 : (arr_22 [5] [i_5])));
                }
            }
        }
        var_28 = 2;
        var_29 += (((arr_20 [i_4] [i_4] [i_4] [i_4]) <= var_11));
        var_30 = var_4;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                {
                    var_31 = ((~(arr_15 [i_8 + 1])));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_31 [i_8] [i_10] [4] [i_8] [i_4] [i_8] = (((arr_26 [i_9] [i_8] [i_4]) <= -1019170500));
                            var_32 = ((arr_17 [i_9] [i_8 - 1] [i_4 - 2]) ? (arr_17 [i_8 + 1] [i_8 + 1] [i_4 - 1]) : (arr_17 [i_8] [i_8 - 1] [i_4 - 1]));
                            arr_32 [i_7] |= ((((((arr_20 [i_4] [i_4] [i_4] [i_4]) + (arr_20 [i_4] [i_4] [i_8 - 1] [i_4])))) ? 1 : (arr_27 [i_7] [1] [1] [i_8] [12] [1])));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_8] [i_7] [i_8] [i_8] = (((!(arr_26 [5] [5] [i_4]))));
                            var_33 = (((((arr_28 [i_11]) * var_5)) * (arr_20 [i_8 + 1] [i_8] [i_8] [9])));
                            var_34 = (((arr_34 [i_8] [10] [i_8] [i_8] [i_4 + 1] [i_4 - 1] [i_4]) & (((arr_24 [i_9]) % (arr_24 [i_4])))));
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_8] [i_7] [i_8] [i_8] [i_7] = ((18446744073709551579 || (arr_16 [i_8 - 1])));
                            var_35 = (arr_22 [i_8 + 1] [i_4 - 3]);
                        }
                        arr_40 [i_4] [i_7] [i_8] [i_9] [i_8] [i_9] = var_1;
                    }
                    arr_41 [i_4] [i_7] [i_8] = (arr_33 [i_8 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 1]);
                    var_36 = ((1019170499 & (arr_25 [i_8])));
                }
            }
        }
    }
    #pragma endscop
}
