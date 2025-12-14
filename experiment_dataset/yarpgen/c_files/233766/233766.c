/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_16 |= (min((((((var_7 & (arr_1 [i_0])))) ? var_2 : 33554432)), 1283013857));
        var_17 ^= (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = 19512;
            arr_5 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) - (var_8 ^ var_12)));
            var_19 *= 14730;
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_9 [11] [i_0] = ((!(((arr_7 [i_2 + 2] [i_2 + 1] [i_0]) > 16128))));

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_20 = min((-127 - 1), (~4294967295));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_21 = max(29612, (arr_10 [i_0] [i_2 - 2] [i_0]));
                            var_22 = (min(var_22, (arr_1 [i_2])));
                            var_23 = ((+(((arr_1 [i_5]) & ((0 ? 97 : var_11))))));
                        }
                    }
                }
                var_24 = (arr_10 [i_0 + 2] [i_2 + 3] [i_2 + 2]);

                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_25 = var_5;
                    var_26 -= ((516709379 ? 25862 : 48));

                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_27 = (8323072 - 2047);
                        arr_23 [i_3] [i_0] [i_6] [i_3] [i_0] [9] = var_3;
                        arr_24 [i_7] [i_0] [i_3] [i_2] [i_0] [i_0] [i_0 - 1] = arr_21 [i_6] [i_2] [i_3] [i_6] [1] [i_6] [i_2];
                        var_28 ^= (1277437958 - 61);
                    }
                    arr_25 [i_0] [i_2] [i_2 - 1] = arr_0 [i_0];
                }
            }
        }
        for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_29 ^= -2147483647;
            var_30 = (arr_15 [i_8] [i_0] [7] [i_0] [7]);
        }
        var_31 = (max(-2147483641, var_2));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_30 [1] [i_0] = (arr_20 [i_0 + 4] [i_0 - 2] [3] [14] [i_9] [i_0]);
            var_32 = (max(var_32, ((((arr_18 [i_0 - 1] [i_9] [i_9 + 2] [5] [3] [i_9]) % 61)))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
        {
            var_33 = var_5;
            arr_33 [i_10] [i_0] [i_0 - 3] = (arr_18 [i_0] [i_0] [11] [10] [i_10] [i_10 + 3]);
        }
        for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
        {
            arr_37 [i_0] = 1225702045913574125;
            arr_38 [i_0] [i_11 + 3] [i_0] = (arr_1 [i_0 - 3]);
            var_34 = ((105 & (((arr_19 [11] [i_11 + 1] [i_11] [i_0 + 4]) / (arr_28 [i_0 - 1] [i_0] [i_11 - 1])))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_35 ^= 1840645583;
                        var_36 ^= 511;
                        var_37 *= 1;
                        var_38 = ((-((1 - (arr_36 [13] [i_12] [i_0])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_39 = (min(var_39, var_1));
        var_40 |= (arr_45 [10]);
    }
    #pragma endscop
}
