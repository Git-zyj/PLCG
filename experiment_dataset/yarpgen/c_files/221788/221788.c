/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;
    var_11 = ((((-7 * var_4) <= var_7)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_12 = (~30);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_3] = ((-1 ? ((var_4 * (arr_8 [1] [i_1] [1] [1] [1]))) : 0));
                        var_13 = ((((min((arr_5 [i_1 - 4] [i_1 - 1] [i_1 - 2]), var_9))) * (!var_4)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_14 = (min(var_14, var_6));
        var_15 += ((arr_8 [i_4] [i_4] [i_4] [i_4] [1]) ? (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_8 [i_4] [i_4] [i_4] [6] [i_4]));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_16 = ((((max((arr_14 [i_5]), var_5))) + ((((((var_7 + 2147483647) << (743644678 - 743644678)))) ? (((arr_13 [2]) ^ 11)) : var_5))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_17 = var_8;
                    var_18 = (((arr_19 [i_5]) >= (max(4, var_9))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_25 [i_8] [i_6] [i_6] [i_5] = (((1 ? 27351 : 743644677)));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_19 = (~-743644678);
                            arr_30 [i_5] [i_5] [i_6] [i_6 - 1] [i_7] [i_8] [3] = (((arr_23 [i_5] [i_6] [i_6 - 1] [i_8] [i_9 + 1]) != 5923541044281399064));
                            var_20 = ((var_0 <= (arr_20 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                        }
                        for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_7] [i_6] [i_7] [8] [i_8] [i_8] |= var_5;
                            arr_34 [i_6] [i_6] = (((min(1622412797, (arr_19 [i_5]))) - (((min(var_8, var_0))))));
                            arr_35 [i_5] [i_6] [i_7] = arr_18 [i_10] [i_5];
                        }
                        var_21 *= (min(((max(var_4, var_6))), (~1)));
                        arr_36 [i_7] [i_7] [i_6] [i_6] = (min(((((arr_31 [i_6 - 1] [i_6 - 1] [i_7] [i_7] [i_7]) || (arr_31 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_8])))), (var_4 > 32760)));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_22 = ((~(arr_32 [i_5] [9] [i_11] [9] [i_12] [i_12] [i_11])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            arr_46 [i_13] [i_5] [i_13] [i_13] [i_13] [i_5] &= (arr_43 [11] [6]);
                            arr_47 [i_5] [i_12] [i_14] = -1622412798;
                            arr_48 [i_5] [i_11] [i_5] [i_13] [13] = (~((max((arr_40 [i_11]), (arr_40 [i_5])))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_15 = 3; i_15 < 13;i_15 += 1)
                {
                    var_23 = ((18446744073709551615 / (((-3939 ? (arr_32 [i_5] [i_11] [i_5] [i_5] [i_5] [i_11] [i_5]) : (arr_44 [i_5] [i_5] [i_11] [i_11] [i_5] [i_15] [i_15 - 2]))))));
                    var_24 = (min(var_24, (!var_1)));
                }
            }
            var_25 -= (((var_2 % var_6) == ((((arr_17 [i_5] [i_5] [i_5]) >> (var_1 + 21041))))));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 11;i_16 += 1) /* same iter space */
        {
            arr_53 [i_16] = 65535;

            for (int i_17 = 3; i_17 < 13;i_17 += 1)
            {
                arr_57 [i_16] [9] [i_16] = (!var_8);
                var_26 |= (((arr_20 [i_16] [i_16 - 2] [i_17 - 1] [i_16 - 1]) & var_1));
                arr_58 [i_5] [i_5] [i_5] [i_16] = (((arr_23 [i_16 + 2] [11] [i_16 - 1] [i_17 - 3] [i_17 + 1]) && ((((arr_43 [3] [i_17]) - -12)))));
            }
            arr_59 [i_16] = (2292033973 >= var_9);
            var_27 = (((((~(arr_51 [i_5] [i_16])))) ? var_8 : (arr_14 [i_5])));
        }
        for (int i_18 = 3; i_18 < 11;i_18 += 1) /* same iter space */
        {
            arr_64 [i_5] = ((max(var_1, (arr_54 [i_5] [i_18 - 1] [i_18 - 1]))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    {
                        var_28 = (max(((var_9 ? (arr_65 [i_18 - 3]) : (max(var_7, var_4)))), 1));
                        arr_69 [i_5] [i_5] [i_5] [i_20] = var_5;
                    }
                }
            }
            var_29 ^= var_4;
        }
        var_30 += ((32750 ? -1376136365 : (32753 > 97)));
    }
    #pragma endscop
}
