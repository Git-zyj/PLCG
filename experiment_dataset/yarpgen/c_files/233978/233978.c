/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (3200550758 != 0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, (((0 == (-2147483647 - 1))))));
                    arr_8 [i_0] [i_1 + 3] [i_0] [i_2] = (!var_8);
                    var_20 += (max((((~var_6) ? ((var_14 ? var_17 : (arr_7 [i_1 - 1] [i_1 - 1]))) : var_14)), ((28309 ? 0 : 3))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_3] [i_0] [i_3] = (((arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 1] [19]) || (arr_6 [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [11] [i_3] = (((((var_13 ? var_16 : var_2))) ? (((arr_9 [i_3] [i_4] [i_3]) ? var_0 : var_17)) : var_3));
                                var_21 = (((arr_7 [i_0] [i_0 - 1]) + (arr_7 [i_0] [i_0 + 4])));
                                var_22 -= (((arr_7 [i_0 + 2] [i_1 - 2]) % (arr_7 [i_0 + 3] [i_1 - 2])));
                                arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] = ((((var_14 ? (arr_7 [i_3] [i_5]) : (arr_6 [i_5] [i_4] [2] [i_0])))) ? var_5 : ((((arr_5 [i_3]) || var_16))));
                            }
                        }
                    }
                    var_23 = var_11;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_1] [i_1 - 1] = var_5;
                    arr_27 [i_0 + 4] [i_0 + 4] [13] = ((((var_17 ? ((~(arr_23 [i_0] [i_1] [i_6]))) : (arr_19 [i_1 - 2] [i_1 - 2] [i_1] [i_0] [i_1] [i_1]))) + var_0));
                    arr_28 [i_0] [i_0] [i_6] = ((((-(arr_7 [i_0 - 1] [i_1 - 1]))) * ((var_0 * (var_9 / var_17)))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_24 ^= ((~(arr_14 [i_0 + 3] [i_0 + 3] [i_1] [15] [i_0 + 3])));
                    var_25 = ((((var_7 && var_16) ? ((min(var_12, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_7])))) : var_4)));
                    var_26 = (max(var_26, (arr_12 [i_0 + 4] [i_0] [i_1 - 1])));
                    var_27 -= (+(((arr_2 [i_1 + 1]) ? (((min(var_8, (arr_5 [i_7]))))) : (((arr_30 [1] [2] [i_7]) % var_16)))));
                    arr_31 [8] [i_7] = ((((!(arr_14 [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_1 + 1]))) ? ((min((max(var_2, var_4)), (arr_29 [i_0] [i_0] [i_0 + 3])))) : (max((arr_0 [i_0]), (arr_24 [i_0])))));
                }
                var_28 = (arr_2 [i_0]);
                var_29 += ((~(min(((var_0 % (arr_17 [1] [i_1] [i_0 + 3] [i_0] [i_0]))), ((var_14 ? var_2 : var_7))))));

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_30 |= ((((58024 == -28) ? var_5 : var_15)));
                    arr_34 [i_1] = var_17;

                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_31 = (((max(37, 5263404539161765434)) & ((((arr_23 [i_8] [i_1 + 2] [i_0 + 3]) + (arr_7 [i_1 + 2] [i_0 + 3]))))));
                        arr_38 [i_1] = (!1448095634);
                        var_32 = (max(var_32, (var_4 / var_11)));
                        arr_39 [i_0 + 4] [i_0 + 4] [i_8] [i_9] = ((((((!(arr_33 [i_9] [i_8] [i_1] [i_0 - 2]))) ? var_8 : ((var_14 ? var_7 : var_2)))) ^ var_7));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0 + 1] = ((((max((arr_9 [16] [0] [i_8]), (arr_9 [i_0 + 2] [i_0 + 2] [i_10])))) ? -122 : ((var_2 + (arr_9 [i_0 + 3] [i_1 + 1] [i_8])))));
                        var_33 -= (((15 ? (-127 - 1) : -122)));
                    }
                    for (int i_11 = 4; i_11 < 20;i_11 += 1)
                    {
                        arr_48 [7] [i_1] = ((+((-(((-127 - 1) ^ (arr_36 [i_0] [i_0] [i_0] [i_0])))))));
                        var_34 = ((!(((~((max((arr_15 [i_0] [i_1] [i_8] [i_11 - 2] [i_11]), (arr_46 [i_0 + 2] [i_1] [i_1] [i_11])))))))));
                    }
                }
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_35 ^= var_16;
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] = ((var_16 ? var_5 : var_2));
                        arr_55 [i_0] [i_0] [i_1 - 2] [3] [i_12] [i_13] = (((arr_42 [i_0] [i_1 + 3] [i_12 + 1]) - var_4));
                    }
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        arr_58 [i_12] = var_6;
                        var_36 = var_7;
                        var_37 &= var_4;
                    }
                    arr_59 [i_0] [1] [i_12] = (~((max(var_7, (-127 - 1)))));
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_38 = (arr_25 [13]);
                    arr_62 [i_0] [i_1 + 2] [4] = ((-(((!var_3) ? ((var_15 ? var_11 : var_13)) : (arr_60 [i_1] [i_15])))));
                    var_39 &= (((((var_14 ? var_0 : var_5))) & (min(var_14, (((arr_45 [i_0] [i_0] [i_1] [11]) ? var_2 : (arr_46 [i_0] [i_1 + 3] [i_0] [i_15])))))));
                    var_40 = (max(var_40, (((var_17 ? (((!var_2) / (arr_23 [i_1] [i_1 - 1] [7]))) : (((var_7 << var_3) ? (var_6 >= var_0) : ((max(var_8, var_7))))))))));
                }
                var_41 = (((((arr_17 [i_0] [i_1 - 1] [i_1] [2] [i_1 + 1]) / (arr_17 [19] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_1 + 1]))) + (~24437)));
            }
        }
    }
    var_42 = var_5;
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            {
                                arr_76 [i_17] [i_17] [i_17] = min(var_1, (arr_41 [19] [i_19] [i_17] [i_16]));
                                var_43 *= (var_8 & var_0);
                            }
                        }
                    }
                    var_44 *= (arr_18 [i_16] [8] [i_17] [i_18] [i_16]);
                    var_45 = var_2;
                    var_46 = (((((arr_50 [i_17 - 3] [i_17 + 1] [i_17 + 1]) / var_16)) <= (((((max(var_5, var_7))) ? (arr_5 [i_16]) : (((arr_57 [i_17] [i_17] [i_16]) ? var_14 : var_10)))))));
                }
            }
        }
    }
    var_47 = (((var_12 >> (((~var_12) + 26)))));
    #pragma endscop
}
