/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max((1 * var_4), ((-101 ? var_2 : -11))));
        arr_4 [i_0] = (min((((!(var_6 | -33)))), (min(var_3, (max(1116892707587883008, var_0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_8 [9] [i_1] = (var_7 && var_12);
        arr_9 [i_1] = -var_4;
        var_13 = (!18446744073709551615);

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_14 *= -var_2;
                        arr_20 [i_1] [i_2] [12] [6] [i_2] = var_1;
                        arr_21 [7] [i_2] [3] [i_2] [1] = (var_5 != var_11);
                    }
                }
            }
            var_15 += (!var_10);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = (!var_6);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_30 [i_5] [i_5] [i_5] = (18446744073709551592 >= var_11);

                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        var_16 |= var_9;
                        var_17 = (var_4 ? 18446744073709551608 : 3460415860593463684);
                        var_18 = ((-9223372036854775807 - 1) ? 126100789566373888 : -11);
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_19 = ((var_7 ? var_6 : (-9223372036854775807 - 1)));
                            var_20 = (max(var_20, (~var_2)));
                            var_21 &= (var_9 & var_5);
                            var_22 ^= (var_5 < var_3);
                            arr_38 [8] [1] [17] [i_9] = 0;
                        }
                        arr_39 [10] [15] = ((var_6 | (1 < 8390090295424693490)));
                        var_23 = (min(var_23, (((-1116892707587883040 ? 1 : var_7)))));

                        for (int i_11 = 4; i_11 < 23;i_11 += 1)
                        {
                            arr_43 [i_5] [i_6] [20] [i_9] [20] [20] = (8586366381904060542 == -10);
                            var_24 &= (var_5 >= 234);
                        }
                        var_25 -= (10026108296222703122 > var_11);
                    }
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        arr_46 [i_5] [18] = ((var_7 ? var_6 : var_1));
                        arr_47 [i_5] = (((((var_7 ? 123 : 1))) < ((var_7 ? var_0 : var_4))));
                    }
                    for (int i_13 = 3; i_13 < 23;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_52 [i_14] [i_14] [i_13] [14] [i_13] [i_5] [i_5] = ((1 || 1) ? var_6 : 136339441844224);
                            var_26 = (min(var_26, (((0 ? var_3 : 126100789566373888)))));
                            var_27 = ((var_7 % (-9223372036854775807 - 1)));
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_28 = var_9;
                            arr_55 [i_13] [i_13] = ((((1 ? 18446744073709551615 : var_8)) % (18320643284143177731 && var_6)));
                            var_29 = ((var_7 ? var_10 : (var_10 / var_6)));
                        }
                        arr_56 [i_5] [i_5] [12] [6] [i_5] [i_13] = (18446744073709551610 ? var_12 : var_8);
                    }
                    var_30 ^= ((!(((8190 ? var_1 : 1)))));

                    for (int i_16 = 4; i_16 < 23;i_16 += 1)
                    {
                        arr_60 [7] [7] [17] [i_16 + 1] = 18446744073709551591;
                        var_31 = (((17141019616022811398 % 8586366381904060525) | 1116892707587883008));
                        arr_61 [13] [12] [i_5] = (((var_3 | var_2) / var_8));
                        var_32 = -var_5;
                        arr_62 [3] [i_6] [i_7] [23] [23] = ((233 ? 1 : 0));
                    }
                }
            }
        }
        var_33 = (~1);
    }
    var_34 = 0;
    var_35 = min(((var_8 ? (max(21, 65011712)) : (!504403158265495552))), (((-9223372036854775807 - 1) % 18446744073709551593)));
    #pragma endscop
}
