/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = 3914655829;
                                var_19 += var_14;
                            }
                        }
                    }
                    var_20 = (min((max((arr_7 [i_0] [i_1] [i_2] [i_0 - 1]), 11195134616943570444)), ((min((((var_15 ? var_3 : var_9))), var_4)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = (min((arr_4 [i_2]), (((arr_10 [i_0] [i_1] [i_2] [i_5 + 1]) - var_1))));
                                var_22 += ((((min((arr_1 [i_2]), (arr_2 [i_0 - 1] [i_6 + 1] [i_2])))) ? (arr_6 [i_6]) : (((min(((min(var_9, (arr_7 [i_0] [i_2] [0] [4])))), 5306))))));
                            }
                        }
                    }
                    var_23 = var_6;

                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_24 -= 1;
                        arr_22 [i_0] [i_0] = var_14;
                        arr_23 [i_0] = (arr_2 [i_0 - 1] [1] [i_0 - 1]);
                        var_25 = (i_0 % 2 == zero) ? ((((((arr_3 [i_0] [i_0]) + 9223372036854775807)) << (arr_21 [i_0] [i_1 + 2] [i_1 + 2] [i_1] [i_0])))) : ((((((arr_3 [i_0] [i_0]) + 9223372036854775807)) << (((arr_21 [i_0] [i_1 + 2] [i_1 + 2] [i_1] [i_0]) - 1)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_26 ^= -var_11;

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_27 = ((var_13 || (arr_12 [3] [i_0] [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_0 - 1] [i_0])));
                            var_28 = (arr_28 [i_1 + 2] [1] [i_1 - 1] [i_1 + 2] [i_1]);
                        }
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            arr_32 [i_10] [12] [i_0] [i_0] [i_2] = (6844708469169049798 > var_15);
                            var_29 = (max(var_29, (((var_10 ? (arr_2 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2]))))));
                            var_30 = -1101987472694325103;
                        }
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_36 [i_0 - 1] [i_0] [i_2] = (max(((min(var_9, var_10))), (max((arr_0 [i_1 + 1] [i_0 - 1]), (arr_15 [i_0 - 1])))));
                        arr_37 [8] [i_0] [i_0] [i_0 - 1] = (~var_0);
                        arr_38 [i_2] [i_0] [i_2] [1] [i_11] = var_17;
                        arr_39 [i_0] [i_2] [i_1 - 2] [i_0] = ((((arr_7 [i_1 - 2] [i_1] [i_0 - 1] [i_0 - 1]) || var_5)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_31 &= (min((((var_11 / var_16) + -6844708469169049799)), var_11));
                        var_32 |= (arr_11 [i_0 - 1] [i_13] [0] [i_14]);
                    }
                }
            }
        }
    }
    var_33 = (max(var_5, var_17));
    var_34 = var_8;
    #pragma endscop
}
