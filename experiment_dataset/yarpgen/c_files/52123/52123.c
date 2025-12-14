/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_17 = (min(var_17, (~var_6)));
            arr_4 [i_0] [i_1] [i_0] = (1863339212407144651 % 199);
            arr_5 [i_0] = 56;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [12] [i_2] = (((~var_12) == (~var_0)));
            arr_10 [i_0] = (((((arr_1 [i_2]) % var_13)) > (var_2 * 2765982698)));
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        var_18 -= ((~(~var_7)));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_21 [i_3] [i_4 - 1] [i_3] = ((arr_3 [i_4 - 2] [i_3 - 1]) + (arr_3 [i_0] [i_3 + 1]));
                            arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3 + 2]);
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_19 ^= (((arr_19 [i_4] [i_4 + 1] [i_4] [i_4] [i_4]) ? var_5 : (((4 << (-1266 + 1285))))));
                            arr_27 [i_3] [i_3 - 3] [i_4] [12] [16] = (((arr_2 [i_5 + 1] [i_7 + 2] [i_4 - 1]) * (arr_2 [i_5 + 2] [i_7 + 1] [i_4 - 2])));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_30 [i_3] [i_3] = -45528;
                            var_20 = (max(var_20, var_10));
                        }
                    }
                }
            }
            var_21 -= (arr_13 [i_0] [i_3 + 2] [i_3 - 1]);
            arr_31 [i_0] [i_3] [i_0] = ((31 ? (arr_18 [7] [7] [i_3] [i_3] [i_3 - 2] [i_0]) : var_4));
            arr_32 [i_3] [i_3] = arr_25 [i_0] [i_0] [i_0] [i_3] [i_3 + 2];
            arr_33 [i_3] [i_3] = 34;
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_36 [i_0] = (~(arr_6 [i_0] [i_9]));
            arr_37 [i_0] [i_9] = ((var_7 ? var_3 : var_6));
        }
        var_22 = (max(var_22, (((-(!0))))));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                var_23 |= -395691545416357757;
                var_24 &= var_2;
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_46 [i_10] [i_11] = (arr_12 [8] [i_11] [i_10]);
                            var_25 -= (max((((-(arr_24 [i_11])))), ((18446744073709551609 ? 199 : (arr_14 [i_13] [i_11] [i_11] [i_13])))));
                            arr_47 [i_10] [i_11] [i_12] [i_13] = ((((min((arr_26 [i_12] [i_11] [i_11] [i_13]), 8191))) == (17317646607011589693 | 83)));
                        }
                    }
                }
                arr_48 [i_10] [i_10] [i_10] = -var_16;
            }
        }
    }
    var_26 = var_9;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 15;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 13;i_18 += 1)
                        {
                            {
                                arr_63 [i_14] = (((~((-(arr_61 [i_14] [i_15 - 1] [i_14] [i_16] [i_17] [i_17] [i_16]))))));
                                arr_64 [i_14] [i_15] [i_14] [i_17] [i_14] [i_15 - 1] [4] = (arr_17 [1] [i_15 + 1] [i_16] [i_15 + 1]);
                            }
                        }
                    }
                    arr_65 [i_15] [i_14] [i_16 - 3] = var_14;
                    arr_66 [i_14] [i_14] [i_16 + 1] = (max(((-(arr_8 [i_15 - 1]))), ((((199 ^ 17177772032) == 191)))));
                }
            }
        }
    }
    #pragma endscop
}
