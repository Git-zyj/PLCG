/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(var_8, var_2)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0] [10]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_11 = var_0;
            var_12 = var_3;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = (((-22563 <= 2132265019) ? var_0 : var_9));
            var_13 = (arr_2 [i_0] [i_2]);
        }
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((min(((~(arr_10 [i_3 + 2]))), ((((min(var_3, var_3))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_15 = var_5;
                                var_16 |= ((min(((min(26894, 27211))), (min(var_1, (arr_5 [i_3]))))));
                            }
                        }
                    }
                    var_17 = (((!(((arr_14 [i_4]) <= (arr_5 [i_3]))))));
                    var_18 = ((min(((var_6 / (arr_19 [i_3] [i_3] [i_3] [i_3 + 3] [i_4] [i_3 + 1] [i_3 - 2]))), (arr_5 [i_3]))));
                    arr_21 [i_5] [i_4] [i_4] [i_3] = (((((2304 ? (arr_5 [i_5]) : var_4))) | (min(4294967295, -25750))));
                }
            }
        }
        var_19 ^= (min((((var_9 ? var_8 : (arr_8 [i_3 + 4])))), var_5));
        arr_22 [i_3] = ((var_8 ? (arr_1 [i_3 - 1]) : (min((arr_17 [i_3] [i_3] [i_3 + 4] [i_3 + 1] [i_3]), 17918924584927291437))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] [i_8] = (arr_14 [i_8]);
        var_20 -= ((var_8 ? var_8 : 0));
        var_21 = (arr_6 [i_8] [i_8] [i_8]);
        var_22 = (max(var_22, ((min(((-(((arr_5 [i_8]) / var_1)))), (min(((1 ? 1239434393 : var_3)), 0)))))));
        var_23 = (min(var_23, ((min(((-2132265008 ? ((((arr_14 [i_8]) ? (arr_14 [i_8]) : (arr_15 [i_8] [i_8])))) : (min(25761, 258612893715247014)))), var_0)))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_24 = (((1202 <= var_0) ? ((-((4094 / (arr_18 [i_9] [i_9] [i_9] [i_9] [i_10] [i_10]))))) : ((var_5 | (arr_19 [i_9] [i_9] [i_10] [i_9] [i_9] [i_9] [1])))));
            arr_30 [i_9] = (arr_29 [i_9] [i_10 - 1]);
            var_25 = var_6;

            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_26 = 0;
                arr_33 [i_9] [i_9] = var_6;
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
            {
                arr_38 [i_9] [i_9] = (((~1) ? ((min(-603892497, 603892472))) : var_7));

                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_27 = (max(var_27, var_3));
                    var_28 = (((arr_6 [i_10] [i_12] [i_13]) ? ((~(arr_32 [i_10]))) : 1));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        arr_46 [10] [i_14] [16] [i_10] [10] |= (((var_2 ? var_7 : 0)));
                        arr_47 [i_9] [i_12] [1] [i_9] &= ((~(~2862804160)));
                    }
                    var_29 = ((-((var_0 ? var_5 : var_3))));
                }
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    arr_51 [i_9] [10] [i_16] &= (var_3 ? (min((min((arr_35 [i_9] [8] [i_9] [i_9]), var_8)), var_6)) : ((min(31207, ((min(var_0, -25728)))))));
                    arr_52 [i_9] [i_9] = (min(var_8, var_7));
                }
            }
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
        {
            arr_57 [16] |= (min((min(5, (1 <= 4294967283))), (~921892835)));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 15;i_20 += 1)
                    {
                        {
                            arr_67 [i_9] [i_17] [i_17] [i_17] [i_17] [i_9] = (((arr_61 [2] [i_17] [i_17] [i_17 - 1]) >> var_9));
                            var_30 = (min((min(var_1, var_6)), (arr_6 [i_9] [i_17] [i_9])));
                            var_31 = (arr_34 [i_20] [i_20] [i_20]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 16;i_23 += 1)
                    {
                        {
                            var_32 = ((~var_8) <= (((!(((-495 ? (arr_14 [i_23 + 1]) : var_1)))))));
                            var_33 = 1938623054;
                            var_34 = ((var_0 & (arr_32 [i_9])));
                        }
                    }
                }
            }

            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                var_35 = (arr_72 [i_17] [i_24] [7] [i_17] [i_9]);
                var_36 *= var_5;
                var_37 |= 1940106066;
            }
        }
        var_38 = var_8;
        var_39 = (min((((min((arr_69 [i_9] [i_9] [i_9]), (arr_60 [i_9]))) | ((((arr_68 [i_9]) ? var_7 : var_2))))), var_5));
        var_40 ^= -204;
        arr_77 [i_9] = ((~(-26130 | 2119338351)));
    }
    #pragma endscop
}
