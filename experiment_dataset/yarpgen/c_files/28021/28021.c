/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_12 | ((-0 & (var_11 ^ 31)))));
    var_16 = var_1;
    var_17 += 0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((-87 ? -3953 : 1));
        var_18 = ((((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_8))) ? var_12 : (arr_1 [i_0]))) * 0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_7 [i_1]) || (arr_7 [i_1])));
        var_19 = (max(var_19, ((((arr_5 [i_1]) ? (var_6 & -6) : ((29768 ? var_11 : (arr_6 [1]))))))));
        var_20 *= -var_14;

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_21 = ((-(arr_5 [i_2 - 1])));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 -= (!0);
                            var_23 = (max(var_23, (((((-23043 ? (arr_12 [i_2 - 2] [i_2 - 1] [i_3]) : 0)) + (arr_13 [i_3 + 1] [i_3 + 1]))))));
                        }
                    }
                }
            }
            var_24 = (((arr_6 [i_2 - 2]) < var_14));
            var_25 = ((1426960948 ? 56289 : 241));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_26 = (min(var_26, (1 ^ 12861357691941433718)));
                        arr_24 [i_1] [i_1] [i_1] [6] [i_1] &= ((+(((arr_13 [i_1] [i_7]) ? 14758648434356391448 : var_1))));
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            var_27 += ((-(arr_25 [i_1] [i_8 + 1] [i_8 - 1])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_31 [i_1] = (arr_22 [i_8 - 2] [i_8 - 1]);
                        var_28 &= ((!var_12) <= var_8);

                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            var_29 = ((248 ? 11017 : 0));
                            var_30 = (((arr_15 [i_1] [i_1] [i_9]) ? var_10 : (arr_17 [i_1] [i_8] [i_11 + 3])));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_38 [i_1] [i_8] [i_9] [i_9] [i_10] [i_12] = arr_15 [i_1] [i_8] [i_12];
                            arr_39 [i_12] [i_10] [i_1] [i_9] [i_8] [i_1] = ((var_6 / (arr_35 [i_10] [i_10])));
                        }
                        var_31 = (arr_28 [i_1] [i_8] [i_9] [i_9]);
                    }
                }
            }

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {
                        {
                            arr_48 [i_15] [i_8] [i_13] [i_14] [i_15] |= (((arr_36 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_14] [i_1]) ? (arr_21 [i_8] [i_8 - 2] [i_8 - 1]) : (arr_21 [i_8] [i_8 + 1] [i_8])));
                            arr_49 [i_1] [i_8] [i_13] [i_14] [i_13] &= (243 ? 8 : 18446744073709551606);
                        }
                    }
                }
                var_32 = (max(var_32, (((((arr_14 [i_8] [i_8] [i_13]) != (arr_6 [i_1])))))));
            }
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_33 = (min(var_33, (arr_55 [i_8] [i_8])));
                            var_34 = (65527 % -23043);
                            var_35 = (min(var_35, (((1 ? ((((arr_9 [i_1] [i_16 + 1] [i_18]) >= 0))) : (((arr_30 [7] [i_16 + 1] [i_16 + 1] [7] [i_18]) ? (arr_6 [i_8]) : var_11)))))));
                            var_36 = ((~(arr_35 [i_16] [i_17])));
                        }
                    }
                }
                var_37 = (min(var_37, -var_5));
            }
            var_38 = var_4;
            var_39 = (((((arr_50 [i_1]) & 0)) <= (arr_46 [i_8] [i_8])));
        }
    }
    #pragma endscop
}
