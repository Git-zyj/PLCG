/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((0 < ((7433 - (arr_0 [i_0])))));
        var_13 = (((max(var_0, var_6)) - ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_8)))));
        var_14 = (min(var_14, (max((arr_0 [3]), 0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_15 = (arr_4 [2] [2] [i_3]);
                    arr_8 [i_1] [i_1] [i_3] = ((~(arr_4 [i_1] [i_2] [i_3])));
                    arr_9 [i_1] [i_2] [i_1] = (~65534);
                }
            }
        }
        var_16 = (arr_6 [i_1] [i_1]);
        var_17 = (arr_3 [i_1]);
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        arr_14 [i_4] [21] = min((((255 > (~var_8)))), (min(-20, (arr_11 [7]))));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_20 [9] [i_5] = 1;
                var_18 = ((!(arr_19 [15] [15])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_26 [i_4] [i_5] [16] [16] [i_4] [i_8] [i_8] = var_6;
                            var_19 = (((((((((arr_24 [6] [12]) ? var_6 : (arr_24 [i_7] [6]))) + 9223372036854775807)) >> (var_4 - 6788539226362322903)))) && (arr_10 [i_5] [i_7]));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_20 = (min((min((arr_31 [i_9] [i_9 - 1] [19] [i_5] [i_9] [i_9 + 2]), 0)), ((((arr_27 [i_9] [i_9 + 2] [2]) ? var_4 : (arr_27 [i_9 + 2] [i_9] [7]))))));
                            arr_33 [i_4 + 2] [i_4 + 2] [i_9 + 1] [i_5] [i_4 + 2] = (min((min((arr_13 [i_4 - 1]), (arr_13 [i_9 + 1]))), (((1 ? (min((arr_32 [i_5] [1] [i_9 + 3]), (arr_17 [i_5]))) : ((-(arr_32 [i_5] [i_5] [3]))))))));
                            arr_34 [i_4] [i_4 + 2] [i_4 + 2] [9] [i_5] [12] [13] = (max((((arr_23 [12] [i_5] [12] [i_10] [i_10] [12]) ? (arr_16 [i_4 - 2] [i_5]) : ((18446744073709551615 ? (arr_29 [i_4] [i_5] [i_9] [6] [i_10] [i_9]) : var_9)))), (arr_16 [i_10] [i_5])));
                        }
                    }
                }
            }
        }
        for (int i_12 = 4; i_12 < 24;i_12 += 1)
        {
            var_21 = (max(var_21, ((min((((((max((arr_24 [i_4] [i_4 - 1]), 65510)))) & (~var_4))), (max((arr_23 [i_12] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 4] [i_12]), (arr_23 [i_12] [i_12 - 2] [i_12 - 1] [20] [i_12 - 4] [9]))))))));
            var_22 = (max((((!(-48 != -1)))), (arr_13 [i_12 - 2])));
            arr_38 [i_4 + 1] [i_12 - 4] = (((max(22, ((var_5 + (arr_24 [17] [i_4]))))) << (((arr_28 [i_4 + 2] [i_4]) - 1026735525))));
        }
        arr_39 [i_4] |= (arr_29 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_4]);
    }
    var_23 = var_8;
    #pragma endscop
}
