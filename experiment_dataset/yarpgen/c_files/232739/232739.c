/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 |= (max(var_6, (max(((max(var_4, var_14))), var_15))));
    var_18 = var_8;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = (max((((arr_0 [i_0] [i_0 - 1]) ? (arr_0 [i_0] [i_0 + 2]) : (arr_0 [i_0] [i_0 + 1]))), (((var_7 || (arr_1 [i_0] [i_0 + 2]))))));
        var_20 = min((((arr_1 [i_0 - 1] [i_0 + 1]) ? (arr_1 [i_0 + 3] [i_0 + 3]) : 3678457743986469489)), -2138986699867828933);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_4] = (arr_8 [i_1] [i_2 + 2] [i_1] [0]);
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((-((var_0 ? (arr_4 [i_1] [i_2]) : var_1))));
                        arr_15 [i_1] [i_2] [i_1] = ((-(arr_4 [i_1] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_21 = (((arr_2 [i_1 + 1]) && (arr_2 [i_1 + 1])));
                        arr_19 [i_1] = (arr_2 [i_5]);
                        arr_20 [i_1] [i_3] [i_5] = (arr_16 [i_1] [i_1] [i_1] [i_3] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_22 = (!(arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                        arr_24 [i_3] [i_1] = (((arr_4 [i_1 + 1] [i_2 + 2]) && var_11));
                        arr_25 [i_1] [i_1] [i_1] [i_1] = ((var_0 ^ (arr_1 [i_1 + 1] [i_1 + 1])));
                    }
                    arr_26 [i_3] [i_3] [i_1] [i_3] = (((arr_12 [i_2 + 2] [i_2] [i_3] [i_2]) >> (((arr_12 [i_2 - 1] [i_2] [i_3] [i_3]) - 96))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_33 [i_2] [i_2 + 2] [i_1] [i_2] [i_2] = (!var_0);
                                var_23 = (((arr_18 [i_7 + 1] [i_7] [i_8] [i_8] [i_8 - 1] [i_8]) || (arr_32 [i_8] [i_1 - 1] [i_1])));
                                var_24 ^= ((1 ? ((17189938199656388769 >> (((arr_31 [i_3] [i_2] [i_3] [i_2]) - 22517)))) : (arr_11 [i_1] [i_1 - 1] [i_2 + 2] [i_7 - 1] [i_7 + 1] [i_7])));
                                var_25 = (((arr_1 [i_1 - 1] [i_2 + 2]) << (((arr_1 [i_1 + 1] [i_2 + 1]) - 201890409))));
                            }
                        }
                    }
                    arr_34 [i_1] [i_1] [i_1] = (((!34436) ? ((17189938199656388769 ? (arr_4 [i_2] [i_3]) : -2138986699867828933)) : 1788113674));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((-(arr_12 [i_3] [i_2 + 1] [i_2 - 1] [i_1 + 1]))))));
                                var_27 = (-3678457743986469479 / -1345165964);
                                var_28 = (max(var_28, (3678457743986469462 & 21970)));
                            }
                        }
                    }
                }
            }
        }
        var_29 = ((~(arr_32 [i_1] [i_1 - 1] [i_1 + 1])));
        var_30 = (arr_22 [i_1] [i_1] [1] [i_1] [i_1 + 1] [i_1]);
    }
    #pragma endscop
}
