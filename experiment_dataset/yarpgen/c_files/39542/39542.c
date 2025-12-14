/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = (arr_1 [i_0 - 1]);
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = arr_4 [3] [i_1] [i_1 - 1];
                                arr_18 [2] [i_0 - 1] [i_1] [i_1] [1] [i_3] [i_0] = max((min((min(0, 14665589375891381879)), (arr_0 [i_0]))), ((18446744073709551614 ? ((-32755 ? (arr_7 [i_0] [i_1 + 1] [15]) : 18446744073709551615)) : (arr_15 [i_3 - 1]))));
                            }
                        }
                    }
                    arr_19 [i_0] = (max(1, (~18446744073709551615)));
                    arr_20 [i_0] [i_0] [i_0] = (min((arr_12 [i_0 + 1] [i_1] [i_2] [i_1]), ((((arr_12 [i_0 + 1] [i_1 - 2] [i_2] [i_2]) ? -3511 : (arr_14 [i_0 + 1]))))));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_17 = (min((((arr_1 [i_0 - 1]) * var_10)), ((max((arr_8 [i_0] [i_0 - 1] [i_1 + 1]), (arr_8 [i_0] [i_0 + 1] [i_1 + 1]))))));
                        var_18 = var_6;
                    }
                }
            }
        }
    }
    var_19 = ((var_8 ? var_16 : var_16));

    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_20 -= (((arr_5 [i_7 + 1] [i_7 + 1] [i_6 - 1]) || ((min((arr_1 [10]), ((-(arr_26 [i_6] [2]))))))));
                    arr_30 [i_6] [i_7] [i_8] = 20;
                }
            }
        }
        var_21 = 1;
        var_22 = (min(var_22, 45));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                {
                    arr_37 [i_6] [i_9] [i_10] [i_10] = (arr_15 [i_6]);
                    var_23 = arr_9 [i_6] [i_9] [i_10];
                    arr_38 [i_10] [0] [0] [i_6 + 1] |= (((((0 ? var_10 : ((var_10 ? 18 : (arr_27 [i_6] [i_9])))))) ? ((((max((arr_13 [0] [i_9] [i_9] [i_6] [0]), (arr_24 [1] [i_9])))) ? 18446744073709551615 : ((min(3106516308, (arr_4 [i_6 + 3] [i_9] [i_6 + 3])))))) : (arr_2 [i_6])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 20;i_12 += 1)
        {
            {
                var_24 = var_1;
                var_25 -= (min((arr_21 [i_11] [i_11] [i_11] [i_11]), 1));
                var_26 = var_14;
            }
        }
    }
    var_27 -= 51;
    #pragma endscop
}
