/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 += ((5211115419364928572 ? -11 : 13235628654344623055));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (!-104)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (((~5211115419364928572) * (~-98)));
                                var_13 = ((~((~((var_8 ? -104 : 5211115419364928572))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_1] [i_2]);
                }
            }
        }

        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            var_14 = (((~(arr_4 [i_5 + 1] [i_0]))));
            var_15 = 0;
            var_16 = ((((((arr_0 [i_5 + 1] [i_5 - 2]) ? var_9 : (arr_0 [i_5 - 2] [i_5 - 1])))) ? (((arr_0 [i_5 + 1] [i_5 + 1]) ? (arr_0 [i_5 - 1] [i_5 - 2]) : 13235628654344623043)) : ((((arr_0 [i_5 - 2] [i_5 - 2]) & (arr_0 [i_5 - 1] [i_5 - 1]))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_17 |= ((~(((0 < (arr_1 [2]))))));
            var_18 = ((var_2 / (arr_20 [i_6])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_19 |= ((!((max(9945248976532355198, 65513)))));
                            arr_30 [12] [i_8] [8] [8] [12] &= -58;
                            var_20 ^= (!9111371218707189443);
                            arr_31 [i_0] [i_0] = (((((65535 ? (~var_0) : (-104 / -59)))) ? (((((-21 ? var_2 : 1))) ? ((max(68, (arr_20 [i_0])))) : (arr_19 [i_9] [1] [i_0]))) : ((+((((arr_23 [i_0] [i_7] [i_8] [i_9]) < -55)))))));
                        }
                    }
                }
            }
            arr_32 [i_0] = var_5;
            var_21 ^= ((-var_6 ? 16 : (((var_3 && (((var_0 ? -115 : var_7))))))));
        }
        var_22 -= ((((arr_18 [i_0] [i_0] [i_0]) * ((1 ? 55 : 13235628654344623044)))) * ((((arr_11 [i_0] [i_0] [i_0] [1] [i_0]) ? var_9 : (arr_6 [i_0] [i_0] [i_0] [24])))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] = 0;
        var_23 = ((-(((((var_3 ? 0 : 65535)) <= (!0))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_24 = -54;
        var_25 *= (((arr_29 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_29 [i_11] [i_11] [i_11] [i_11] [i_11]) : 54));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 12;i_13 += 1)
            {
                {
                    var_26 += ((15978 ? -33 : (~-58)));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_48 [i_11] [i_11] [i_11] [1] [i_11] [3] = ((0 ? 5789 : 71));
                                var_27 = 63972;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_28 = (min(var_28, 72));
        var_29 -= (-9223372036854775807 - 1);
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    {

                        for (int i_20 = 1; i_20 < 13;i_20 += 1)
                        {
                            var_30 *= ((((1565 ? var_5 : -8700106650549972957)) - 16002));
                            var_31 |= -0;
                        }
                        var_32 = ((((((~1) != 1))) >> (((!(~var_7))))));
                    }
                }
            }
        }

        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_65 [i_16] = (max(-115, -68));
            arr_66 [i_16] [i_21] = 63972;
            var_33 |= ((var_7 ? ((max(68, (arr_60 [i_16] [1] [i_16])))) : (var_9 + var_3)));

            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                arr_69 [i_16] [i_21] [i_22] [i_22 - 1] = -118;
                var_34 = ((-((68 ? (-69 | -69) : var_5))));
                var_35 = ((~(~1562)));
            }
        }
    }
    var_36 = var_1;
    #pragma endscop
}
