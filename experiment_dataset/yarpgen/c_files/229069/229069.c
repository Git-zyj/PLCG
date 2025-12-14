/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] [0] = (((arr_1 [i_0 + 3]) ? ((var_1 ? 50596 : var_1)) : (((var_7 ? var_0 : var_6)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3 + 1] [i_1] [11] [i_1] [11] [i_0] = var_0;
                                var_10 = -2210566781029428344;
                                arr_12 [0] [4] [i_1] [i_1] [i_1] [i_4] [i_4] = ((var_6 ? 32 : var_8));
                                var_11 = 3352807975;
                            }
                        }
                    }
                    arr_13 [i_1] [i_0] [i_1] = ((127 ? -6271147080627823221 : (arr_0 [17] [i_2])));
                    arr_14 [18] [i_1] [i_0] &= ((5039083771323233804 ? 1934378041632184381 : 18446744073709551604));
                    var_12 = (!29208);

                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        var_13 = (min(var_13, (((2566 >= (arr_3 [i_0]))))));
                        var_14 = (arr_9 [i_0 + 2] [i_1 - 1] [10] [i_1 - 1] [i_5 - 3]);
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_15 = 19;
                        var_16 = (max(var_16, (arr_18 [i_0] [i_0] [i_0])));
                        arr_19 [i_0] [i_1 - 1] [i_1] = (((arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_6 - 3]) >= (arr_17 [i_0 + 3] [i_1 + 2])));
                        var_17 = (max(var_17, var_5));
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        var_18 *= ((var_0 ? (arr_9 [i_7 - 3] [i_1] [i_1] [i_7 - 3] [i_0 - 2]) : (arr_9 [i_7 + 2] [i_0] [i_7 + 2] [i_7 + 4] [i_0 - 2])));
                        var_19 += (arr_18 [8] [i_0] [i_0]);
                        arr_23 [i_0 + 2] [i_1] [i_1] [i_7] [i_1] = 224;
                    }
                }
            }
        }
        arr_24 [i_0 + 1] = (arr_21 [i_0] [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                {
                    var_20 = 10401;

                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        arr_31 [i_8] [i_9] [i_8] [i_8] = (arr_4 [i_0 + 3]);
                        var_21 = ((17524203897718390051 ? 17524203897718390031 : var_1));
                    }
                    var_22 = (!var_5);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_23 = var_2;
            var_24 = var_0;
        }
        for (int i_13 = 4; i_13 < 15;i_13 += 1)
        {
            var_25 = var_2;
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 18;i_15 += 1)
                {
                    {
                        arr_47 [i_11 + 2] [i_11 + 2] [i_13] [i_13 - 2] [i_14] [i_11 + 2] = (!806061582);
                        arr_48 [i_13] [i_13] = (((var_3 + 9223372036854775807) >> (var_2 - 85)));
                    }
                }
            }
        }
        var_26 = 18446744073709551604;

        for (int i_16 = 3; i_16 < 16;i_16 += 1)
        {
            var_27 = ((var_4 ? var_7 : (0 != var_5)));
            arr_51 [i_16] [i_11] = var_1;
            var_28 = var_2;
        }
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            var_29 -= (arr_1 [i_11 + 3]);
            arr_54 [i_11] &= ((224 >> ((((var_2 ? var_1 : (arr_28 [i_11 + 1] [i_11] [i_11]))) - 7856899318769257509))));

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_30 ^= 18446744073709551615;
                var_31 += (((arr_6 [i_11 + 3]) >= (arr_32 [i_11 - 2])));
            }
            var_32 = ((-1 ? -3212 : var_8));
        }
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 16;i_19 += 1) /* same iter space */
    {
        var_33 = var_3;
        var_34 = (arr_45 [i_19] [9] [i_19 + 2] [i_19 + 3] [i_19 + 3]);
        var_35 = var_5;
        var_36 = (((arr_15 [i_19]) ? var_9 : (arr_0 [i_19 - 1] [i_19 - 1])));

        for (int i_20 = 2; i_20 < 17;i_20 += 1)
        {
            var_37 = (arr_16 [i_19] [i_20] [i_20] [i_19] [i_19 + 3]);
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 16;i_22 += 1)
                {
                    {

                        for (int i_23 = 1; i_23 < 17;i_23 += 1) /* same iter space */
                        {
                            var_38 = (max(var_38, var_0));
                            var_39 = var_6;
                            var_40 = 32598;
                        }
                        for (int i_24 = 1; i_24 < 17;i_24 += 1) /* same iter space */
                        {
                            arr_76 [9] [i_20] [i_21 + 2] [14] [i_24 - 1] = ((var_5 ? var_4 : 5614305497065559815));
                            var_41 ^= (((((var_7 ? -651 : var_7))) >= var_1));
                        }
                        var_42 = (arr_39 [i_20] [i_21] [i_22 + 2]);
                        var_43 *= 33;
                        var_44 -= var_2;
                    }
                }
            }
        }
    }
    var_45 = min(699304905, 7);

    for (int i_25 = 4; i_25 < 23;i_25 += 1)
    {

        /* vectorizable */
        for (int i_26 = 0; i_26 < 25;i_26 += 1)
        {
            var_46 = (arr_77 [i_25 + 1] [i_25 + 1]);
            var_47 = (arr_79 [10]);
            var_48 = ((-2210566781029428333 ? 2284790229 : 922540175991161583));
        }
        var_49 = var_1;
        arr_82 [i_25] = 922540175991161560;
        var_50 = (((arr_79 [i_25]) <= 222));
        var_51 = (arr_79 [i_25 + 1]);
    }
    /* LoopNest 2 */
    for (int i_27 = 1; i_27 < 17;i_27 += 1)
    {
        for (int i_28 = 1; i_28 < 18;i_28 += 1)
        {
            {
                var_52 = var_4;
                /* LoopNest 3 */
                for (int i_29 = 1; i_29 < 20;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 0;i_30 += 1)
                    {
                        for (int i_31 = 1; i_31 < 20;i_31 += 1)
                        {
                            {
                                arr_95 [i_28] [11] [i_29] [i_28] [i_28] = var_3;
                                var_53 = (max(var_53, ((min(var_8, var_9)))));
                            }
                        }
                    }
                }
                var_54 = (max(var_54, ((max(var_0, var_8)))));
            }
        }
    }
    #pragma endscop
}
