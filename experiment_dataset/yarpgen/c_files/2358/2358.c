/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 106;
    var_14 ^= ((var_12 ? ((65535 ? var_12 : (min(-474004829, 3)))) : 92281437));
    var_15 ^= var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((max(((((arr_0 [i_0]) & var_7))), var_4))) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (~67)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2 + 1] = (max(var_8, ((min(var_12, (arr_5 [i_1] [i_2 - 3] [i_1]))))));
                    arr_7 [i_0] [i_0] [i_0] &= var_11;
                    arr_8 [i_0] [i_0] [i_0] [i_2] &= (max((arr_3 [2] [i_0]), (((((arr_2 [i_0] [i_1]) ? var_11 : var_6))))));
                }
            }
        }
        arr_9 [i_0] = (!(arr_3 [i_0] [i_0]));
        arr_10 [i_0] [i_0] = var_11;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = var_5;
                    var_18 &= ((((((arr_2 [i_0] [i_3 + 4]) ? 92281444 : var_1))) ? (min(92281427, (arr_2 [i_4] [i_3 - 1]))) : (arr_2 [i_0] [i_3 + 3])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_18 [i_5] = (arr_16 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_19 = (arr_28 [i_5] [i_5] [i_6 + 1] [i_9 - 1] [i_9 - 1] [i_5] [i_9 - 1]);
                                var_20 = ((127 ? 10 : 65522));
                                arr_29 [i_5] [i_8] = ((var_1 ? (arr_28 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_9 - 1] [5] [i_9]) : (((arr_5 [i_5] [i_8] [i_5]) ? var_4 : var_6))));
                            }
                        }
                    }
                    arr_30 [i_5] [i_5] [i_7] [i_6] = (arr_27 [2] [i_5] [i_6] [1] [1]);

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_33 [i_5] [i_5] [i_6 + 3] [9] [i_5] [i_10] = (arr_19 [i_6 + 1] [i_5] [i_7]);
                        var_21 ^= (arr_5 [i_7] [i_7] [i_6]);
                        arr_34 [i_5] [i_5] [8] [i_7] = var_11;

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_37 [7] [i_5] [i_7] [i_10] [13] [i_5] [i_5] = ((-(arr_3 [i_6 + 2] [i_5])));
                            arr_38 [i_5] [i_10] [i_10] [i_10] [i_10] [i_10] = (arr_4 [13] [i_5] [4] [i_5]);
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_22 = (((var_11 ? var_9 : 9223372036854775807)));
                            arr_42 [i_12] [1] [i_5] [i_12] [i_12] = ((var_6 > 0) ? (~1) : 1645976632);
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_23 = var_10;
                            var_24 = ((!(((16422 ? (arr_35 [11] [i_6] [i_6 + 1] [i_5] [i_6]) : (arr_16 [i_5]))))));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            arr_48 [i_5] [i_5] [i_7] [10] = ((((2147479552 ? 65535 : 9223372036854775807)) > (((~(arr_19 [i_5] [i_5] [i_7]))))));
                            var_25 = ((!(((var_1 ? 1 : -512856266)))));
                            arr_49 [i_5] [i_7] [i_7] [i_7] [i_7] = (614787079 ? (arr_16 [i_5]) : ((var_8 ? 17159730346171564600 : var_12)));
                            arr_50 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_47 [i_6 + 3] [i_5] [i_6 + 3] [i_5] [11]) ? var_8 : -92281422));
                        }
                        var_26 ^= var_8;
                    }
                }
            }
        }
        var_27 ^= -115;
    }
    var_28 ^= (((((65526 * (min(var_1, var_4))))) ? var_1 : (((((max(var_0, var_9))) ? var_2 : ((min(1, var_12))))))));
    #pragma endscop
}
