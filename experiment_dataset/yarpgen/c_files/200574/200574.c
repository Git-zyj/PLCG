/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = ((~((-16 >> (29704 - 29687)))));
                arr_6 [i_0] [i_1] = ((((max((arr_2 [i_1]), var_10))) ? ((~(arr_2 [i_0]))) : (~var_7)));
            }
        }
    }
    var_15 = (((((var_8 ? var_3 : (((255 >> (var_8 - 32662))))))) ? ((max(var_2, var_5))) : 0));

    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 32740;

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_3] [i_3] [i_2] = ((-(((152 == ((-6710199280117152832 ? (arr_0 [i_2] [i_3]) : 18446744073709551593)))))));
            var_16 = (((((arr_0 [i_3] [i_3]) ? (arr_5 [i_2] [i_3] [i_3]) : var_4)) & (~var_7)));
        }

        for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_17 -= (max(((1 >> (((arr_0 [i_2] [i_2]) + 62042763748234385)))), (((((arr_0 [i_2] [i_4]) == (arr_13 [i_4])))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_18 = (min(var_18, ((max((arr_20 [i_2] [i_4 - 2] [i_5] [i_6]), (((var_9 <= 4294967295) + (((arr_5 [i_2] [i_2] [i_2]) ? 1546 : (arr_3 [i_5] [i_6]))))))))));
                        var_19 = ((!(var_6 - var_8)));
                        var_20 = (arr_2 [i_5]);
                        var_21 = (max(var_21, (((((((arr_5 [1] [7] [i_6]) || ((max(var_5, (arr_7 [i_6]))))))) >> (((((5889520258132688576 ? (arr_19 [i_2] [i_2] [i_2] [3]) : (arr_11 [i_2] [i_4]))) >= var_5))))))));
                    }
                }
            }

            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_22 = (max((((arr_4 [i_7 - 1]) / var_2)), 1756380094));
                arr_24 [i_2] [i_2] [i_4] [2] &= (-1 + var_7);
                var_23 = (max(var_23, (((((2211703304 ? (arr_22 [i_4 - 2] [i_4 - 3] [i_7 - 1] [i_7 - 1]) : 251)) - 131)))));
                var_24 = (min(var_24, ((((arr_3 [i_4] [i_4 - 1]) + ((12930 ? (arr_19 [i_7 - 1] [i_4] [i_4 - 1] [i_4 - 2]) : -1)))))));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_25 = ((max(((~(arr_1 [i_2]))), (((-9223372036854775807 - 1) ? 157 : var_6)))) + ((((((((arr_3 [i_2] [i_4 - 1]) ? var_12 : var_8))) && ((!(arr_26 [i_2] [i_8] [i_8] [i_2]))))))));
                var_26 = (min(var_26, ((max((102 / var_7), ((((max(205, -1)) >= 19680))))))));
                arr_28 [i_8] [i_8] = (max((((arr_16 [i_2] [i_4 - 2] [i_8]) ? 1572864 : -13)), 112));
            }
        }
        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_33 [i_2] [i_9] = ((+(max((19691 + var_10), (arr_27 [i_2] [i_2] [i_9 - 1] [i_9])))));
            arr_34 [6] [i_2] = (((((max(169, var_7)))) != 16032814615117013413));
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 11;i_12 += 1)
            {
                {
                    var_27 = (max(var_27, (arr_8 [i_11] [i_12])));
                    var_28 = ((!((max((((64512 * (arr_18 [i_10] [i_12 - 2])))), (arr_23 [i_10]))))));
                    var_29 -= (((((~(arr_15 [i_11])))) ? (arr_10 [i_10] [i_10] [i_10]) : (!var_4)));
                }
            }
        }
        var_30 = (arr_30 [i_10] [5]);
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_31 = (((((((arr_8 [i_13] [i_13]) ? var_8 : var_1)) / ((max((arr_3 [i_13] [i_13]), (arr_3 [i_13] [i_13])))))) * var_12));
        var_32 ^= (max(7680, 7690));

        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_33 ^= (((-9223372036854775807 - 1) || 57855));
            arr_50 [i_13] [i_13] [i_13] = ((~(((((var_6 ? 347425341 : 178))) ? (max((arr_3 [i_14] [5]), var_0)) : (((var_1 ? -1164550370 : (arr_4 [i_14]))))))));
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_34 ^= 65535;
            arr_53 [i_15] [i_15] = ((((51650 - (((-25091 ? (arr_43 [i_13] [i_13]) : 1661)))))) || (var_3 | 45846));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_35 -= ((4489027968703335043 | (8709224006848537125 << 0)));
                var_36 = 27542;
            }
        }
        for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 10;i_19 += 1)
                {
                    {
                        arr_62 [i_13] [i_13] = (max(((-((var_6 ? var_4 : (arr_36 [i_19 + 1] [i_13]))))), ((-(arr_36 [i_18] [i_19 - 1])))));
                        var_37 = (((~14821) | 7));
                        var_38 = (max(var_38, ((max(((((-108 - 214) / var_4))), ((1 ? (var_6 / 39) : (max(-2, var_0)))))))));
                        var_39 += 9223372036854775807;
                    }
                }
            }

            for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
            {
                arr_65 [i_13] [i_17] &= (max((arr_30 [i_17] [i_20]), ((1842458387 ? (arr_52 [i_17]) : (arr_52 [i_13])))));
                var_40 = ((!(((var_10 - (arr_17 [i_17] [i_17] [i_20] [i_13]))))));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
            {
                var_41 ^= 8241552583890421408;
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 11;i_23 += 1)
                    {
                        {
                            var_42 -= (((arr_52 [i_21]) ? (arr_23 [i_17]) : 4294967295));
                            var_43 = (min(var_43, (arr_40 [i_23 - 1])));
                            var_44 = ((var_6 <= (arr_56 [i_13] [i_21] [i_21])));
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 12;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        {
                            var_45 = 112;
                            var_46 += (((((arr_40 [i_26]) || (arr_40 [i_13]))) ? (((arr_40 [i_13]) * (arr_40 [i_24]))) : (((arr_40 [i_13]) ? (arr_40 [i_13]) : (arr_40 [i_26])))));
                            var_47 -= (!var_10);
                        }
                    }
                }
                arr_83 [i_17] [i_17] = (var_6 ^ (max((-9223372036854775807 - 1), 3989258643)));
            }
            for (int i_27 = 0; i_27 < 12;i_27 += 1) /* same iter space */
            {
                var_48 = (~65533);
                var_49 += (max(var_12, ((((arr_4 [i_27]) >= (arr_56 [i_13] [i_17] [i_27]))))));
                var_50 = ((((1 >> (var_8 - 32659))) - (((((1 << (arr_78 [i_13]))) <= ((((arr_73 [i_13] [i_13]) || (arr_46 [i_17])))))))));
            }
        }
        var_51 = ((12079302544918698519 >> (18 || 11)));
    }
    #pragma endscop
}
