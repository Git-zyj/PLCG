/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 -= (((arr_0 [0]) % (arr_0 [6])));
        arr_3 [i_0] [i_0 + 1] = ((var_8 == (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 *= (arr_5 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_19 = (max(var_19, (((+(((arr_9 [i_1] [16] [i_2] [i_3]) ^ (arr_7 [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 -= (((arr_6 [i_4 + 1] [i_3]) <= (arr_6 [i_5] [i_2])));
                            arr_16 [i_1] [i_1] [i_3 + 1] [i_4 + 1] [i_5] [i_3] = 1;
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_20 [i_6] [i_6] [i_6 - 1] [i_6] = (arr_13 [i_1]);
                arr_21 [i_1] [i_6] [i_6] = ((1970258095 << (95 - 95)));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_21 = (((arr_13 [i_7]) + (arr_13 [i_7])));

                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    var_22 = (min(var_22, ((((arr_18 [i_7] [i_2 + 2]) ^ 1970258088)))));
                    arr_27 [i_1] [i_2 + 1] [i_1] [i_8] [i_1] = (arr_23 [i_2 - 1] [i_2 - 2] [13] [i_8 - 2]);
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    arr_30 [i_1] [i_2] [i_1] [i_9] = (arr_29 [i_9 + 2] [13] [i_7] [i_9] [i_9]);
                    arr_31 [i_1] [i_9] [i_1] [i_1] = (((!1) ^ 1970258096));
                    var_23 = (max(var_23, (arr_23 [i_9] [i_7] [i_2] [i_1])));
                    var_24 = var_3;
                }
                arr_32 [i_7] [i_7] [i_7] = (((((var_0 <= (arr_25 [i_1] [i_1])))) <= -1));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                arr_35 [0] [i_2] [i_10] = ((~(arr_8 [i_2])));
                var_25 = (min(var_25, ((((((arr_10 [i_2 + 2] [1] [i_2 - 2] [i_2] [i_2 + 2] [i_2]) + 2147483647)) >> (((arr_10 [i_2] [i_2 + 1] [i_2 - 1] [16] [i_2 - 2] [i_1]) + 32239)))))));
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    {
                        var_26 = ((~(((var_11 < (arr_36 [i_11] [i_2 - 2] [i_11]))))));
                        var_27 = (((arr_15 [i_12 + 1] [i_12] [i_2 + 2] [i_2 - 1] [i_2]) << (((arr_26 [i_12 - 1] [i_12 - 1] [i_12]) - 989955482237589917))));
                        arr_42 [i_2] [i_2] [i_2 - 1] [i_2] &= (((arr_14 [i_2 + 1] [i_12 - 1] [i_11] [i_12] [i_12] [i_1] [i_2]) && (arr_9 [i_1] [i_2] [i_11] [i_2])));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_28 = (max(var_28, 1));
            arr_45 [i_1] = (((((arr_24 [i_1] [i_13]) % (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_13]))) < (var_12 >= 27)));
            var_29 &= ((!(arr_25 [i_1] [i_13])));
            var_30 *= -1970258097;
        }
        var_31 = (arr_14 [i_1] [i_1] [i_1] [14] [i_1] [i_1] [i_1]);
    }
    for (int i_14 = 3; i_14 < 17;i_14 += 1)
    {
        arr_48 [i_14 - 2] [i_14 - 3] = (max((max(((max(1073709056, -23320))), 9791556853841216507)), (((5666 ? -1970258097 : 1)))));
        var_32 = (min(var_32, ((max(32322, 84)))));
    }
    var_33 -= var_7;
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                {
                    arr_55 [1] = var_11;
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                var_34 ^= (((((-(arr_8 [i_15])))) <= (((arr_15 [i_15] [i_15] [i_15] [i_15] [i_15]) ? var_2 : (arr_51 [i_16] [i_15])))));
                                arr_60 [i_16] [i_17] [i_18] [1] = (((~var_1) != ((1970258086 << (15555444293686703955 - 15555444293686703955)))));
                                var_35 = ((~(!2051684302)));
                                var_36 = ((!(((((-(arr_57 [i_15] [i_16] [i_18] [i_19]))) << (((var_14 + 67) - 10)))))));
                                var_37 = (max(var_37, ((var_4 ? (arr_29 [i_15] [i_15] [i_17] [i_19] [i_19]) : ((((arr_33 [i_15] [i_16]) - (arr_43 [i_16]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
