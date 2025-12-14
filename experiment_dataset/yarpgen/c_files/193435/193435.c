/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_12 [i_2] = (((max(112, (~52)))) ? var_3 : (((!(!var_12)))));
                    var_14 *= (arr_3 [i_1]);
                    var_15 = var_13;
                    var_16 |= ((((((53 && (arr_8 [i_0 - 1] [5] [i_0 + 1]))))) == (min((arr_8 [i_0] [i_0] [i_0 + 3]), var_3))));
                }
            }
        }
    }
    var_17 = (((33689 ? ((min(var_13, var_6))) : ((var_1 >> (var_8 - 1383745604))))));

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = (min(31835, 11269240091268374009));
        var_18 = var_0;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_19 = ((((min((arr_16 [i_4] [i_4]), var_0))) > (max(var_3, 7228))));

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_20 [2] [2] [i_4] = (arr_17 [i_4] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] [i_6] [i_7] = ((((!((max(var_5, (arr_14 [i_4])))))) ? ((~(arr_13 [i_6]))) : (~var_2)));
                        var_20 = (((max((((var_4 != (arr_21 [i_4] [i_5] [i_6] [i_4])))), (max(var_10, (arr_23 [2] [i_6] [2]))))) + ((((!(arr_22 [i_4] [i_4] [i_6] [i_4])))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        var_21 += var_7;
                        var_22 = ((((var_4 ? (arr_23 [i_4] [i_4] [i_9]) : var_5))));
                        var_23 = (((((var_9 ? var_3 : var_0) & (((((arr_22 [i_4] [i_5] [i_5] [i_4]) <= var_11))))))));
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_43 [i_10] [i_11] = ((~(((!var_4) ? var_3 : (!60)))));
                            var_24 = ((min((var_6 != var_2), (min((arr_36 [i_10] [i_10]), var_12)))));
                            var_25 = ((~(var_6 == var_3)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 9;i_15 += 1)
                    {
                        {
                            var_26 = ((197 ? -75 : -54));
                            var_27 += var_5;
                        }
                    }
                }
                var_28 *= (!(((min(29, 1)))));
                var_29 += (((~(arr_19 [i_10 - 1] [i_10 + 1]))));
                var_30 = (min((((2006770754 <= var_7) * (((arr_31 [1] [i_10] [1]) / (arr_29 [i_4] [i_10] [8]))))), (arr_23 [i_4] [i_4] [i_10])));
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_31 = (max(var_31, ((max((arr_26 [i_10 + 1] [i_10 - 2]), (((!(((var_5 ? (arr_24 [i_4] [i_4] [i_4] [i_4]) : (arr_29 [i_4] [i_4] [i_16]))))))))))));
                var_32 = (min((arr_28 [i_10 - 1] [3] [i_16] [i_16]), (arr_28 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1])));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                arr_52 [6] [6] |= (209 >= 31816);
                arr_53 [i_4] [i_10] [9] [8] = ((62 ? 34 : 197));
                var_33 = (arr_36 [i_4] [i_10]);
            }
            var_34 = ((((var_0 || (!var_3))) ? (((((arr_30 [i_10 + 1]) && (arr_30 [i_10 - 1]))))) : (((arr_44 [i_10] [1] [i_4] [i_4] [i_4]) ? ((((!(arr_16 [i_4] [i_4]))))) : (arr_14 [i_10])))));
            arr_54 [i_4] [i_10] = ((~((~(((arr_19 [i_10] [i_10]) ? -2147483637 : var_2))))));
        }
        for (int i_18 = 1; i_18 < 8;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 4; i_20 < 8;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 8;i_21 += 1)
                    {
                        {
                            arr_66 [i_18] [i_18] [i_21 + 2] [i_18] [i_21 + 3] [i_21 + 2] [i_21] = (~((65347 + ((max(108, 63488))))));
                            var_35 = (min(var_35, ((min((min((min(var_8, var_6)), (~var_9))), (!var_13))))));
                            arr_67 [i_20 - 3] [i_18] [i_18] = (min((((arr_19 [i_21 + 2] [i_21 + 2]) ? ((~(arr_50 [i_4] [i_4]))) : (~var_13))), (max((arr_59 [i_18] [5] [i_19] [i_20]), (arr_50 [8] [6])))));
                            var_36 = (arr_65 [i_4] [i_18 + 3] [i_18 + 3] [i_4] [i_18 + 3] [i_21]);
                            var_37 = (!2098544774);
                        }
                    }
                }
            }
            arr_68 [i_18] [10] = ((((arr_24 [i_18 + 3] [i_18 - 1] [i_18 + 1] [i_18]) ? (arr_24 [i_18 - 1] [i_18 - 1] [i_18 + 2] [i_18]) : (arr_24 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_4]))));
        }
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
    {
        var_38 *= ((((((arr_35 [i_22] [i_22] [i_22] [i_22]) ? var_7 : (((arr_13 [i_22]) ? var_1 : var_4))))) ? (max(var_1, var_1)) : (arr_69 [6] [i_22])));
        arr_71 [i_22] [i_22] = var_9;
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_39 = ((((!(~var_10))) ? ((((((max(52, 18633))) && (arr_27 [i_23] [i_23] [i_23]))))) : (max((((arr_21 [i_23] [i_23] [i_23] [i_23]) ? var_4 : var_8)), (!var_13)))));
        var_40 = (min(((((min(var_0, (arr_49 [i_23] [i_23] [i_23] [i_23])))) ? (~var_10) : (arr_17 [i_23] [i_23]))), var_8));
        var_41 = (((((var_0 ? (arr_58 [i_23] [i_23]) : (arr_58 [i_23] [i_23])))) & ((~(min(51, 18446744073709551596))))));
        var_42 = var_5;
    }
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 19;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 19;i_25 += 1)
        {
            {
                var_43 = (arr_78 [i_25]);
                /* LoopNest 3 */
                for (int i_26 = 1; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 19;i_28 += 1)
                        {
                            {
                                var_44 = (min(var_44, (((var_3 ? ((((((var_10 >> (var_12 - 15474815745133576586)))) ? var_7 : (arr_82 [i_26] [i_25] [i_26 - 1] [i_27])))) : (min(((min((arr_77 [i_26] [i_25] [i_24]), (arr_80 [i_24])))), (((arr_84 [6] [1] [1]) & var_13)))))))));
                                var_45 = (min(var_45, 70));
                            }
                        }
                    }
                }
            }
        }
    }
    var_46 = ((var_5 ? ((min(var_13, (~var_11)))) : (max(var_2, var_12))));
    #pragma endscop
}
