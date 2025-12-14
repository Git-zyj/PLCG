/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] = 4194176;
                    var_14 = (arr_0 [i_2]);
                    arr_8 [i_0] [i_1] [i_0] |= (min((1833642153 / var_1), 10117));
                    arr_9 [i_0] [i_2] [3] = ((!(-1 + 1)));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        arr_13 [i_3] = ((((arr_6 [i_3] [i_3] [i_3 + 1] [i_3 + 1]) << (((arr_0 [i_3]) - 8282155124696432193)))) / 2880124161690946515);
        arr_14 [i_3] = ((((((arr_10 [i_3 - 1]) * (arr_3 [i_3 + 1] [i_3 + 1])))) ? ((1 ^ (arr_10 [i_3 + 1]))) : (((arr_3 [i_3 - 1] [i_3 - 2]) / var_7))));
        arr_15 [i_3 - 1] [i_3 - 1] = (((116 + var_2) + (((arr_1 [i_3 - 1]) << (var_0 - 15499294870922289741)))));
        arr_16 [i_3] = ((var_11 / ((1 * (arr_5 [i_3] [i_3 - 1] [i_3 - 1])))));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    var_15 ^= (((-88 + 2147483647) << (((arr_19 [i_4] [i_6 - 1]) - 16112))));
                    arr_24 [i_5] [i_6] = ((+(((arr_23 [i_5] [i_4 - 1]) ? (arr_23 [i_5] [i_4 + 1]) : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_16 = (max(var_16, ((((arr_19 [i_7] [i_8]) / 204)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_35 [i_7] [i_9] [1] [i_7] = 2;

                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                arr_39 [i_7] [i_7] [i_8] [i_9] [i_10] [i_11] = ((1 & (arr_18 [i_7])));
                                var_17 = (max(var_17, (((!(arr_21 [10] [i_10] [i_8]))))));
                            }
                            /* vectorizable */
                            for (int i_12 = 2; i_12 < 17;i_12 += 1)
                            {
                                arr_42 [i_7] [i_8] [i_8] [18] = (((arr_31 [i_7] [i_7] [i_7]) ^ 55391));
                                var_18 = (((arr_38 [i_12 - 1] [i_12] [i_12] [i_12 + 1] [13]) ^ (arr_40 [i_12 - 2] [i_12] [i_7] [i_12 + 2] [14])));
                                arr_43 [i_7] [i_8] [i_9] [i_7] [i_10] [7] = (((arr_38 [i_12 + 2] [i_8] [i_12 + 1] [i_9] [i_12]) ^ -64));
                            }
                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 19;i_13 += 1)
                            {
                                arr_46 [i_7] [i_7] [i_9] [i_7] [7] = var_11;
                                var_19 = (min(var_19, (arr_22 [i_7] [i_8] [i_8] [i_10])));
                            }
                            var_20 = (((((arr_33 [i_7] [i_8] [i_8] [i_9] [i_10] [i_10]) / var_7)) + (var_13 | var_2)));
                            arr_47 [i_7] [i_8] [i_7] = (((var_12 << (2047 / var_12))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
