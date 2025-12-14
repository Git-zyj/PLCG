/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [1] [i_3] = (((arr_10 [i_0] [i_0] [i_0 + 3] [i_0] [i_3] [i_3 - 2]) ? (arr_8 [i_3] [i_2] [i_1]) : 3561109822));
                        var_12 = (arr_8 [i_0] [i_1] [i_3]);
                        var_13 = (max(var_13, (arr_0 [i_2] [i_3 + 1])));
                    }
                }
            }
        }
        arr_13 [i_0] |= 30;
        arr_14 [i_0] = ((7 ? 3561109822 : ((var_1 ? 6570395228638770079 : (arr_4 [i_0 + 2] [i_0])))));
        var_14 -= ((-((~(arr_1 [i_0])))));

        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_15 += ((~(((arr_3 [i_0]) ? 64 : var_3))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_16 -= (arr_1 [i_0 - 1]);
                            arr_25 [i_0] [i_4 + 1] [i_5] [i_4] [i_5] [i_7] = (~-1946212904);
                            arr_26 [i_6] [i_4] = var_2;
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_31 [i_8] = ((+(((!((((arr_22 [i_8] [i_8] [i_8] [i_8]) ? -1946212915 : var_4))))))));
        arr_32 [i_8] = -6570395228638770056;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_45 [i_12] [i_10] [1] [1] = (arr_3 [i_9]);
                        arr_46 [i_10] [i_10] [i_10] &= ((!(arr_33 [i_10 + 1])));
                        arr_47 [i_12] = 78271945273161966;
                        var_17 = (((arr_35 [i_9] [i_9]) ? ((var_8 ? (arr_4 [i_10] [i_9]) : (arr_16 [i_12]))) : 58));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_23 [i_9] [i_9] [i_9] [18] [20])));

                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                        {
                            arr_62 [i_9] [i_9] [i_14] = (arr_59 [i_14]);
                            arr_63 [i_14] = 6570395228638770078;
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                        {
                            arr_66 [i_9] [0] [i_14] [i_15] [i_15] [i_9] = var_8;
                            var_19 = (((arr_48 [i_15] [i_13]) ? ((-(arr_21 [i_13]))) : (arr_60 [i_13] [i_13] [7] [i_15] [i_13] [i_13] [i_15])));
                        }
                        var_20 = (arr_18 [i_9] [i_9] [1]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        arr_70 [i_18] = ((~(arr_60 [2] [i_18] [i_18] [18] [i_18] [i_18] [i_18])));
        var_21 = (((0 ? 1038145550 : -6570395228638770080)));
        var_22 = 6570395228638770080;
    }
    var_23 = var_10;
    #pragma endscop
}
