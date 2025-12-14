/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 &= (arr_5 [i_0]);
                var_18 = (((arr_1 [i_0] [i_1]) ? (((~4291512838) ? var_4 : ((~(arr_0 [22]))))) : (((~(arr_4 [i_0] [i_1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 *= (((949093123 ? -20006 : (arr_2 [i_2] [i_2]))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_20 *= (arr_8 [i_2]);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_21 = 65531;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2] [i_4] [i_5] [i_6] [i_4] = (~16487338121890115313);
                            var_22 = ((((~var_1) - var_11)));
                            var_23 = (min(var_23, -1));
                            arr_21 [i_2] [i_2] = ((((((var_9 ? 1431192894 : 173))) ? -1 : -var_14)));
                            var_24 |= -5497;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_24 [i_2] [i_3] [i_3] [i_2] &= 2147483647;
                var_25 = ((var_7 ? ((var_5 | (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_13 [i_2] [i_2] [i_7])));
            }
            var_26 ^= ((((-((var_7 ? var_6 : var_11)))) - (arr_1 [i_2] [i_3])));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_27 = (min(var_27, ((var_13 ? var_2 : (arr_28 [i_8] [i_9])))));
                    var_28 += -var_6;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_31 [i_2] [i_2] = 23575;
                    var_29 = (arr_8 [i_3]);
                    arr_32 [i_2] = (34999 ? var_0 : 1);
                    var_30 -= var_9;
                }
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    arr_37 [i_2] [i_3] [i_3] [i_11] = ((2147483647 ? -104 : -var_12));
                    var_31 = var_6;
                    var_32 ^= (((arr_30 [i_3] [i_3] [i_3] [i_11 - 1]) >= (arr_30 [i_8] [i_11] [i_3] [i_11 + 2])));
                    var_33 = var_15;
                    arr_38 [i_2] [i_3] [i_8] [i_2] = var_15;
                }
                arr_39 [6] [i_3] |= (9223372036854775787 ? var_15 : var_6);
                arr_40 [i_2] [i_2] [i_2] = (arr_34 [i_2] [i_2] [1] [i_2] [i_3] [1]);
                var_34 += -5506;
            }
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            var_35 = ((-((-(arr_14 [i_2])))));
            var_36 = ((-(((((~1) + 2147483647)) >> (1 % var_4)))));
        }
        arr_45 [i_2] = 213511001813613537;
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_37 = -112;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    arr_54 [i_15] [i_15] = ((32757 ? (((arr_5 [i_13]) ? var_8 : var_10)) : (((1 ? var_4 : var_16)))));
                    var_38 = -var_10;
                    var_39 -= (+-10);
                }
            }
        }
    }
    for (int i_16 = 2; i_16 < 12;i_16 += 1) /* same iter space */
    {
        var_40 = (arr_3 [i_16 + 1]);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                {
                    arr_63 [i_16] [4] |= ((-((~((23487 ? 148 : var_10))))));
                    var_41 = (13147 ? 1 : 8542892805763566874);

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_42 = (min(var_42, var_3));
                        var_43 = -12;
                        arr_66 [i_17] [i_17] [i_17] [i_17] = var_13;
                        var_44 = ((((arr_53 [i_16] [i_16] [i_16]) ^ var_12)));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_45 = (((arr_58 [i_16 - 1] [i_16 - 1]) ? (arr_4 [i_16 - 1] [i_16 - 1]) : (arr_4 [i_16 + 1] [i_16 + 1])));
                        var_46 ^= -var_7;
                    }
                    var_47 = (min(var_47, (+-61)));
                    var_48 = (~928931942);
                }
            }
        }
    }
    #pragma endscop
}
