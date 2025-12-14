/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((255 ? (((((!var_15) <= var_5)))) : var_18));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = var_10;
                            arr_11 [i_0] [i_0] [i_2] [i_2] [11] [i_2] [i_2] = ((+((max((var_12 && var_12), (!var_2))))));
                            arr_12 [i_0] [8] [i_4] = (min((((((min(var_4, var_4))) <= ((min(var_4, var_6)))))), (max(3106749712840001802, (((var_3 ? 127 : -31)))))));
                            var_21 = (max((42989 != 1), (arr_4 [i_0] [i_1 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_3] [i_1 - 3] [i_2] [i_5] [i_0] = 15256;
                            arr_18 [1] [i_1] [i_0] [i_3] [i_5] = (arr_15 [i_0] [i_1 - 3] [i_0 + 1] [i_3] [i_5] [i_1 - 1]);
                        }

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_22 = (min(var_22, (!55)));
                            var_23 &= ((((1 ? -32765 : -3735536060068939757))));
                            var_24 = max((((-(((arr_14 [i_0] [i_2] [i_2] [i_3] [i_6] [i_2]) ? var_7 : (arr_0 [i_0] [i_3])))))), (max(-0, 3106749712840001802)));
                        }

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_2] [i_2] [i_0] [i_2] [i_2] [0] [8] = (((var_6 < var_11) ? (~0) : ((var_7 ? var_3 : var_1))));
                            var_25 = var_16;
                            var_26 -= (((arr_9 [i_7 + 2] [i_1 + 1] [i_0 - 1] [i_7 - 2] [2] [12]) ? var_2 : (arr_9 [i_0] [i_1 - 3] [i_0 + 1] [i_7 - 2] [i_7 + 2] [4])));
                        }
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            var_27 = ((((((~-31) ? var_0 : (max(-948822918, -1694277554417417871))))) ? (max(((max(-32765, 0))), (1 ^ var_2))) : ((max((-1 * 3104186298), 22)))));
                            arr_27 [i_3] [i_8] [i_0] [i_3] [i_8 - 1] = (min((((!(~48680)))), ((((-25816 ? 9244 : 65535)) - var_2))));
                            arr_28 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (arr_26 [i_0] [i_1] [10] [i_3] [i_8]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_28 = (~var_3);
                            var_29 = (max(var_29, (((var_6 ? var_9 : (arr_10 [i_0 + 1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1 - 2] [i_1 - 2]))))));
                            var_30 = var_1;
                            arr_32 [i_0] [5] [i_2] [i_0] [8] = (((~(arr_14 [i_0] [3] [i_2] [i_1] [i_0] [i_0]))));
                            var_31 = (!(((var_0 ? 1568665637250482238 : 1501415263))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_32 *= min(var_4, (((var_13 ? var_9 : var_7))));
                            var_33 *= var_9;
                        }
                    }
                }
            }
        }
        var_34 = ((!(((~((var_0 ? var_15 : (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_11 = 4; i_11 < 24;i_11 += 1)
    {
        var_35 ^= -7169563276530536601;
        arr_38 [i_11] [i_11 - 1] |= (((((-(((arr_37 [i_11] [i_11]) ? (arr_36 [i_11]) : 10))))) ? (~var_8) : (1059805613 / var_17)));
        arr_39 [i_11] = (max((((1190781007 - var_9) ? (var_6 != var_3) : (max(var_15, var_13)))), ((((max(32764, var_3)))))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 9;i_15 += 1)
                {
                    {
                        var_36 = (min(var_36, (arr_10 [14] [i_15 + 1] [i_14 + 2] [7] [i_12 + 2] [i_12 + 1] [i_12])));

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_37 &= (arr_1 [i_15 - 2]);
                            var_38 = (~var_11);
                            var_39 = ((((arr_30 [9] [i_14] [9]) - var_5)));
                            var_40 += -3106749712840001802;
                            arr_53 [i_13] [i_13] [1] [1] [i_16] = ((var_10 ? (((var_3 - (arr_30 [1] [3] [i_16])))) : var_17));
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            var_41 = (min(var_41, ((-((var_2 ? var_3 : var_14))))));
                            var_42 = (min(var_42, -1));
                            var_43 &= 1235466407;
                            var_44 |= ((1 ? (arr_44 [i_15 + 1] [i_14 + 1] [i_12 + 2]) : var_2));
                        }
                        for (int i_18 = 2; i_18 < 10;i_18 += 1)
                        {
                            arr_61 [i_12] [i_13] [i_12] [i_12] [i_15 + 2] [i_13] = (((arr_49 [i_12] [i_13] [i_15] [i_15 + 1]) && (((var_8 ? -6771850191504852897 : (arr_8 [10] [10]))))));
                            var_45 = (var_17 <= var_14);
                        }
                        var_46 ^= ((var_5 & (arr_21 [1] [i_15] [1] [1] [i_14 + 1])));
                        var_47 = var_6;
                    }
                }
            }
        }
        arr_62 [i_12] |= (((var_2 * var_15) ? ((var_10 ? 11 : var_13)) : (arr_40 [i_12] [i_12 - 1])));
        arr_63 [i_12] = 14681131160199515101;
    }
    #pragma endscop
}
