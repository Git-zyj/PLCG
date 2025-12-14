/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (var_11 ? var_6 : ((7544425887319966066 ? ((8191 ? 9223372036854775787 : 3489469008479208840)) : 15)));
    var_17 = (((min(var_11, var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
                {
                    var_18 = (arr_2 [i_2 - 1] [i_1 + 1]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_1] = ((arr_9 [i_2] [i_2] [i_2]) ? ((var_8 ? var_3 : var_11)) : (~var_1));
                        arr_12 [i_1] [i_0] [i_1] [i_2] [i_3] = -7544425887319966066;
                        var_19 = (arr_6 [8] [i_2] [i_0] [i_3]);
                        var_20 = (((((var_12 ? var_0 : var_3))) ? (((((arr_8 [i_0] [2] [i_1 - 1] [i_2] [i_1 - 1]) < var_4)))) : ((var_15 ? var_8 : (arr_5 [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] = (-((var_11 ? (arr_5 [i_1]) : -9223372036854775788)));
                        arr_16 [i_4] [i_1] [i_1 - 1] [i_1] [i_0] = (arr_9 [i_0] [i_2] [0]);
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_21 = (min(var_21, var_14));
                        arr_19 [i_0] [i_0] [i_0] [i_1] = ((-(arr_8 [i_1 + 1] [i_2 + 2] [i_5 + 1] [i_5] [i_5 + 1])));
                        var_22 = (max(var_22, var_11));
                        var_23 += (((((var_9 ? 3461217903465739187 : var_9))) ? -275866989774436284 : 15294546950358384913));
                    }
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_24 = var_5;
                    var_25 = (max(var_25, -6));
                    arr_22 [i_1] = var_7;
                    var_26 += (!16837612295495917490);
                    arr_23 [i_1] [i_1 + 1] [i_6 + 1] = var_11;
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    var_27 = (min(var_27, ((~(arr_10 [i_7] [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_7])))));
                    arr_27 [i_1] = ((var_5 | -9223372036854775796) ? (arr_1 [i_1 - 1]) : (((arr_2 [i_0] [i_1]) ? 9223372036854775797 : var_6)));
                    arr_28 [i_1] = ((63 ? ((var_9 ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]) : var_13)) : 0));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_28 += var_6;
                        var_29 = (max(var_29, 5648726800735277354));
                        arr_34 [i_0] [i_0] [i_1] [i_8] [i_8] [i_1] = ((-9223372036854775807 - 1) ? var_6 : (~var_0));
                        var_30 = ((var_5 ? ((((arr_31 [i_0] [i_1] [8] [i_8] [i_8] [i_9]) ? 0 : -6440980238694641744))) : ((var_3 ? var_9 : (arr_3 [i_9] [6])))));
                        var_31 |= ((((var_2 ? var_4 : var_7))) ? var_15 : var_2);
                    }
                    var_32 = arr_18 [i_8] [i_1] [i_8];
                    var_33 |= (((((arr_14 [i_0] [i_1] [i_8]) ? 784072251283164260 : 9168513598691337364))) ? var_11 : (-9223372036854775807 - 1));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 6;i_12 += 1)
                        {
                            {
                                arr_43 [i_11] [i_11] [i_1] [i_11] = var_5;
                                var_34 = var_5;
                                arr_44 [i_1] [i_0] [i_10] [7] [i_1] = (((((-(((arr_35 [i_0] [i_1] [i_10]) | var_7))))) ? var_2 : (((((var_7 ? var_14 : (arr_26 [0] [i_1] [i_10] [i_11])))) ? (((arr_21 [i_1] [i_12 + 2]) ? var_10 : (arr_14 [i_0] [i_1 + 1] [i_1 + 1]))) : (arr_5 [i_1])))));
                                var_35 = (~((-357813775483094908 ? -9223372036854775802 : -8811434347552863366)));
                                arr_45 [i_0] [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] = ((-31397 ? var_10 : ((var_13 ? var_7 : (arr_40 [i_0] [i_1 + 1] [i_0] [i_12] [i_1 - 1])))));
                            }
                        }
                    }
                }
                arr_46 [i_1] [i_1 + 1] = ((((arr_8 [i_0] [i_0] [2] [i_0] [i_0]) == (arr_0 [i_0]))));
            }
        }
    }
    #pragma endscop
}
