/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_12 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(((((arr_11 [i_0] [8] [i_0] [i_0] [3]) >= (arr_8 [i_1] [i_2] [i_2] [i_4])))), (min((arr_0 [i_3]), (arr_1 [i_0])))))) ? (((max(0, 26700)))) : ((~((var_3 / (arr_8 [i_0] [i_0] [i_0 - 2] [i_0 + 1])))))));
                                var_14 = (arr_11 [i_0 - 2] [i_1 - 1] [i_2] [i_0] [i_1 + 2]);
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_3] &= (((((4104482217 ? 190485078 : -104))) ? ((+(((arr_0 [i_0]) ? (arr_2 [i_0 + 2]) : var_4)))) : (arr_5 [i_4] [i_3] [i_2] [i_0 - 1])));
                            }
                            arr_14 [i_0] [i_1 - 2] [i_2] [i_3] = ((190485079 ? 127 : 4104482217));
                            var_15 = ((((var_10 / (var_6 * var_2))) * ((((arr_5 [3] [i_1] [i_2] [i_2]) ? (arr_6 [i_3]) : (arr_1 [i_0]))))));
                            var_16 = (min(var_16, 4104482216));
                            arr_15 [4] [i_1] [i_1] [i_1 + 1] [i_1] [4] = (min(((min((var_1 > var_4), (var_13 > var_8)))), ((0 ? 104 : 0))));
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_1 - 1] = ((((min(var_1, 1))) ? 28672 : var_5));
                var_17 -= (max(6, ((((((arr_11 [i_0 + 1] [i_0] [i_1 - 1] [1] [i_1 - 3]) ? 4294967289 : var_1)) ^ ((((arr_2 [i_0]) << (var_12 - 15)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_18 = (~0);
                    var_19 = (arr_17 [i_7]);
                    var_20 = ((((min((min((arr_20 [i_7]), (arr_20 [i_5]))), (var_5 & var_6)))) ? var_0 : var_0));
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    {
                        var_21 += (((arr_17 [i_9]) ? (arr_17 [i_9]) : var_8));
                        arr_36 [i_8] [i_8] [i_11] = (min((((16 ? 1 : 4104482216))), (~-4093991063914029426)));

                        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            arr_40 [6] [14] [6] [i_11] [i_8] = (((arr_33 [1] [i_9] [i_10 + 2] [i_11 - 1] [20]) ^ (max((arr_30 [i_11 - 1]), (((arr_29 [i_10]) ? (arr_33 [i_12] [i_11 - 1] [i_10 + 1] [i_9] [i_8]) : var_7))))));
                            var_22 = (max(var_22, (arr_29 [i_8])));
                            arr_41 [i_8] [i_11] [i_10] [22] [i_9] [i_8] = ((var_1 ? ((((arr_27 [i_10 + 3] [i_8]) ? var_2 : 190485079))) : (((arr_38 [i_11 - 1]) / (arr_30 [i_10])))));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            arr_44 [i_8] [i_9] [i_10] [i_8] [i_11] [i_11] [i_13] = (arr_42 [i_8 - 1] [i_8 - 1] [i_10 + 3] [i_11] [i_11] [i_11] [i_11]);
                            arr_45 [i_8] [i_8] [i_11] [i_10] [i_9] [i_8] [i_8 + 1] = (((-32767 - 1) + 38));
                            var_23 = var_13;
                            var_24 *= 9223372036854775807;
                        }
                        for (int i_14 = 1; i_14 < 20;i_14 += 1)
                        {
                            var_25 = (arr_22 [i_8] [i_8] [i_10] [i_11 - 1]);
                            arr_49 [i_8] [i_8] [i_11 - 1] [i_14] = var_13;
                            var_26 = ((var_5 <= (((max(0, 6925461454674660509))))));
                            var_27 = (arr_37 [i_14]);
                        }
                        for (int i_15 = 2; i_15 < 21;i_15 += 1)
                        {
                            arr_52 [6] [i_11 - 1] [i_8] [i_11 - 1] [i_11] = (((-60 ? ((9223372036852678656 ? 0 : 9223372036854775807)) : -63)));
                            var_28 = ((((max(8992843251110807313, -17))) ? (((~1) ? var_6 : var_2)) : (arr_42 [i_8] [i_8] [i_8] [i_8 + 1] [16] [i_8 + 2] [i_8 + 1])));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                {
                    var_29 -= (min((arr_46 [i_8] [i_8] [18] [i_8]), (((!(((var_4 ? var_11 : var_4))))))));
                    arr_59 [i_8] [i_16] [i_8] = (arr_56 [i_8 + 1] [i_8] [i_16] [i_17 + 1]);
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 21;i_18 += 1) /* same iter space */
    {
        var_30 ^= var_9;
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 22;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            {
                                arr_72 [i_18] [i_19] [i_20] [i_21] [i_18] [i_21] = (arr_67 [i_19] [i_21] [1] [i_19] [i_18]);
                                var_31 = var_7;
                                arr_73 [i_18] = ((60 ? 1 : 190485080));
                            }
                        }
                    }
                    var_32 = (min(60, var_4));
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 22;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 23;i_24 += 1)
                        {
                            {
                                var_33 -= ((var_4 ? var_4 : (arr_56 [i_23 - 2] [i_23 - 2] [i_19] [i_19])));
                                var_34 = (arr_43 [i_24]);
                            }
                        }
                    }
                    var_35 -= (~var_7);
                    arr_80 [i_18] [i_18] [i_18] = 0;
                }
            }
        }
    }
    var_36 = var_10;
    #pragma endscop
}
