/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = (!var_4);
                var_11 -= (max(((-(arr_2 [i_0]))), (arr_4 [i_0] [i_1])));
                var_12 = (((((((var_4 ? 937 : 74)) << (var_9 - 43)))) ? (((((min((arr_2 [i_0]), (arr_4 [i_0] [i_0])))) / ((var_8 ? (arr_5 [i_0] [i_1] [i_1]) : var_7))))) : (max((arr_1 [i_0]), (arr_1 [i_0])))));
                var_13 = (min(var_13, (((~(min(var_0, (arr_4 [8] [i_1]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_14 += (((~116) ? (arr_6 [i_2]) : (min((arr_7 [i_2]), (arr_1 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    {
                        var_15 = ((((((arr_3 [i_2] [i_3]) * (arr_3 [i_2] [i_2])))) ? ((~((189 - (arr_2 [i_2]))))) : (~var_5)));
                        var_16 = ((~((var_9 / (arr_14 [i_5] [i_3])))));
                        arr_17 [i_3] = (((arr_3 [i_4] [i_4]) ? (var_6 - 180) : -24643));
                        var_17 = (((((((arr_10 [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_5 - 1]) ? (arr_10 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1]) : var_8)) + 2147483647)) >> (var_7 - 157)));
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        arr_21 [i_6 - 3] [i_6 + 1] = ((!((min((arr_19 [i_6 - 3]), (arr_19 [i_6 - 2]))))));
        var_18 = (max((var_7 % var_7), ((~(max(var_9, var_6))))));
        var_19 &= (arr_19 [i_6]);
        arr_22 [i_6 - 1] = (max((arr_0 [i_6 - 1] [i_6 - 2]), ((-(arr_5 [i_6 + 1] [22] [i_6 - 3])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_20 = ((~((74 ? -24396 : var_0))));
        var_21 = (max(var_21, var_7));
    }
    var_22 = (var_8 - var_7);
    var_23 = (max(var_23, var_4));

    for (int i_8 = 3; i_8 < 17;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        var_24 = 99;
                        var_25 = ((((-6072571175865338102 ? ((min(var_9, var_9))) : var_9)) == (var_2 == 44)));
                    }
                }
            }
        }
        var_26 = (max(var_26, (((var_6 + ((((arr_32 [i_8 - 3] [i_8] [i_8 + 1] [i_8 + 1]) ? (arr_30 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 2]) : (arr_32 [i_8] [i_8 - 2] [i_8 - 2] [i_8])))))))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_27 = ((((!(arr_40 [i_12] [11] [i_13 + 2] [i_13 + 2]))) ? (max(((((arr_1 [i_13]) / 72))), (min((arr_4 [i_12 - 1] [i_13 - 1]), var_6)))) : ((((((var_9 << (((arr_33 [i_15] [i_14] [i_8] [11] [i_8]) + 132))))) ? (arr_36 [i_13 + 2] [i_8 - 1]) : var_1)))));
                                arr_48 [i_8] [i_8 + 1] [i_13] [i_8 - 1] [i_8 + 1] = (((((var_1 ? (arr_34 [7] [i_13] [13] [i_15]) : 2479834484563174715))) ? (((25599 | (arr_18 [i_12 - 2] [i_13 + 2])))) : (min(65, var_6))));
                                arr_49 [10] [i_13] [13] [i_14] [3] [3] = ((var_6 ? (((arr_20 [i_8]) ? ((var_9 ? (arr_1 [i_15]) : (arr_33 [i_8 - 3] [i_12] [i_13] [i_12] [i_15]))) : (max((arr_25 [i_8] [13]), (arr_28 [i_13 - 1] [i_13 - 1]))))) : ((((-81 ? var_9 : var_4))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 17;i_17 += 1)
                        {
                            {
                                arr_54 [i_12] [i_12 + 1] [i_16] [i_13] = (max((722160334 & 9223372036854775785), ((((arr_27 [i_8 - 1]) / (arr_50 [i_13] [i_13] [i_16] [14]))))));
                                var_28 = (arr_36 [i_8 - 3] [i_8]);
                                var_29 = (((var_5 > (var_2 <= var_1))) ? (min(var_6, (~var_9))) : var_1);
                                var_30 &= ((((min((arr_52 [i_8 - 3] [i_12 - 1] [i_12] [i_12] [i_17 + 1]), (arr_52 [i_8 - 3] [i_12 - 1] [i_12] [i_12] [i_17 + 1])))) ? var_0 : var_4));
                            }
                        }
                    }
                    var_31 = (max((189 & var_1), (max(var_6, (((var_7 << (var_1 - 100))))))));
                }
            }
        }
        arr_55 [1] = ((((-12005463749457404871 > (arr_40 [i_8 - 2] [14] [16] [i_8 + 1])))));
    }
    for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
    {
        var_32 &= (max(((var_2 >> (((arr_0 [i_18] [i_18]) - 40)))), (~var_0)));
        var_33 = (-(arr_43 [i_18] [i_18] [2] [i_18] [i_18] [0]));
        var_34 *= (((((!(75 * 106)))) & (!633128151)));
        arr_58 [i_18] = (min(((var_1 ? var_2 : (arr_33 [i_18] [i_18] [i_18] [i_18] [i_18]))), var_2));
        var_35 -= (arr_53 [14] [i_18] [14] [i_18] [i_18] [i_18] [i_18]);
    }
    for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
    {
        arr_62 [i_19] = (arr_45 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]);
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    {
                        arr_72 [i_19] [13] [i_19] [i_19] = ((((((arr_65 [i_20] [i_20]) / (((arr_40 [i_19] [i_19] [i_19] [i_19]) / 4294967295))))) ? (~var_8) : var_2));
                        var_36 = (arr_66 [i_20] [i_20] [i_19]);
                        arr_73 [i_19] [i_19] [i_20] [12] [i_21] [i_19] = (min(((37 ? var_5 : 37)), (min(((226 ? -109 : (arr_33 [i_19] [i_20] [i_21] [i_21] [i_22]))), var_8))));
                    }
                }
            }
        }
        arr_74 [i_19] [i_19] = ((((max((var_3 & var_9), var_6))) ? ((min(var_0, (arr_34 [0] [i_19] [i_19] [i_19])))) : (arr_40 [17] [i_19] [i_19] [5])));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
    {
        arr_79 [i_23] = ((~(arr_78 [i_23] [i_23])));
        var_37 = (!var_0);
        var_38 += ((((var_1 && (arr_75 [i_23] [1]))) ? var_4 : var_5));
        arr_80 [i_23] = (arr_41 [i_23]);
    }
    #pragma endscop
}
