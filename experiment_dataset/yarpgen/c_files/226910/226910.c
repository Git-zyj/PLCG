/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 *= ((arr_3 [i_0]) ? ((((((arr_1 [i_0] [i_0]) ? -23756 : 1))) ? (max((arr_2 [i_0]), 1842368146)) : (((-(arr_0 [i_0])))))) : (((((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0]) : var_11))) ? var_7 : (((arr_0 [i_0]) ? 3095 : (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_19 = (min(var_19, (((0 ? ((min(190, (arr_9 [i_0] [i_2])))) : (max((arr_7 [i_2] [i_2] [i_2] [i_0]), (arr_7 [i_2] [i_0] [i_0] [i_0]))))))));
                var_20 *= (arr_3 [19]);
                arr_10 [i_1] [i_1] = -1386306658;
                arr_11 [i_2] |= ((arr_8 [i_0] [i_2] [i_2]) ? (((min(var_3, var_2)))) : (max((arr_4 [i_0] [i_0] [i_0]), (arr_8 [i_2] [i_2] [i_0]))));
                var_21 = (((arr_8 [i_0] [i_1] [i_0]) ? ((((arr_4 [i_2] [i_1] [i_0]) || 1))) : (((((arr_9 [i_1] [8]) / (arr_5 [i_0])))))));
            }
            arr_12 [5] [i_1] [5] = (arr_2 [i_1]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_16 [17] = ((((((min((arr_15 [1] [1] [i_3]), (arr_7 [i_0] [i_3] [i_0] [i_0])))) ? (((3095 ? 1 : 3095))) : (((arr_8 [i_0] [i_0] [i_0]) ? (arr_6 [i_3] [i_3] [i_0]) : var_5)))) < ((((!(arr_13 [i_0])))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_6 - 2] [9] [i_5] = 133;
                            var_22 = (min(var_22, var_10));
                            arr_26 [i_5] [i_4] [i_4] [i_5] = (max(((((3899305557 ? 1 : (arr_18 [i_0] [i_3] [i_4]))))), (1330583078 | 4)));
                        }
                    }
                }
            }
            arr_27 [9] = (((arr_4 [i_3] [i_0] [i_0]) ? (arr_4 [i_3] [i_0] [i_0]) : (max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
            {
                arr_32 [i_8 - 1] [i_0] = ((1 == ((((!var_9) || (((240 ? 1 : (arr_0 [8])))))))));
                arr_33 [i_0] [i_0] = 3054;
                arr_34 [i_0] [i_7] [4] &= (arr_20 [i_0] [i_7]);
                var_23 += ((!(((+((var_7 ? (arr_9 [i_7] [i_0]) : (arr_17 [i_0] [i_7] [i_7]))))))));
                arr_35 [3] [i_7] [19] [11] = (arr_13 [i_0]);
            }
            for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_24 = (arr_30 [i_0] [i_9 - 1] [i_10]);
                            arr_43 [i_0] [i_10] [i_0] [i_0] [i_0] = ((-((1 ? 199 : (arr_42 [i_9 - 1] [i_9 + 1])))));
                            var_25 = (((((((arr_7 [i_0] [i_7] [i_10] [i_10 - 1]) || -3055))) >> (((arr_31 [i_0] [i_7] [i_9] [i_11]) + 25516)))));
                            arr_44 [i_0] [i_9] [i_10] [14] = (((((var_10 ? (((3308054612 ? -6526 : (arr_0 [i_9])))) : (min(var_9, (arr_21 [i_0] [18] [16] [i_0] [i_10])))))) | (((arr_28 [i_11] [i_10 - 1] [i_9]) ? (arr_22 [10] [i_7] [i_7]) : ((((arr_30 [i_7] [i_9 + 1] [i_10]) ? 1 : (arr_8 [i_0] [i_10] [i_0]))))))));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_47 [i_0] [i_12] [i_9] [i_12] = ((2055580770 ? ((763842964 - (50 || -18339))) : -1));
                    arr_48 [i_0] [i_0] [i_9] |= (arr_9 [i_12] [i_0]);
                    var_26 = ((((((arr_4 [i_12] [i_12] [i_7]) * 11924)) / (arr_5 [i_9 - 1]))));
                    var_27 = ((~(253 && 3055)));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_28 = (min((arr_19 [22] [i_0] [i_0]), var_10));
                    var_29 = ((-(min((arr_46 [i_9 - 1] [17] [i_9 + 1]), (arr_46 [i_9 - 1] [i_9] [i_9 + 1])))));
                    var_30 = (max(var_30, 22252));
                }
            }
            var_31 *= var_6;
            var_32 = ((1897967030 || ((min(((((arr_0 [i_7]) ? (arr_37 [i_0] [i_0] [i_0] [i_0]) : 3661123299))), var_9)))));
        }
        var_33 = var_3;
        arr_51 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 2; i_15 < 22;i_15 += 1)
        {
            arr_59 [10] [i_14] [7] = ((arr_52 [i_14]) ? (arr_52 [i_15]) : (arr_38 [i_15 - 1] [i_14]));
            var_34 = ((arr_20 [i_14] [i_14]) - (arr_1 [i_15 + 1] [i_15 - 2]));
            var_35 = (arr_2 [i_14]);
            var_36 = (max(var_36, 0));
            arr_60 [i_14] [i_15] [i_14] = ((+(((arr_8 [10] [i_14] [i_15]) ? var_15 : (arr_45 [i_15] [i_15 - 1])))));
        }
        var_37 = var_13;
        arr_61 [i_14] [i_14] = ((arr_14 [i_14] [i_14] [i_14]) ? (arr_0 [i_14]) : (arr_9 [1] [1]));
    }
    var_38 = ((((max(((min(var_16, var_10))), ((var_8 ? 253 : var_4))))) ? ((((((min(var_1, 1342838939715554702))) && (var_0 & var_8))))) : ((var_15 >> (var_8 - 184)))));
    var_39 = (((var_0 < var_14) ? var_16 : (((var_5 ? var_0 : var_13)))));
    var_40 = ((!((min(0, -1365969073)))));
    #pragma endscop
}
