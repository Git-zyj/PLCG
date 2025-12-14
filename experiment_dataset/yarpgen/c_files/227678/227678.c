/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 -= (min(((max((arr_3 [i_0]), ((min(1, 1)))))), (~8144762014525584670)));
                var_18 -= (min(((max((arr_4 [i_0] [i_1]), (arr_0 [i_0])))), -var_14));
            }
        }
    }
    var_19 = (14 / var_8);
    var_20 = ((((min((!var_10), var_5))) ? (((var_10 * (!var_12)))) : ((var_5 * (!var_3)))));

    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_21 = (((arr_6 [10] [i_2]) ? (((arr_6 [i_2 - 2] [i_2 + 1]) ? ((((arr_6 [i_2] [i_2]) ? var_1 : (arr_6 [i_2] [i_2])))) : (max(var_13, (arr_6 [9] [6]))))) : ((min((min(-1, var_15)), (arr_5 [i_2 - 2]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_11 [i_2] [i_3] [i_4] = (((((~((min(var_8, var_8)))))) ? (arr_7 [i_2] [i_3]) : (min(-var_4, ((min((arr_10 [i_2] [i_3] [i_3] [i_3]), (arr_6 [i_2] [i_3]))))))));

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_22 = ((-(arr_6 [i_2] [i_3])));

                        for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((!(arr_9 [i_2] [i_2] [i_4] [i_5])));
                            arr_16 [i_6] [i_3] [i_6] [i_6] = (((arr_15 [i_2] [i_3] [i_3 + 1] [i_5 - 1] [i_6 - 1] [i_6]) ? (arr_15 [i_2] [i_3] [i_3 + 2] [i_5 - 2] [i_6 + 1] [i_6]) : (arr_14 [i_3 + 3] [i_6 - 1] [i_6] [i_6])));
                        }
                        for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_3] = ((1 >> (-28923 + 28938)));
                            var_24 -= (((arr_17 [i_2 - 2] [i_2] [22] [i_2 + 1] [i_5 - 1]) ? var_4 : (arr_17 [i_2] [i_2] [1] [i_2 + 1] [i_5 - 1])));
                        }
                        for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [4] [i_5] [i_8] = 1;
                            arr_25 [i_2] [i_3] [i_3] [i_4] [4] [i_8] = ((~(arr_10 [i_2 + 1] [i_8] [i_8] [i_8])));
                        }
                        var_25 = (((arr_18 [i_2 - 2] [i_2] [i_2 - 2] [i_4] [i_4] [i_4] [i_5]) || (((-12 ? (arr_14 [i_2] [i_3] [i_4] [i_5]) : 3)))));
                        var_26 = (arr_8 [i_2 - 2]);
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_2] [i_4] [i_4] [i_9] [i_9] [i_9] = ((0 ? 3415294941 : 2146435072));
                        var_27 -= 67;
                        var_28 |= ((-(((var_10 ? var_14 : var_6)))));
                        var_29 -= 60;
                    }
                    arr_30 [i_2] [i_2] [i_2] = (((((min(-60, (-9223372036854775807 - 1)))) ? (var_3 == 463960352) : 0)) > var_16);
                }
            }
        }
        arr_31 [i_2] [i_2] |= ((~(min(var_2, (~1)))));
    }
    for (int i_10 = 1; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] = (arr_33 [i_10] [i_10]);

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    {
                        var_30 = ((((min(var_4, (~451833153)))) ? (((!((((-8418555054095974145 + 9223372036854775807) >> (var_2 - 8247126193018390507))))))) : (max((arr_37 [i_10 + 1]), -6))));
                        arr_43 [i_10] [i_11] [i_12] [i_13 - 1] [i_13] = (min(((max((arr_7 [i_11] [i_12]), ((((arr_7 [i_11] [i_13]) >= var_10)))))), (max((arr_15 [i_10] [i_11] [i_11] [i_11] [i_12] [i_13]), (((arr_23 [5] [i_10] [5] [i_11] [i_12] [i_13] [i_13]) ? var_5 : (arr_40 [i_10] [i_12] [i_12])))))));
                        var_31 = (max(var_31, ((max((max((arr_23 [i_10] [i_10 - 1] [i_13 - 1] [i_13] [i_13] [i_13 + 1] [i_13]), (var_5 - var_1))), var_1)))));
                        var_32 = (min(((((((arr_28 [i_13] [1]) * var_7))) ? ((190297604 ? var_4 : (arr_19 [i_11] [1] [i_13 + 1]))) : (arr_19 [i_13 - 1] [i_12] [i_10]))), ((min(-var_3, var_5)))));
                    }
                }
            }
            arr_44 [i_11] = ((var_9 ? (max((arr_18 [i_11] [i_11] [i_11] [i_10] [i_10] [i_10] [i_10]), (((arr_17 [i_10] [i_10 + 1] [i_10 + 1] [i_11] [i_11]) ? var_16 : var_2)))) : var_5));
        }
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            var_33 &= (arr_6 [i_14] [i_14]);
            arr_48 [13] = (arr_39 [i_14] [i_14 - 1] [i_10 - 1]);
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_34 = (((arr_38 [i_10 - 1] [i_10 - 1] [i_10 + 1]) ? ((~(arr_6 [i_15] [i_10]))) : (arr_47 [i_10 + 1] [i_10 + 1] [i_10 - 1])));

            for (int i_16 = 2; i_16 < 14;i_16 += 1) /* same iter space */
            {
                arr_55 [i_16] [i_15] = (((arr_40 [i_10] [i_15] [i_10]) ? (arr_13 [i_10] [i_15] [17] [i_10] [i_16] [i_15]) : (arr_12 [i_15] [i_16])));
                arr_56 [i_10] [i_15] [i_16] = (!0);
                arr_57 [i_10] [i_15] [i_16 + 1] = var_7;
            }
            for (int i_17 = 2; i_17 < 14;i_17 += 1) /* same iter space */
            {
                arr_61 [i_10] [i_10] [i_15] [i_17] = ((~(arr_50 [i_10 - 1] [i_17 - 2])));
                arr_62 [i_10 - 1] [i_10 - 1] [i_17] [i_15] = (arr_58 [i_10] [i_15] [i_17]);
                var_35 -= (arr_41 [i_17 + 1] [i_15] [i_17] [i_17]);
                var_36 = var_10;
            }
            var_37 = (((arr_5 [i_10 - 1]) ? var_0 : (arr_10 [i_10] [i_10] [i_10 + 1] [i_15])));
            var_38 += (((arr_36 [i_10 - 1] [i_10 - 1] [i_10 + 1]) ? (arr_36 [i_10] [i_10 - 1] [i_10 + 1]) : (arr_36 [i_15] [i_10 - 1] [i_10 + 1])));
        }
        arr_63 [i_10] = ((-((~((min((arr_13 [i_10] [i_10] [i_10] [i_10] [6] [i_10]), (arr_47 [i_10] [i_10] [i_10]))))))));
    }
    #pragma endscop
}
