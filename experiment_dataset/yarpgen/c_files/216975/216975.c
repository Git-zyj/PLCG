/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_9 ? ((var_8 ? 2620329219755731028 : var_3)) : (((max(var_8, 37)))))));
    var_12 |= (min((((min(var_0, -69)))), (var_4 || var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (((-37 ? 1 : 1)));
                var_14 = (min(var_14, 1));
                arr_6 [i_0] = -1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_15 = (min((arr_16 [6] [i_3 - 1] [i_4 - 3]), -var_10));
                        var_16 -= (((((var_3 / (var_4 - var_5)))) ? (((-18 ? 1 : -67))) : (((((-118293781 ? 176 : 1))) ? (arr_10 [9]) : (max(var_5, 12671952360882720984))))));
                        var_17 = (max(var_17, (((!(((var_0 ? var_1 : (((!(arr_5 [i_5] [i_4]))))))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    var_18 = (((((((!(arr_5 [i_6] [i_6]))) ? -var_0 : (((arr_20 [i_2] [i_2] [i_2]) ? var_7 : var_2))))) ? (var_1 || var_9) : 66));
                    var_19 = (arr_2 [i_7 + 1]);
                }
            }
        }
        var_20 = (min(var_20, -37));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_21 = ((var_0 || (arr_25 [i_8 + 1])));
            var_22 = (((arr_25 [i_8 - 1]) ? var_7 : var_2));

            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_23 = var_9;
                var_24 = (((arr_26 [i_8 + 1]) / var_5));

                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    var_25 |= (((~var_5) & var_1));
                    arr_37 [i_8] [i_9] [i_10] [i_11] = (arr_34 [i_8] [i_8] [i_8] [i_10] [i_11]);
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_26 = (((arr_26 [i_8 - 1]) ? (arr_26 [i_8 - 1]) : (arr_31 [i_8 - 1])));
                    var_27 = ((~64) ? var_1 : (~3));
                    var_28 = ((var_6 - ((-(arr_32 [i_8] [0] [i_10])))));
                    var_29 = (min(var_29, ((((37 || 31) < (arr_31 [i_8 + 2]))))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_30 = (((arr_26 [i_10]) ? (arr_38 [i_8 - 1] [i_13] [i_13] [i_13] [5] [i_13]) : -var_9));
                    var_31 = (((~var_10) ^ (arr_36 [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 2])));
                    var_32 = (((var_0 == var_4) ? ((~(arr_44 [i_13] [i_10] [i_8 - 1] [i_8 - 1]))) : -74));
                }
                for (int i_14 = 2; i_14 < 23;i_14 += 1)
                {
                    var_33 = 2505;
                    var_34 = (max(var_34, (((var_3 ? 1 : (var_9 | var_3))))));
                    var_35 = (((arr_30 [i_9]) & var_0));
                    var_36 = (((587343050012511929 == 1) ? -56450 : var_9));
                }
                var_37 = 41760;
            }
            for (int i_15 = 4; i_15 < 23;i_15 += 1)
            {
                var_38 = (min(var_38, (((~((var_3 ? var_0 : var_9)))))));
                var_39 ^= (((((arr_27 [i_8] [i_8]) == (arr_27 [i_9] [i_9]))) ? (arr_38 [i_8] [23] [i_8] [i_8 - 1] [i_8 + 1] [i_15 + 1]) : var_6));
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            arr_58 [i_18] [18] [i_16] [i_8] [i_8] = (~12048700802177201144);
                            arr_59 [i_8] [i_8] = (var_10 && var_7);
                            var_40 = (max(var_40, var_0));
                            var_41 ^= (((((arr_39 [i_8] [i_9] [3] [i_17] [i_18]) | var_10)) == (arr_43 [i_8 + 1])));
                        }
                    }
                }
                var_42 = (max(var_42, ((((arr_54 [i_8]) / (arr_28 [i_8 - 1] [i_8 + 1] [6]))))));
            }
            for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
            {
                var_43 += (arr_34 [i_8] [i_8] [i_8] [i_9] [i_9]);

                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    var_44 = var_10;
                    var_45 = ((arr_38 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]) ^ (arr_49 [i_8 - 1] [i_8 - 1]));
                }
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    arr_70 [i_8] [i_9] [i_9] [i_19] [i_19] [i_21] = (((((arr_42 [i_21] [i_21] [i_19] [i_9] [i_8] [i_8]) ^ 37)) & (arr_27 [i_8 + 2] [i_8 - 1])));
                    arr_71 [i_8] [20] [i_9] [i_19] [i_21] = (~-var_3);
                    var_46 *= arr_42 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 1];

                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        var_47 = (220 == var_7);
                        var_48 = (arr_63 [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 - 1]);
                    }
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        arr_76 [i_8] [i_9] [i_8] [i_19] [i_21] [i_23] = ((-31502990 ? 0 : -106));
                        arr_77 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8] = ((var_8 ? (arr_31 [i_8 + 1]) : (arr_31 [i_8 - 1])));
                    }
                    for (int i_24 = 0; i_24 < 25;i_24 += 1)
                    {
                        var_49 = var_4;
                        arr_82 [i_24] [i_21] [i_19] [i_9] [i_9] [i_8 + 1] = var_4;
                    }
                    for (int i_25 = 4; i_25 < 22;i_25 += 1)
                    {
                        var_50 = ((6398043271532350471 ? 6398043271532350496 : (arr_31 [i_19])));
                        var_51 = (((((arr_54 [i_19]) == (arr_47 [i_8] [i_9] [i_21])))) == var_8);
                    }
                    var_52 = (max(var_52, (((-201364170 >> (((var_7 < (arr_80 [i_19])))))))));
                }
            }
            arr_85 [i_9] &= ((((!(arr_69 [14] [i_8 + 2] [14]))) ? ((var_8 ? var_10 : var_5)) : ((var_1 >> (((arr_81 [i_9] [i_9] [i_8 - 1] [i_8] [i_8]) - 58))))));
            var_53 = (((var_2 ? var_5 : var_4)));
        }
        var_54 ^= ((((-var_1 == ((var_4 ? 201364169 : var_0)))) ? ((min(var_2, ((min(26216, 1)))))) : (((arr_30 [i_8 + 2]) - (arr_56 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 - 1])))));
        var_55 = (5 ^ 1);
        var_56 = min(((((!9958) ? 112 : -133))), 1);
    }
    for (int i_26 = 1; i_26 < 23;i_26 += 1) /* same iter space */
    {
        var_57 = (min(var_57, (~var_6)));
        var_58 = -62526;
    }
    #pragma endscop
}
