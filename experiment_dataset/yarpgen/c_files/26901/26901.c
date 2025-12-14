/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((var_7 * var_16) * (var_16 < 29))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((((arr_0 [i_0]) + (var_4 / 2004160019))) + (arr_2 [i_0] [i_0])));
        var_21 = (max(var_21, (!2045125479)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (((((((max(var_12, var_10))) ? -17507 : (arr_0 [i_2])))) ? -var_10 : 43033));
                    arr_8 [13] [i_1] [i_2 - 2] [i_2 + 3] = ((((((((16 ? 13373 : 72))) / (((arr_2 [i_0] [i_1]) ? var_4 : 1733099763))))) ? ((((((17507 ^ (arr_7 [i_0] [i_0])))) >= ((~(arr_3 [i_0] [i_0])))))) : (((-19 <= 910949861) | var_17))));
                    arr_9 [i_0] = (((((!(var_10 - var_8)))) >= (((var_12 <= (max(11967127196971560169, 21468)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_23 = (((11967127196971560169 ? (((var_2 ? var_3 : var_8)) : ((-10762 ? 4 : (arr_11 [i_3])))))));
                    arr_14 [i_0] [i_3] [i_4] = ((!((var_12 > (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_4] [i_5 - 1] [i_3] [i_6] = 80;
                                var_24 = (((arr_4 [i_3 - 1]) >> (var_9 - 1557025913)));
                                var_25 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_26 = var_11;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_27 = ((arr_28 [i_7] [i_7] [i_9 + 1] [i_10]) ? (((arr_27 [i_7 + 4] [i_8] [i_9] [i_10]) ? var_0 : var_13)) : (!17488459282324477524));
                        var_28 = (((arr_22 [i_7 + 2]) ? (arr_26 [i_7 + 2] [i_9 - 1] [i_10]) : (arr_26 [i_7 + 2] [i_9 - 1] [i_10])));
                    }
                }
            }
            var_29 = var_18;
            arr_30 [i_7] [i_7] [i_8] = 6479616876737991446;

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_30 = ((((5 ? var_10 : var_15)) + (!9250)));
                            var_31 = (max(var_31, (arr_28 [i_13 + 1] [i_13 + 2] [i_13] [i_13])));
                            var_32 = var_12;
                            var_33 = 0;
                            arr_37 [i_13] [i_13] [i_13] = (arr_22 [i_7 + 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_34 = ((var_4 ? var_2 : (var_15 / var_9)));
                            arr_42 [i_7] [i_8] [i_11] [i_14] [i_15] = 53198;
                            var_35 = (max(var_35, 18441732153652106925));
                            var_36 = var_8;
                            var_37 &= ((~((2292400730 ? (arr_24 [i_7] [i_8]) : var_10))));
                        }
                    }
                }
                var_38 ^= arr_28 [i_7] [i_7 + 4] [i_7 - 1] [i_7 - 1];
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                {
                    var_39 = (~1);
                    arr_50 [i_7] [i_17] [i_16] [i_16] = var_1;
                }
                for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                {
                    arr_53 [i_7] = var_14;
                    arr_54 [i_7 + 4] [i_8] [i_16] [i_16] [i_18] [i_18] = (((((1 ? var_11 : (arr_40 [i_7 + 4] [i_7 + 1] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 1])))) / 4535388177905275515));
                    var_40 = (((arr_31 [i_8] [i_16]) < 4294967284));
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 22;i_20 += 1)
                    {
                        {
                            var_41 = (-191 ^ var_16);
                            arr_61 [i_7 - 1] [i_8] [i_16] [i_7 - 1] [i_19] = (((6450227035429045135 ^ 9223372036854775807) != 1));
                        }
                    }
                }
                var_42 *= (~var_9);
                var_43 = (75 && 214246280);
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 22;i_23 += 1)
                    {
                        {
                            var_44 = 0;
                            var_45 = ((var_3 >> (((arr_52 [i_7 + 4] [i_7 + 1] [i_7 + 1] [i_8] [i_23 - 1] [1]) - 188367975))));
                            var_46 = (((var_7 <= -9223372036854775786) ? (-127 - 1) : 1193549682807520062));
                            arr_70 [i_22] [i_8] [i_22] [i_8] [i_8] = (((31419 ? 1 : var_4)));
                        }
                    }
                }
            }
        }
        for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
        {
            var_47 += ((((((max(28604, 127)))) != 1023542690)) ? 1793 : ((2147483647 / ((24170 ? -2 : 0)))));
            var_48 = (((11342073126531333076 ? -var_4 : ((3356309425 ? var_18 : 2292400708)))));
            var_49 = (max(var_49, (!var_17)));
        }
        var_50 = var_8;
        arr_73 [17] = var_17;
    }
    #pragma endscop
}
