/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_11 &= (arr_3 [i_0] [i_0]);
            var_12 = var_10;
            arr_5 [i_1] [i_0] = -6968632784967806685;
        }
        arr_6 [3] = ((((((arr_2 [i_0] [i_0]) ? ((var_3 & (arr_2 [i_0] [i_0]))) : ((max(var_10, (arr_4 [i_0] [7]))))))) || (((~(arr_1 [i_0]))))));
        arr_7 [4] [4] = (max((arr_1 [i_0]), (max((arr_1 [i_0]), var_7))));
        arr_8 [i_0] = (arr_3 [i_0] [i_0]);
    }
    var_13 = (((min(var_10, 235))) / var_5);
    var_14 = (min(var_2, var_3));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] [i_2] |= ((((((arr_11 [i_2]) ? (arr_9 [i_2]) : var_6))) ? 6968632784967806675 : var_4));
        var_15 ^= ((var_4 || (arr_9 [i_2])));
        arr_13 [i_2] [i_2] = ((var_8 << (((-6968632784967806711 + 6968632784967806738) - 27))));

        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_18 [i_2] [i_2] [i_3] = (((arr_15 [i_3] [i_3 - 1]) / (arr_9 [i_2])));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_27 [i_6] = (arr_22 [i_3] [i_3 + 1] [i_3]);
                            var_16 = (arr_20 [i_2] [i_2] [i_2]);
                            var_17 = (max(var_17, 6968632784967806685));
                            var_18 = (arr_20 [i_2] [i_2] [i_2]);
                        }
                    }
                }
            }
            arr_28 [i_2] [i_2] [i_2] = (((arr_17 [i_3 + 1] [i_3 - 1]) >= (arr_11 [i_3 + 1])));

            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                arr_31 [i_2] [i_3 + 1] = ((-6968632784967806691 + (arr_17 [i_3 + 1] [i_7 + 2])));
                arr_32 [i_7] = (arr_25 [i_2] [i_3] [i_2] [i_7 + 2] [i_7]);
                arr_33 [i_7] [i_3] [21] = (arr_22 [i_7 + 2] [i_3 + 1] [i_7 + 3]);
                arr_34 [i_3 - 1] [i_7] = (var_6 <= var_5);
            }
        }
        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_47 [i_11] [i_8] [i_9] [i_8] [i_2] = (((arr_14 [i_2] [i_8 + 1]) ? (arr_23 [i_9 - 2] [i_8 - 1] [i_8 + 1] [i_8 - 1]) : (arr_17 [i_9 - 1] [i_9])));
                            arr_48 [i_2] [i_2] [i_9] [i_10] [i_2] [i_8] = var_9;
                        }
                    }
                }
            }
            arr_49 [i_2] [i_8] [i_8] = -1745412468;
            arr_50 [i_8] = (((arr_42 [i_8 + 1] [i_8 + 1]) > (arr_22 [i_8 + 1] [i_8] [i_8])));

            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_19 = 3465587397;
                var_20 = ((var_4 ? (1745412468 - var_7) : (arr_41 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])));
                arr_53 [i_12] [i_8] [i_8] = ((((((arr_41 [17] [17] [1] [i_8]) - var_0))) - (arr_29 [i_2] [12] [i_8 + 1] [i_12])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_60 [i_8] [i_13] [i_12] [i_8 + 1] [i_8] = (((arr_30 [i_8 + 1] [i_8 - 1] [i_8 - 1]) ? (arr_30 [i_8 - 1] [i_8 + 1] [i_8 + 1]) : (arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_12])));
                            var_21 = arr_20 [i_8 + 1] [i_8 - 1] [i_8 + 1];
                        }
                    }
                }
                arr_61 [i_2] [i_8] [i_12] [14] = ((var_10 ? (arr_36 [i_8 + 1] [i_12] [i_12]) : (((arr_39 [i_8]) << (arr_57 [i_2] [i_8] [i_12])))));
            }
        }
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_22 = ((2111172531562386363 ? 3162643450 : 19620));
        var_23 = 6968632784967806682;
    }
    #pragma endscop
}
