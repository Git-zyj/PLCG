/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = (max(var_16, 3018333611));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = ((-((var_4 ? var_4 : (arr_4 [i_1])))));
            var_18 = (((((arr_0 [i_0 - 4] [i_0 + 1]) + 9223372036854775807)) >> (((arr_1 [i_1]) - 363711574580805663))));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_19 = (((arr_1 [i_3]) ? (arr_6 [i_0 - 4] [i_0 - 1] [i_0 + 2]) : 1508141906));
                        var_20 = ((-2996 <= (arr_12 [i_0] [i_0] [i_3] [9])));
                        arr_14 [i_0] [i_2] [i_2] [i_4] = (((arr_13 [i_0 + 2] [i_2] [i_3] [i_0 + 2]) ? (arr_12 [i_4] [i_4] [i_2 + 1] [i_0]) : (((arr_8 [i_3] [5]) ? var_13 : var_3))));
                        arr_15 [i_4] [i_0] = (((arr_0 [i_2 + 1] [i_0 - 4]) ? (arr_0 [i_2 + 1] [i_0 - 4]) : (arr_0 [i_2 + 1] [i_0 - 4])));
                        var_21 = (min(var_21, ((((arr_8 [i_2 + 2] [i_0 + 2]) - 1130882031708426557)))));
                    }
                }
            }
            arr_16 [i_0] = (((arr_4 [i_0]) * 38753));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_19 [i_0] = ((25438 ? var_8 : ((var_13 ? var_2 : (arr_1 [i_0])))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_24 [1] [11] [i_6] = (((arr_12 [1] [i_5 - 1] [i_0 + 2] [i_0]) ? (arr_11 [i_0 + 2] [i_0 - 4] [i_0 - 2]) : ((((arr_8 [i_0] [i_5]) ? (arr_9 [i_0] [i_5]) : var_13)))));
                arr_25 [i_0] [i_0] [i_6] [i_6] |= ((~((var_1 ? var_14 : (arr_7 [i_0 - 2] [5])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_7));
                            var_23 = (min(var_23, (((arr_3 [i_0 - 4] [i_5 + 1]) ? (arr_9 [i_8] [i_0]) : 25449))));
                            arr_30 [i_0] [6] [1] [i_7] [i_7] [i_7] = (var_8 >> 1);
                            var_24 = 165179223;
                        }
                    }
                }
            }
            for (int i_9 = 4; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_34 [9] [9] = (((arr_26 [i_0 - 3] [i_5 + 1]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 3])));
                var_25 = (max(var_25, ((var_5 ? (~var_4) : (arr_12 [i_0] [i_5] [i_9 - 4] [i_0])))));
                var_26 = (max(var_26, (((-(arr_11 [i_5 - 1] [i_5 - 1] [i_9 - 2]))))));
            }
            for (int i_10 = 4; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_27 |= (((((var_3 ? (arr_29 [7] [7]) : (arr_7 [i_0 - 2] [5])))) ? (((arr_6 [i_0 - 3] [i_5] [6]) ? var_5 : var_14)) : -var_8));
                var_28 ^= arr_12 [i_5 - 1] [7] [7] [i_10];
            }
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_29 = ((-(arr_18 [i_0] [i_5 + 1])));
                        arr_45 [8] [i_0] [i_5] [8] [9] [11] = (arr_13 [i_0 - 4] [11] [i_0] [i_11 + 2]);
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_30 = (min(var_30, (~var_0)));
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    {
                        arr_56 [0] = (arr_50 [i_13] [8]);
                        var_31 = ((((((3806 ^ 25438) ? (arr_51 [i_13] [i_13]) : (arr_54 [i_14 + 1])))) ? (arr_51 [i_13] [i_13]) : (((max((arr_47 [i_15 - 1]), var_10)) | (arr_50 [i_15 + 1] [i_14 + 3])))));
                    }
                }
            }
        }
    }
    var_32 = (((((((var_2 ? var_1 : var_10))) || (((var_15 ? var_7 : var_14))))) ? var_3 : var_15));
    #pragma endscop
}
