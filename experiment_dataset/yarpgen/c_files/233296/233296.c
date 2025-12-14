/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? 511 : (min(var_6, var_7))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = ((-614670357 ? -250945074 : 12052));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((-614670357 + 2147483647) >> ((((~(arr_1 [i_1]))) + 8))));
                        arr_11 [i_3] [i_0] [i_1] [i_0] = ((1 ? var_4 : (arr_4 [i_0 + 1])));
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        var_13 = ((max(250945060, var_7)) == 23169);
                        arr_15 [i_0] [i_4] [i_2 - 1] [2] = (arr_7 [i_0] [i_0] [i_2 + 1] [i_2 + 1]);
                    }
                    var_14 = (max(((-250945074 ? -250945074 : 5145006876797177584)), ((min(((max((arr_4 [i_1]), -32763))), 1)))));
                }
            }
        }
        var_15 = ((min(6516075507376867178, 42751)));

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_16 = (arr_5 [18] [i_5]);
            var_17 = (((var_2 - 125) ? (((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [12]) ? 1 : (min(var_2, var_5)))) : 6616));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    {
                        var_18 = (((arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 1]) && (arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2])));
                        var_19 = (arr_27 [i_0] [i_6] [i_6] [i_6]);
                        var_20 = (arr_14 [i_0 + 2] [i_0 + 2] [i_6] [i_8] [i_0 + 2] [i_8 - 1]);
                    }
                }
            }
            var_21 = 3719786571;
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = ((var_5 & ((((arr_3 [i_9] [i_9]) ? (arr_8 [i_9] [3] [i_9] [i_9]) : (arr_20 [i_9] [10]))))));
        var_22 = (arr_1 [i_9 + 1]);
        var_23 ^= ((-250945074 ? ((var_5 ? (arr_29 [i_9] [i_9] [i_9] [18]) : var_10)) : (arr_20 [i_9 + 2] [i_9 - 1])));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 9;i_12 += 1)
            {
                {
                    var_24 = ((((((arr_14 [i_11] [i_11] [i_11] [18] [i_11] [i_11]) ? (arr_14 [i_10] [i_11] [i_12] [2] [i_11] [i_11]) : (arr_14 [i_10] [i_10] [i_12] [6] [i_10] [i_12 - 1])))) ? ((((arr_14 [i_11] [i_11] [i_11] [1] [i_12 + 1] [0]) == (arr_14 [i_10] [i_11] [i_11] [16] [i_11] [i_12])))) : (min((arr_14 [i_12] [6] [i_10] [16] [i_10] [16]), (arr_14 [i_11] [i_11] [12] [0] [i_12] [i_11])))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            {
                                var_25 ^= (((arr_9 [i_11] [i_11] [i_14 - 2] [i_14 - 2] [i_10] [i_13]) ? (((!((min(1, (arr_19 [4]))))))) : (((var_4 > (((arr_23 [i_10] [i_11] [i_10]) ? (arr_27 [i_14] [i_13] [i_11] [i_10]) : (arr_34 [i_10]))))))));
                                var_26 = (min(var_26, (((((min(((((arr_45 [6] [i_11] [7] [i_13]) != 63))), -250945064))) ? (((arr_32 [1]) ? ((250945074 ? var_10 : 4503599627370495)) : (var_1 || 1886557941))) : (arr_22 [i_14]))))));
                                var_27 ^= ((-(arr_45 [4] [4] [4] [i_14 - 1])));
                                var_28 = (((arr_17 [i_12 + 2]) ^ 13841762497916524268));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 ^= var_10;
    #pragma endscop
}
