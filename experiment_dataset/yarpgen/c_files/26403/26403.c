/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 += (((((min(var_4, var_7)) + (((var_3 & (arr_5 [i_1] [i_1 - 3] [i_1])))))) << ((((max(32763, var_9))) - 32751))));
                arr_6 [i_0] [i_0] [i_0] |= ((((-((max(var_9, var_11))))) >= ((min(239, 13)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_3] = 32764;
                            var_14 *= (min((arr_17 [1] [i_4 + 1] [i_4 + 1] [0] [i_4]), (arr_4 [1] [1])));
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_15 = ((~((~(min(4294967282, var_0))))));
                    arr_23 [i_3] [i_3] [i_2] = (((arr_8 [i_2 + 1] [i_6 - 1]) * (((((min(var_12, (arr_7 [i_2])))) == (max(35, 9223372036854775804)))))));
                    var_16 = (max(((32760 - (arr_10 [i_3] [i_3] [i_3]))), ((max((arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 1] [0]), (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    var_17 += 32;

                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_18 |= (arr_21 [i_2] [i_3] [i_6 - 1] [1]);
                        var_19 = (min(var_19, ((((!-2139493391) ? 107 : ((max(-115, 38))))))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_20 = (max(var_20, ((max(((max((arr_22 [i_6] [4]), (arr_28 [i_2] [i_3] [i_8])))), (min((min((arr_3 [i_2] [8]), (arr_7 [i_6 - 2]))), ((((arr_4 [i_8] [i_8]) == var_6))))))))));
                        var_21 = var_12;
                        var_22 = (max((7 > 99), (max(var_10, (arr_15 [i_3] [i_3] [i_2 - 1])))));
                        arr_29 [i_3] [i_3] [i_6] [i_3] [i_6] [6] = 121;
                        var_23 = (min(var_23, (0 && 123)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_24 &= (((arr_16 [4] [i_2 - 1] [i_6 - 1]) ? var_12 : (arr_16 [4] [i_2 - 1] [4])));
                        var_25 -= (arr_28 [i_2 - 1] [i_2 + 1] [i_9]);
                        var_26 *= (arr_11 [i_9] [i_2 + 1]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_27 |= (min(var_8, ((((var_7 | var_0) == var_0)))));
                        var_28 -= ((((((arr_35 [i_2 + 1]) ? var_2 : -1008210061))) + (min(-9574, (arr_34 [i_6])))));
                    }
                }
                for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_40 [i_2] [i_2] [5] [i_3] = ((246 ? -9584 : 32742));
                    var_29 = (min((-127 - 1), 91));
                    arr_41 [i_2] [i_3] [i_11 - 1] = ((((max((arr_38 [i_2 - 1]), (arr_21 [i_11 - 1] [i_11] [i_11 - 1] [i_2 + 1])))) - ((1 << (32755 - 32753)))));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_30 = (2644644926 < 233);
                    arr_44 [8] |= 114;
                    var_31 = (max((((arr_9 [i_12] [i_3] [i_2]) < (!var_4))), (!18446744073709551612)));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_32 = (min(var_32, (32735 <= var_7)));
                    var_33 = (max(var_33, (((arr_12 [i_2 - 1] [11] [i_13] [i_13]) % -32760))));
                    var_34 = ((-(arr_4 [i_3] [1])));
                    var_35 = arr_33 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_13] [11] [i_2];
                    var_36 = var_6;
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {
                        {
                            var_37 = (min(((((max((arr_46 [i_3] [i_15] [i_3] [i_15]), (arr_1 [i_2] [2]))) % (((max(var_10, 24999))))))), (((max(18446744073709551599, -15915)) << (18446744073709551588 - 18446744073709551585)))));
                            arr_53 [i_2] [i_3] [0] [i_3] [i_3] = (min((((((arr_5 [i_15] [i_3] [i_14 + 1]) ? (arr_10 [i_15] [i_3] [i_2]) : var_0)) ^ (((max(200, 9971)))))), ((-(min(63190, -9223372036854775804))))));
                            var_38 &= (arr_33 [i_2] [6] [i_2 - 1] [6] [i_2 + 1] [i_2]);

                            for (int i_16 = 0; i_16 < 12;i_16 += 1)
                            {
                                arr_56 [i_2] [i_2] [i_2] [i_14] [i_14] [i_3] [i_16] = var_6;
                                var_39 = ((max(var_11, (arr_49 [i_15 - 2] [i_14] [i_14 - 1] [i_2 + 1]))));
                                var_40 = (max(((((arr_34 [i_3]) > var_6))), ((-(arr_15 [i_3] [i_3] [i_14 + 1])))));
                                arr_57 [i_16] [11] [i_3] [i_3] [i_3] [i_2 - 1] = (max((arr_5 [i_2 + 1] [i_3] [7]), var_5));
                            }
                        }
                    }
                }
                var_41 = ((((1 ? -3313 : -90)) <= ((max(116, -32759)))));
            }
        }
    }
    #pragma endscop
}
