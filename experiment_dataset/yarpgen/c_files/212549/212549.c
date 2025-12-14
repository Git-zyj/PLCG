/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 ? var_7 : (((((var_9 ? var_13 : var_2))) ? ((60 ? 16776192 : 8779041497812317154)) : -16776214))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = (-128 - 1);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (((arr_0 [i_0 + 3] [i_0 + 3]) ^ (arr_0 [i_0 - 1] [i_0 + 4])));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] = ((0 < (arr_0 [i_0 + 2] [i_0 + 2])));
                var_18 = (arr_8 [i_0 + 3]);
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_14 [i_3] [i_3] = ((arr_6 [i_0] [i_0 + 3] [i_0 + 1]) < (arr_9 [i_0] [i_1] [i_3]));
                arr_15 [i_0 + 4] [i_1] [i_3] = (arr_8 [i_0 - 1]);
                var_19 = (1 - 16776188);
                arr_16 [i_3] = (((arr_5 [i_0 + 4] [i_0 + 4]) || (arr_5 [i_0 - 1] [i_1])));
            }
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                var_20 = (((arr_12 [i_4 - 3] [i_4] [i_4 - 3]) ? (arr_10 [i_1] [i_1] [i_1] [i_4]) : (arr_5 [i_0 + 4] [i_4 - 3])));

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_21 ^= (126 && 9223372036854775807);

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_22 = (min(var_22, ((2305561534236983296 / (arr_23 [i_0 + 3] [i_0])))));
                        var_23 &= (arr_19 [i_6] [i_6] [i_0] [i_5 + 2] [i_5 + 2]);
                        arr_24 [i_1] [i_4] [i_4 - 3] [i_1] [i_1] = ((arr_12 [i_4 + 1] [i_4 + 2] [i_4]) || ((!(arr_17 [i_0] [i_0] [i_6]))));
                    }
                    var_24 = var_11;

                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_4] [i_4] [i_5] [i_5 - 2] [i_7] = (((arr_10 [i_7] [i_0] [i_1] [i_0]) ? var_3 : var_6));
                        var_25 = ((!(arr_8 [i_5 - 1])));
                        var_26 = (arr_6 [i_0] [i_0] [i_0 + 2]);
                        var_27 = (arr_12 [i_5 + 1] [i_4 + 1] [i_0 + 4]);
                        var_28 = (arr_12 [i_4 - 2] [i_1] [i_0 + 4]);
                    }
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_4 - 1] [i_4] [i_5 + 1] [i_5 + 1] = (((arr_20 [i_0] [i_0] [i_0] [i_0 + 4] [i_5 + 1]) ^ var_8));
                        var_29 += (arr_28 [i_5 - 1]);
                        var_30 = (((arr_8 [i_0 - 1]) ? (arr_9 [i_5 - 1] [i_4 + 2] [i_1]) : (arr_8 [i_4])));
                        var_31 = (arr_10 [i_4] [i_4] [i_5 + 2] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_32 = var_12;
                        var_33 += ((9007199254740990 ? (arr_29 [i_5 - 1] [i_0 + 3] [i_4 - 2] [i_5 - 1] [i_5]) : (arr_1 [i_5 + 1] [i_4 - 2])));
                    }
                }

                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    arr_37 [i_0 + 4] [i_4] [i_1] [i_4] [i_10] [i_10] = (((arr_22 [i_4] [i_4] [i_4] [i_4] [i_4 - 1]) >= (arr_35 [i_0 + 4] [i_4 - 1] [i_4 + 1] [i_10 + 2] [i_4 + 1])));
                    var_34 = (max(var_34, var_0));
                }
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                arr_41 [i_11 - 1] [i_1] [i_0] = (arr_18 [8]);
                var_35 += (arr_5 [i_0] [i_0]);
            }
            var_36 = (arr_0 [i_0 + 1] [i_0 + 2]);
        }
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            var_37 = (((arr_28 [i_0 + 2]) ? var_12 : (arr_28 [i_0 + 1])));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_54 [i_12] [i_12] [i_13] = (((arr_42 [i_15 - 1] [i_15 + 1] [i_15 + 1]) & ((1 & (arr_21 [i_0] [i_14] [i_13] [i_0] [i_0])))));
                            arr_55 [i_0 + 4] [i_14] [i_14] |= (((arr_49 [i_14] [i_0 + 2]) << (var_14 - 1751458287)));
                        }
                    }
                }
            }
        }
        var_38 = ((!1) < var_7);
    }
    /* vectorizable */
    for (int i_16 = 4; i_16 < 14;i_16 += 1)
    {
        var_39 = var_10;
        var_40 = 4160749568;
    }
    var_41 = (min(var_41, var_11));
    #pragma endscop
}
