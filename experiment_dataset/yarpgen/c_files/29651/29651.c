/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 ^= (arr_3 [i_0 - 3] [0]);

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = var_8;
                    arr_9 [i_1] [i_1] = (arr_6 [i_0] [i_0] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] = (103 % 4294967289);
                        arr_13 [i_1] = (((arr_5 [i_0 + 2]) ? (arr_11 [19] [19] [19] [19] [19] [19]) : (arr_11 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] [i_0])));
                        arr_14 [i_0] [i_0] [i_2] [i_1] = (((arr_2 [i_1] [i_3]) || 111));
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_17 [i_1] [i_1] [i_1] = ((((-(arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0]))) >= (arr_1 [i_0])));
                    arr_18 [i_0 + 1] [i_0 + 1] [i_1] [i_4] = (((arr_10 [i_0]) < (arr_4 [i_1] [21])));
                }

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    var_21 = (max(var_21, var_4));
                    var_22 ^= 88;
                }
            }
        }
    }
    var_23 = var_16;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_24 = (((arr_10 [i_7]) && (arr_7 [i_6 + 3] [i_7] [i_6] [i_6 + 3])));

                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    arr_32 [i_6] [i_7] [i_6] = ((var_1 <= ((((-(arr_3 [i_6] [i_6]))) ^ var_7))));
                    arr_33 [i_6] [i_6] [i_8] [i_7] = ((((((arr_7 [i_6] [5] [5] [i_6]) < -var_2))) == (18446744073709551601 < 100)));
                    var_25 = (((arr_31 [i_6 + 3] [i_6 + 3] [i_6]) & (arr_3 [i_6] [i_6])));
                    arr_34 [i_8] [i_7] [i_6] &= ((!((((arr_28 [i_7] [i_7]) << (((arr_21 [i_6] [i_6] [i_6]) - 18231478328354499922)))))));
                    var_26 = (((arr_30 [i_6] [i_7] [1]) <= (arr_11 [i_6] [i_6] [i_7] [i_7] [i_7] [17])));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        var_27 = (min(var_27, (arr_30 [i_6 + 4] [i_6 + 4] [i_9])));
                        arr_41 [i_6] [i_6] [i_6] [i_6] = (arr_2 [i_6 + 2] [i_6 + 2]);
                        var_28 = (arr_35 [i_6] [i_6] [i_6] [i_10]);
                        var_29 = (min(var_29, var_0));
                    }
                    arr_42 [i_6] [i_6] = var_14;
                }
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_30 = (((arr_0 [i_6] [i_6]) == ((var_14 % (arr_48 [i_6])))));
                                var_31 = 178;
                            }
                        }
                    }
                    var_32 = -108;
                    var_33 += (arr_19 [i_11 - 1] [i_11 - 1] [i_11 - 1]);
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_34 = (((var_9 ? (arr_1 [i_6 + 1]) : (arr_44 [i_6 - 1]))));
                    var_35 *= ((((((-8032323786226162027 ? -1483151267 : 4294967295))) | (arr_21 [i_6] [i_7] [i_14]))));

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_36 = (((~94) | (arr_16 [i_15] [i_14] [i_7] [i_6])));
                        arr_55 [i_6] = (arr_50 [i_6] [i_6] [i_6] [i_6]);
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        var_37 = (((((arr_11 [i_6 + 2] [i_7] [i_7] [i_14] [i_14] [i_16]) != (arr_37 [i_6 + 3] [i_7] [i_7]))) ? ((((((arr_40 [i_6] [0]) % 1)) == (arr_5 [i_6 + 1])))) : 1));
                        arr_59 [i_6] [i_6] = (((((244 ? (((var_5 <= (arr_53 [i_6] [i_6] [i_6])))) : (arr_2 [i_14] [i_7])))) >= (arr_58 [i_6] [i_7] [i_6])));
                        var_38 = (min(var_38, 16368));
                        arr_60 [i_6] [i_6] = (((arr_1 [11]) - (((((arr_44 [i_6]) && (arr_2 [i_6] [16])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_39 = (min(var_39, (arr_47 [i_6] [i_7] [i_14] [i_14] [i_14])));
                                arr_65 [i_6] [i_7] [i_14] [i_17] [i_18] |= ((-((((arr_8 [0] [0] [i_14] [0]) || 16048468941239461720)))));
                                arr_66 [i_6] [i_7] [i_6] [i_17] [i_18] = (arr_35 [i_6] [i_7] [i_6] [i_18]);
                                var_40 = (max(var_40, (arr_31 [i_6 + 2] [i_7] [i_14])));
                                var_41 = ((((((((~(arr_51 [i_6] [i_6] [i_17])))) ? (arr_37 [i_6] [i_7] [i_6]) : ((31513 >> (var_1 - 47)))))) ? ((~(arr_15 [i_6]))) : var_14));
                            }
                        }
                    }

                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        var_42 = (((1 & -80584526) << (var_1 - 19)));
                        var_43 = (arr_54 [i_6] [i_7] [i_14] [i_6]);
                        var_44 |= ((-((((arr_22 [i_14]) && (arr_8 [i_14] [i_7] [i_19] [i_19]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
