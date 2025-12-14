/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_9, var_1));
        var_17 = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((+(max((arr_1 [i_0] [i_2 + 2]), var_8)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2 + 1] = ((max((arr_5 [i_2 + 2] [i_2] [i_1]), (arr_5 [i_2 + 2] [i_2] [i_1]))));
                    var_19 = (min(var_19, (((((max(-197, ((var_1 ? (arr_6 [i_0] [14] [14] [i_2]) : (arr_6 [i_1] [6] [i_1] [i_1])))))) ? ((-((var_4 ? var_8 : (arr_4 [i_0] [1]))))) : (arr_6 [i_0] [10] [i_0] [12]))))));
                }
            }
        }
        var_20 = ((58 ? 199 : 1));
        var_21 = (((((-((var_0 ? var_4 : (arr_2 [i_0])))))) - (min(var_12, var_11))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_22 ^= ((!(!var_15)));
            var_23 = ((var_9 ? (((arr_9 [i_3 + 3]) ? 50 : (arr_11 [i_3 - 1]))) : (((var_14 >= (arr_9 [i_3 - 1]))))));
            var_24 = (min(var_24, (~28832)));
            var_25 = var_6;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_26 -= ((~(arr_13 [i_3 + 1])));
            arr_17 [i_3] = (~var_2);
            var_27 = (((((~(arr_11 [i_3])))) ? var_12 : (var_8 != var_13)));
            arr_18 [i_3] [i_3 + 2] [6] = (0 > var_6);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            arr_21 [i_3 + 1] [i_6 - 1] [i_6] = (((!var_11) <= (arr_13 [i_6 + 2])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_28 = 198;
                            var_29 += (~198);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            var_30 ^= -1481665182;
            arr_33 [i_10] [i_3] = ((!(((var_1 ? 211 : var_4)))));

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_31 = (((arr_15 [i_3 + 1] [i_3]) ? var_13 : (arr_15 [i_3 + 3] [i_10])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_32 = ((var_11 & ((((arr_31 [i_3] [i_10]) ? (arr_22 [i_3] [i_3 + 2] [i_3]) : (arr_15 [i_13] [i_13]))))));
                            var_33 = var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_34 = (min(var_34, var_1));
                            var_35 = (min(var_35, var_5));
                        }
                    }
                }
                var_36 |= (((arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1]) ? (arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1]) : (arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1])));
                var_37 &= 209;
            }
            for (int i_16 = 2; i_16 < 22;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 22;i_18 += 1)
                    {
                        {
                            var_38 *= (((((var_14 & (arr_12 [1] [i_10 + 1])))) ? 197 : var_14));
                            arr_54 [i_10] [i_10] [i_16] [i_10 + 1] [i_18] = 73;
                            var_39 = (max(var_39, (arr_29 [i_3] [i_10] [i_16] [1] [i_17] [i_18])));
                        }
                    }
                }
                arr_55 [21] [i_10] [22] = (((arr_48 [i_10 + 1]) < (arr_13 [14])));
                var_40 = (min(var_40, (((~(arr_37 [i_16 - 1]))))));
            }
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                var_41 = (max(var_41, var_9));
                var_42 ^= (((arr_35 [i_19] [22] [2] [i_19]) ? (arr_30 [i_3 + 3] [1] [i_10 + 1] [i_19] [i_19] [i_19]) : (~1)));
            }
        }
        arr_58 [i_3] = (((arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) || (((~((min(var_3, (arr_26 [4] [i_3] [i_3] [i_3])))))))));
    }
    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {

        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            var_43 = (~197);
            arr_63 [i_21] = ((-(((((var_12 ? var_6 : var_6))) ? (var_14 || 50) : (var_15 || 2268411691)))));
            var_44 = (max(var_44, ((((((+((min((arr_37 [i_21]), var_10)))))) ? (!var_4) : var_3)))));
            arr_64 [i_21] [i_21] = ((!((((((var_13 - (arr_9 [i_21])))) ? 221 : var_4)))));
        }
        var_45 = (max(var_45, (((~(arr_61 [i_20]))))));
        var_46 = (!1);
        var_47 = ((((~(arr_53 [i_20] [i_20] [i_20] [15]))) != (((var_5 * var_5) ? ((((arr_23 [i_20] [i_20] [i_20] [i_20]) | (arr_61 [i_20])))) : var_2))));
        arr_65 [i_20] = arr_15 [i_20] [i_20];
    }
    for (int i_22 = 2; i_22 < 21;i_22 += 1)
    {
        var_48 = (min(var_48, ((((((((arr_26 [0] [i_22] [i_22] [22]) ? var_11 : var_0))) ? (((arr_14 [i_22 - 2]) & var_4)) : 2026555605))))));
        var_49 -= (((arr_38 [i_22 + 1] [i_22 - 2] [i_22] [i_22] [i_22 - 2] [i_22]) ? (((arr_49 [i_22 + 1] [i_22 + 1] [i_22 - 2] [i_22]) / (arr_66 [i_22 - 1]))) : ((max((((var_5 ? var_0 : var_3))), ((var_0 ? var_12 : var_1)))))));
    }
    var_50 = ((~((-(~var_2)))));
    var_51 = (max(var_51, (((~(max(var_1, (!918288959))))))));
    var_52 = ((var_6 ? var_13 : var_13));
    var_53 &= var_3;
    #pragma endscop
}
