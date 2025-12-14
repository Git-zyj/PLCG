/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        var_14 = (max(18446744073709551601, (((16 ? (arr_0 [i_0]) : (var_12 * 0))))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_7 [i_1] = (18446744073709551598 * 0);
                var_15 = (arr_0 [i_1]);
            }
            arr_8 [i_1] = ((min(1, 0)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [i_5] [i_3] [i_5] [i_5] &= (((arr_17 [22] [i_5] [i_5] [1]) / (arr_17 [i_3] [i_4] [i_4] [i_6])));
                        arr_19 [i_3] [i_4] [i_5] = ((-(arr_9 [i_6])));
                        arr_20 [i_3] [i_4] [i_3] [i_3] [i_5] [i_6] = 1;
                        arr_21 [i_3] [i_3] [i_5] [i_6] [i_6] [i_5] = ((-((var_8 ? 1 : (arr_14 [i_6] [i_3] [i_5] [i_6])))));
                    }
                }
            }
            arr_22 [23] [i_3] = var_11;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
            {
                var_16 = (((arr_16 [i_3] [i_7] [i_8] [i_8]) << (((arr_13 [i_3]) - 57))));
                var_17 = (1 || 28);
                var_18 = ((var_3 - (arr_14 [i_3] [i_3] [i_3] [i_3])));
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
            {
                var_19 = 22569;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_20 ^= (arr_24 [i_7] [i_9] [i_9]);
                            var_21 -= ((var_7 || (1 + var_12)));
                        }
                    }
                }
                arr_37 [i_3] [i_7] [i_9] [i_9] = var_2;
            }
            arr_38 [i_7] [i_7] = (arr_23 [i_3]);
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_22 = (min(var_22, (arr_29 [i_3])));
                        var_23 = (min(var_23, (2147483621 == 2316631816256691696)));
                        var_24 = ((var_2 ? ((18446744073709551601 ^ (arr_26 [i_3] [i_3]))) : (((arr_45 [i_3] [i_12] [i_13] [i_14] [i_14] [i_14]) ? 18446744073709551587 : var_10))));
                        arr_46 [8] [8] [8] [8] = (((arr_28 [i_12] [i_14]) * var_6));
                    }
                }
            }
            var_25 ^= (arr_36 [i_3] [i_3] [9] [i_3] [9] [i_3] [i_3]);
            var_26 = (var_1 + var_10);
        }
        arr_47 [i_3] = var_1;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            arr_58 [i_16] [i_3] = 1;
                            var_27 += (((arr_52 [i_16] [i_15]) | (var_7 ^ var_10)));
                            var_28 = (((arr_32 [i_3]) ? (0 != 18446744073709551598) : (arr_44 [i_3] [i_3] [i_3] [i_3] [i_3])));
                            var_29 = (arr_12 [i_18]);
                        }
                        arr_59 [i_17] [2] [23] [i_16] = ((arr_30 [i_16] [i_16] [i_16]) ? (arr_49 [i_3]) : var_5);
                        arr_60 [i_15] [i_16] = (var_11 < var_6);
                        arr_61 [i_3] [i_16] = (((((arr_54 [i_3] [18] [i_16]) + (arr_36 [i_17] [i_17] [13] [i_17] [i_17] [i_16] [i_17]))) + -var_6));
                        var_30 = (((arr_16 [i_16] [i_16] [i_16] [i_16]) | (arr_16 [i_3] [i_15] [i_16] [i_17])));
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            var_31 = var_2;
            var_32 = (((-6048 + 2147483647) >> (((arr_35 [i_3] [i_19] [i_3] [i_3] [i_3] [i_3]) - 5827889407621835233))));
            var_33 = (arr_12 [i_3]);
            var_34 = (((arr_24 [i_3] [i_3] [i_3]) % (arr_24 [i_3] [i_19] [i_19])));
        }
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            arr_68 [i_20] [i_20] = ((((1 ? var_4 : var_5)) - (~0)));

            for (int i_21 = 2; i_21 < 22;i_21 += 1)
            {
                var_35 = (((var_6 & 6316) | (arr_29 [i_21 + 1])));
                var_36 = 1;
            }
        }
        arr_71 [i_3] [i_3] = (((!(arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
    }
    var_37 = (max(var_8, 1));
    var_38 = (var_1 && var_7);

    for (int i_22 = 0; i_22 < 14;i_22 += 1)
    {
        var_39 |= (((((~-6048) >> (var_6 >> 15))) << ((((min((arr_24 [i_22] [i_22] [i_22]), var_7))) - 108))));
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 14;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 14;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {
                    {
                        var_40 ^= ((min((arr_24 [1] [i_23] [i_25]), (arr_24 [i_22] [i_23] [i_24]))));
                        var_41 = (max(var_8, var_9));
                    }
                }
            }
        }
    }
    var_42 = var_10;
    #pragma endscop
}
