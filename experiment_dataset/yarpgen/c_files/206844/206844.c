/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_17 = var_8;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = (((!var_2) >= ((-(arr_1 [i_0] [i_1])))));
            var_19 = (arr_2 [1] [i_0]);
        }
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_20 = ((~((1 ? (arr_13 [i_2 - 2] [i_2 - 2] [i_2] [i_3]) : (arr_11 [i_2 - 2] [i_3])))));
                        var_21 = (min((((((251785113 | (arr_2 [i_2] [i_4]))) >= (max(1, 4043182202))))), (arr_4 [i_3] [i_4])));
                    }
                }
            }
            arr_15 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
            var_22 = (arr_0 [i_0]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 *= (((arr_17 [i_0]) ? (arr_17 [i_5]) : -var_0));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_24 = (((((~(arr_6 [i_6])))) ? (arr_6 [i_6]) : var_4));
                        arr_23 [i_6] [i_5] [i_6] = ((1 ? (arr_10 [i_0] [i_6] [i_0] [i_7]) : ((-(arr_19 [i_0] [i_6] [i_7])))));
                    }
                }
            }
        }
        arr_24 [i_0] = ((!(((-(arr_18 [i_0] [1] [i_0]))))));
        var_25 = ((((min((arr_7 [i_0]), (arr_0 [i_0])))) ? var_8 : var_12));
        var_26 ^= (arr_1 [i_0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_27 *= (!-40839);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                {
                    var_28 = ((!((((~9379790557976982170) ? (arr_21 [i_10 + 1] [i_10] [i_10 - 2] [i_10] [i_10 - 1]) : var_5)))));
                    var_29 &= ((~(arr_4 [22] [i_9])));
                    var_30 = (max(var_30, (max((((!(arr_22 [i_8] [i_8])))), (arr_25 [4] [4])))));
                    arr_32 [i_8] = (arr_3 [i_8] [i_8]);
                }
            }
        }
        var_31 = (arr_25 [i_8] [i_8]);
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_32 += 2023505569;

        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
        {
            var_33 = 4043182183;
            var_34 = (min(var_34, ((((((~(((arr_27 [i_12 - 1] [i_12] [i_11]) ? (arr_31 [i_11] [i_11]) : var_5))))) ? (arr_7 [i_11]) : (((((arr_26 [i_11] [i_11]) || (arr_6 [i_12 - 1]))))))))));
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
        {
            arr_41 [i_13] = ((-1958037262 ? (arr_26 [i_13] [i_13 - 2]) : ((243 ? 3755103738 : -4))));
            arr_42 [i_11] [i_11] [i_13] = (arr_31 [i_13] [i_13]);
            arr_43 [i_13] = arr_3 [i_13] [i_13];
            arr_44 [i_13] = ((1854539615 ? (arr_10 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2]) : ((var_3 ? 4043182165 : 251785130))));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_35 = (((((-(arr_17 [i_11])))) ? -1352395369 : 32));
                            var_36 = (max(var_36, ((((arr_49 [i_17 + 2] [i_16 - 1] [i_14 - 2] [i_11]) ? (arr_49 [i_17 + 1] [i_16 - 1] [i_14 - 1] [i_11]) : (arr_49 [i_17 - 1] [i_16 - 2] [i_14 + 1] [i_14]))))));
                            var_37 = (max(var_37, ((((arr_35 [i_11]) && ((!(arr_10 [i_11] [i_15] [i_15] [i_16]))))))));
                        }
                    }
                }
            }
            arr_56 [i_11] = 1854539608;
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        arr_65 [i_19] [7] [i_19] [i_20] = ((!((((arr_14 [i_20] [i_20] [1] [i_18] [24]) ? (arr_51 [i_20]) : (arr_49 [i_11] [i_11] [i_11] [i_11]))))));
                        var_38 += ((((((arr_10 [1] [i_18] [i_20] [i_20]) << (((arr_29 [i_20] [i_18]) - 5018690568375382386))))) ? (arr_21 [20] [20] [20] [i_19] [i_20]) : (arr_48 [i_19])));
                        arr_66 [i_20] [i_19] [i_19] [i_11] [i_11] = (min((arr_54 [i_11] [i_18] [i_18] [i_19] [i_19] [i_20] [i_20]), 48));
                    }
                    var_39 = (max((arr_35 [i_19]), ((-(arr_35 [i_11])))));
                    var_40 = (arr_57 [i_11] [i_11]);
                    var_41 = (((arr_11 [i_18] [i_19]) ? (max((arr_11 [i_11] [i_19]), (arr_11 [i_19] [i_19]))) : (((arr_11 [i_11] [i_19]) / (arr_11 [i_19] [i_19])))));
                }
            }
        }
        var_42 = (min(((-(arr_60 [i_11] [i_11] [i_11]))), (((arr_29 [13] [13]) ? ((1 ? 251785120 : 4043182183)) : -1))));
    }
    #pragma endscop
}
