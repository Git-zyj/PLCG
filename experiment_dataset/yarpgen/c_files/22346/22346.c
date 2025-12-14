/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (max(var_14, -var_8));
    var_16 -= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = -3795084475672333767;
        var_18 -= (((arr_0 [i_0]) == (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_0 [i_1])));
        arr_6 [10] = -7733018498090545150;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_2] [12] = (arr_3 [i_3 - 1]);

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [9] [i_2] [i_3] [i_4] [i_3] [9] = (var_14 - (arr_15 [i_3 - 2] [i_4 - 1] [i_3] [i_4 + 1]));
                        var_20 &= 140;

                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [6] [6] [i_4] [i_3] [i_3 + 1] [i_4 - 1] [i_5 + 1] = (((arr_5 [i_3 - 2]) + (arr_10 [i_3 + 2] [i_3 + 3] [i_4 + 1] [i_5 - 2])));
                            arr_21 [i_5 - 2] [i_4] [i_4] [i_2] [i_1] = ((arr_17 [i_3 - 2]) && var_10);
                            var_21 = (min(var_21, ((((arr_0 [i_2]) ? var_4 : var_10)))));
                        }
                    }
                    var_22 = -var_4;
                }
            }
        }
        var_23 += ((~(arr_8 [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 = ((((-(arr_5 [i_6]))) - 94));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_25 += ((var_3 ? 1580535243482681873 : (arr_17 [i_7 - 2])));

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        arr_34 [i_7] [i_8] [i_8] = 0;
                        var_26 += -var_1;

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_27 -= (arr_5 [i_6]);
                            var_28 = ((arr_32 [i_7 - 1] [i_7 + 1] [i_9 + 2] [i_9 + 1]) > (arr_32 [i_7 - 2] [i_7 - 2] [9] [i_9 + 2]));
                            var_29 = ((var_7 && (arr_11 [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 + 1])));
                            arr_37 [i_10] [12] [12] [i_7 - 2] [6] &= (((arr_29 [i_7 - 2]) * ((var_1 ? (arr_31 [6] [i_9 - 1] [6]) : (arr_30 [i_6] [7] [i_8])))));
                        }
                        arr_38 [i_6] [i_8] [i_8] [9] = (arr_9 [i_7 - 1] [i_7 - 1]);
                    }
                }
            }
        }
        arr_39 [i_6] = (arr_4 [i_6]);
    }
    var_30 = var_7;
    var_31 -= 201;
    #pragma endscop
}
