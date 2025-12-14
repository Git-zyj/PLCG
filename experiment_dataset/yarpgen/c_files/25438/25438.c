/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((var_0 || 1557035086) || 1))) != (((var_1 && (2147482624 && var_3)))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] = ((+(((arr_6 [i_1] [i_1]) ? (arr_7 [i_1]) : ((((arr_0 [i_1]) == var_0)))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2 + 3] = ((32763 | (~-1557035073)));
                        var_11 = (max(var_11, ((((-1234948545 + 2147483647) >> (((!(!var_9)))))))));
                        var_12 = (max(var_12, (((((((arr_6 [i_0] [i_3 + 1]) && var_8))) < (((!(arr_13 [i_0] [i_2] [i_3 - 1] [i_3 - 1] [13])))))))));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_13 = (arr_17 [i_0] [21] [i_0] [i_1]);
                var_14 += (arr_12 [i_0] [i_4] [i_4] [i_0]);
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_15 = (((var_5 ? (arr_10 [i_0] [i_0] [8] [i_1]) : var_5)) | (((~(arr_9 [i_0] [i_5])))));
                var_16 *= (arr_19 [i_1] [i_0]);
                var_17 = ((((((!(arr_17 [i_0] [i_1] [i_5] [i_1]))))) * (((arr_18 [i_1] [i_1] [i_1]) - 480371822))));
                arr_21 [i_1] = ((((arr_0 [20]) ^ (arr_5 [7] [i_1] [i_0]))));
            }
            var_18 ^= ((arr_9 [i_1] [i_1]) ? (((arr_7 [i_0]) + (arr_10 [i_0] [i_1] [6] [i_0]))) : var_5);
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_19 = ((((((-1234948528 || 251) || (arr_11 [i_6 - 2] [i_6 + 1])))) * (((arr_13 [i_6 + 1] [1] [i_6 - 2] [i_6] [i_0]) + (arr_18 [i_6 + 1] [i_6] [i_6])))));
            var_20 |= ((~(arr_22 [i_0] [i_6])));
            arr_26 [i_6] = ((!(((arr_17 [i_6] [i_6 - 2] [i_6 - 2] [i_6]) > (arr_17 [i_6] [i_6 + 1] [i_6 + 1] [i_6])))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_30 [i_0] [5] [i_6] [i_6] = (~var_4);
                arr_31 [i_6] = (((((~(arr_6 [i_6] [1])))) ^ (((arr_10 [i_0] [i_6] [i_7] [i_6]) & (arr_7 [i_6])))));
            }
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            arr_35 [i_8] = -var_8;
            arr_36 [i_8] = ((~((~((var_5 | (arr_19 [i_0] [i_8])))))));
            var_21 = (-1557035087 + 0);
            arr_37 [i_0] [i_8 - 2] &= var_1;
        }
    }
    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        var_22 = var_7;

        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_50 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 3] [i_9] = var_5;
                            arr_51 [5] [i_12] [i_9] [i_10] [i_9] [i_9] [i_9] = ((87 + (((!var_1) - (var_3 % var_1)))));
                        }
                    }
                }
            }
            arr_52 [i_9] [i_9] [i_9] = -1708;
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_23 = (min(var_23, (arr_14 [i_9 - 3] [i_9 - 3])));
            arr_55 [i_9] [i_14] [i_9] = (~-1234948545);
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 12;i_17 += 1)
                    {
                        {
                            arr_64 [i_9] [i_9] [i_15] [i_16] [6] [i_14] [i_9] = (((var_5 / var_9) << (~var_3)));
                            var_24 = var_2;
                        }
                    }
                }
            }
        }
        var_25 = ((((~(arr_32 [i_9] [14])) & (((arr_38 [i_9 - 2] [i_9]) ^ -81)))));
    }
    var_26 = ((-((var_3 & (~65527)))));
    var_27 = (-var_4 != var_5);
    #pragma endscop
}
