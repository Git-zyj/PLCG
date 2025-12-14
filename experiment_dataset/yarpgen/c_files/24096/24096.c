/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = ((-(arr_1 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (((-(arr_0 [0]))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_18 = (arr_4 [i_1]);
        var_19 = arr_5 [i_1];
        var_20 = (arr_1 [i_1 - 1]);
        arr_7 [i_1] [i_1 + 1] = 207;
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_2] [i_3] [i_3] = ((1 ? (((var_0 ? var_7 : (arr_1 [i_2])))) : var_0));
            arr_14 [i_2] [1] [i_3] = ((1 - (((arr_9 [i_2] [i_2]) ? 16 : (arr_11 [i_2 + 1] [2] [i_2 + 1])))));
            arr_15 [i_2] [i_3] [i_3] = (arr_10 [i_2]);
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_21 = 32512;

            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_22 [i_2] [i_2] [i_2] = ((0 | (arr_12 [i_2] [i_4 - 2] [i_2])));
                var_22 = (arr_16 [i_2] [i_4 + 2] [i_2]);
                arr_23 [i_2] [i_2] = (arr_11 [i_2 + 2] [i_4 - 2] [i_2 + 2]);
                var_23 = (((arr_20 [i_2 - 2] [i_4 - 2]) && (arr_10 [i_2 - 1])));
                arr_24 [i_2] = var_4;
            }
            var_24 = (arr_8 [i_2 - 2] [i_4 - 1]);

            /* vectorizable */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                var_25 = ((!(arr_18 [i_2] [i_2] [i_6 + 1] [i_2])));
                arr_28 [i_2] [i_6] [i_6] [i_4] |= ((!(((arr_0 [i_6]) >= var_5))));
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_31 [i_2] [i_2] = (max(((((min((arr_12 [4] [11] [i_2]), -255543951469942363)) != (arr_10 [2])))), (arr_9 [i_2 - 1] [i_2 + 2])));
            var_26 += var_3;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    {
                        var_27 = (min(9223372036854775783, 1));
                        var_28 = ((arr_35 [i_2 - 1] [i_9 - 2] [i_2]) ? ((var_9 ^ (arr_35 [i_2 - 1] [i_9 + 1] [i_2]))) : (((~(arr_35 [i_2 + 2] [i_9 - 2] [i_2])))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_44 [i_2] [i_7] [i_2] [i_11] [i_2] = (((arr_32 [11] [i_7]) ? 63 : 0));
                            arr_45 [i_2] [i_2] = ((arr_9 [i_2 + 1] [i_2 - 1]) << (((arr_38 [9] [9] [9]) - 8734722067852609959)));
                            arr_46 [i_2] [i_2] [8] [i_11] [2] = 8935141660703064064;
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_29 = (arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]);
                            var_30 = (((arr_25 [i_2 + 1] [i_2 + 2] [i_2] [1]) ? 1 : (arr_25 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2])));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_52 [i_2] [i_2] [1] [5] [i_14] = (arr_33 [i_2] [2]);
                            var_31 = (arr_20 [i_2] [1]);
                        }
                        var_32 += (((((arr_8 [i_2] [i_2 - 3]) ? (arr_40 [i_2] [i_11]) : (arr_39 [i_10] [i_7] [i_10]))) << (((((arr_40 [2] [i_11]) ? (arr_40 [1] [i_10]) : (arr_40 [i_10] [i_10]))) - 43))));
                    }
                }
            }
        }
        var_33 = (arr_35 [i_2] [7] [i_2]);
        arr_53 [i_2] = (i_2 % 2 == 0) ? ((((((((~var_7) + 2147483647)) << ((((((~(arr_40 [i_2] [i_2]))) + 72)) - 26)))) % ((~(min((arr_51 [i_2] [i_2]), 1))))))) : ((((((((~var_7) + 2147483647)) << ((((((((((~(arr_40 [i_2] [i_2]))) + 72)) - 26)) + 93)) - 3)))) % ((~(min((arr_51 [i_2] [i_2]), 1)))))));
    }
    var_34 = ((var_9 | (min(((max(var_3, 44156))), var_11))));
    #pragma endscop
}
