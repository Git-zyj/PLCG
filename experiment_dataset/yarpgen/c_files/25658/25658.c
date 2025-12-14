/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 ^= ((((arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 3]) ? (((arr_2 [i_0]) ? 13811 : var_5)) : var_5)));
                                var_18 = (max(var_14, ((var_5 ? var_10 : (var_8 & 16383)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [i_1] [i_2] = (max((arr_0 [i_1] [i_1]), ((-1 ? var_2 : ((var_14 + (arr_0 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] = ((((((arr_16 [i_1 - 1] [i_2] [i_5 - 1]) - 49075))) ? (arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1]) : var_11));
                                arr_20 [i_2] [i_2] [i_1] [i_5 + 1] [i_6] [i_1] = ((10767 ? (min(((var_7 ? var_5 : var_6)), var_13)) : ((max((arr_2 [i_5]), var_11)))));
                                var_19 = (max(1, (((var_14 - var_6) - var_9))));
                                var_20 |= (min((((((var_11 - (-2147483647 - 1))) | var_12))), -var_0));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_21 = var_5;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = (((var_13 ^ var_5) | -var_12));
                                arr_29 [i_1] [i_1 + 1] [i_7] [i_7] [i_9] = (((var_10 ? var_8 : -977582395124689593)) * (var_15 != 49087));
                                var_22 = (!24202);
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_25 [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_1] [i_1] [i_1] = (((((var_5 ? 65535 : var_8))) + -578115573534653701));

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_23 = ((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_1]) ? 87 : var_14))) ? ((var_2 ? var_7 : var_6)) : var_5));
                        arr_38 [i_1] [i_1] [i_10] [i_0] = var_11;
                    }
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        var_24 += (arr_5 [i_0] [i_1]);
                        arr_41 [0] [i_1] [i_1] [i_1 - 3] |= var_0;
                        var_25 = (((((var_9 ? var_4 : var_14))) ? ((var_10 ? 8923 : var_6)) : (arr_23 [i_0] [i_1])));
                        var_26 = (max(var_26, (arr_27 [i_1 - 3] [i_1 - 2])));
                    }
                }

                for (int i_13 = 1; i_13 < 8;i_13 += 1)
                {
                    var_27 = (max((((((arr_15 [i_0]) ? var_8 : var_0)))), (min(((var_6 ? var_2 : 1115992605)), (~0)))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_28 = ((-((6078277372131108542 ? -24201 : -14))));
                        var_29 = ((((-32764 ? 89 : 1)) > (arr_45 [i_0])));
                    }
                    var_30 = (min(var_30, var_12));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            {
                                arr_53 [i_0] [i_0] [i_1] [i_0] [i_0] = var_3;
                                arr_54 [i_1] [i_1] [i_15] [i_15] [i_16] = (((((var_15 > 62288) || var_6))) > ((min(87, 77))));
                            }
                        }
                    }
                }
                var_31 += (min((arr_40 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 1]), ((-(arr_40 [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 1])))));

                for (int i_17 = 2; i_17 < 9;i_17 += 1)
                {
                    arr_59 [i_0] [i_1] [i_1] [i_0] = (min((((arr_12 [i_0] [i_1] [i_1 - 3]) ? (arr_3 [i_0]) : var_10)), var_0));
                    arr_60 [i_0] [i_1] = (min((((!((min(var_3, var_11)))))), ((var_11 + (arr_24 [i_1 + 1] [i_17 + 2])))));
                    arr_61 [i_1] [i_0] [i_17] = ((((var_14 - (~var_7)))) ? (((arr_40 [i_0] [i_0] [i_0] [i_0]) ? ((75 ? var_7 : (arr_0 [i_17] [i_1]))) : 9223372036854775807)) : (((max((!32743), (-32767 - 1))))));
                }
                for (int i_18 = 1; i_18 < 8;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 11;i_20 += 1)
                        {
                            {
                                var_32 &= (((var_8 * 32759) | (((-76 > -19928) ? -32756 : var_3))));
                                arr_69 [i_1] [i_1] [i_1 + 1] = ((((((var_6 ? var_2 : var_3)))) ? ((6003313934792372632 ? 0 : 9223372036854775807)) : var_1));
                            }
                        }
                    }
                    arr_70 [i_1] = var_11;
                }
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    arr_74 [i_1] [i_1 + 1] [i_1] = ((((max(42886, 121))) ? (arr_4 [i_1 - 3] [i_1]) : (max(-var_2, ((var_1 ? 1 : var_14))))));
                    arr_75 [i_1] = (max(((((min(23509, 0))) ? 4294967295 : 180)), (((!((max((arr_47 [i_21] [i_21] [i_21] [i_21] [i_21] [i_1]), var_6))))))));
                }
            }
        }
    }
    var_33 = var_4;
    #pragma endscop
}
