/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((var_14 & (((arr_4 [i_1 + 3]) ? (5 && 0) : (arr_0 [14] [i_1])))));
                var_19 = ((5 ? (5 + 31) : (((arr_5 [i_0] [i_0] [i_1 - 2]) ? 31 : (arr_5 [i_0] [i_0] [i_1 - 1])))));
                var_20 = ((!((((((25 ? (-127 - 1) : 76))) ? -var_10 : ((min(83, -24))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [7] [i_3] [10] [9] = ((-86 ? (-127 - 1) : 28));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_4] [0] [i_6] [0] [i_6] &= 0;
                                arr_22 [11] [12] [i_3] [i_3] [i_2] [13] = (arr_2 [i_4] [i_4] [11]);
                            }
                        }
                    }
                    arr_23 [i_4] [i_3] [i_3] [11] = ((((((~var_14) ? -90 : ((var_1 & (arr_4 [i_2])))))) ? (((arr_7 [i_2]) ? var_13 : (~var_13))) : var_8));
                    arr_24 [i_4] [i_3] [i_3] [11] = var_15;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_28 [i_2] [1] [i_2] [i_3] = 43;

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_21 = (min(var_21, (((var_12 ? (arr_18 [5] [i_3] [3] [i_3] [i_3]) : (arr_25 [i_8]))))));

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_33 [1] [i_3] [i_7] [i_8] [i_3] = (arr_27 [i_3]);
                            arr_34 [i_8] [i_3] [i_7] [8] [i_9] [8] = (((-9 + 2147483647) >> (-16 + 35)));
                            var_22 += (!57);
                            arr_35 [i_9] [i_3] [4] [i_3] [i_2] = ((0 * (arr_10 [i_8] [i_3] [i_2 - 1])));
                            arr_36 [i_3] [i_3] [0] [i_3] [i_3] = (((arr_2 [i_2 - 1] [i_2 + 1] [i_2 + 3]) <= (arr_27 [i_3])));
                        }
                        for (int i_10 = 4; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_23 *= 77;
                            arr_41 [i_2] [i_3] [i_2] [i_2] [6] [i_2] = 96;
                            var_24 += ((!(arr_19 [i_2 + 1] [i_7] [i_10 - 2])));
                        }
                        for (int i_11 = 4; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            arr_45 [i_11] [i_3] [i_3] [i_3] = var_1;
                            arr_46 [i_2] [i_3] [i_3] [i_7] [i_3] [i_8] [i_11] = (((arr_25 [i_2 + 1]) >= -var_6));
                            arr_47 [i_3] [i_3] = arr_32 [i_2] [7] [i_7] [i_8] [6] [i_8];
                            var_25 = arr_40 [2] [i_11 + 1] [6] [2] [i_11] [i_11];
                        }
                        arr_48 [i_3] = var_9;
                    }

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_26 ^= 7;
                        var_27 &= ((var_12 & (arr_44 [i_3] [0] [2] [i_3] [4] [i_12])));
                        var_28 = (arr_30 [i_12] [i_7] [i_3] [i_2 + 3]);
                    }
                    for (int i_13 = 3; i_13 < 13;i_13 += 1)
                    {
                        var_29 = (((arr_10 [i_2] [i_3] [i_2]) ? (var_17 ^ 3) : -65));
                        arr_53 [i_13] [i_3] [10] [i_3] [i_2] = (17 - -21);
                    }
                    var_30 = (max(var_30, (arr_30 [i_2] [i_2] [i_2] [i_2 + 1])));
                    arr_54 [3] [0] [i_3] [i_2] = (((var_14 + 2147483647) << (var_0 - 108)));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    arr_58 [i_14] [i_2] [i_3] [i_3] = ((((!(arr_40 [i_2] [i_2 + 1] [7] [i_2] [i_2] [i_2]))) ? ((min((arr_40 [3] [i_2 - 1] [i_2] [i_2] [6] [i_2]), (arr_40 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_2])))) : ((~(arr_40 [i_2] [i_2 - 1] [i_2] [i_2] [10] [i_2])))));
                    arr_59 [i_3] [i_3] = (min((((arr_17 [i_2 + 1] [i_3] [i_3] [i_2 + 3]) / (arr_49 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 1]))), (((var_15 <= (arr_49 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 - 1]))))));
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                {
                    var_31 = -71;
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 10;i_17 += 1)
                        {
                            {
                                arr_66 [i_2] [i_3] [0] [i_2] [9] = -72;
                                arr_67 [i_2] [1] [i_15] [i_16] [i_3] [i_2] = ((((-(arr_25 [i_2 + 1]))) <= ((max(var_1, (max((arr_42 [i_16] [i_3] [2] [i_16] [i_16]), (arr_40 [i_17] [i_3] [i_2] [i_16] [2] [3]))))))));
                            }
                        }
                    }
                }
                arr_68 [i_3] = ((-102 ? (-127 - 1) : 0));
                var_32 ^= (((((arr_56 [0] [i_3]) <= 113)) ? -76 : 102));
                arr_69 [i_2] [4] [i_3] = (((((var_1 ? (arr_4 [i_3]) : (((arr_55 [i_2]) ? 102 : (arr_50 [1] [8] [i_2] [i_3])))))) ? (((arr_14 [i_3]) & ((var_8 ? (arr_30 [i_2] [i_2] [i_2] [i_2]) : (arr_63 [2] [i_3] [i_2] [i_2] [i_2]))))) : ((((var_17 ? 96 : -89)) - ((0 ? 86 : -114))))));
            }
        }
    }
    var_33 = (((102 && -74) != (var_8 + var_15)));
    #pragma endscop
}
