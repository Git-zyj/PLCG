/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((((var_6 ? 1 : var_2)) == var_11))) < var_15));
    var_21 = (max(var_21, var_5));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_22 = var_6;
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] [i_4] [i_4] &= ((((((arr_13 [i_3] [i_3] [i_3] [i_3] [i_4]) <= ((1 ? var_11 : (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4])))))) == (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]) & (arr_13 [i_0] [i_0] [i_2] [i_3] [i_3])))));
                            arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] = 105;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_23 &= ((-(arr_5 [i_0] [i_0])));
                            var_24 -= (((arr_0 [i_3]) && (((var_10 / (arr_9 [i_0] [i_0] [i_0]))))));
                            arr_20 [i_1] [i_1] = arr_6 [i_0] [i_2] [i_0];
                        }
                        var_25 = (((arr_19 [i_2]) | (arr_19 [i_1])));
                        var_26 = (max(var_26, ((!((var_7 == (arr_10 [i_0] [i_1])))))));
                        var_27 |= (arr_14 [i_0] [i_1] [i_0] [i_3]);
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_25 [i_0] [i_0] [i_0] = -27455;
            var_28 -= (((arr_7 [i_6] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0])));
            var_29 = (max(var_29, ((((((-(arr_13 [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (arr_23 [i_0] [i_0] [i_6]) : ((((-(arr_15 [i_6] [i_6] [i_6]))) / ((((56 || (arr_7 [i_6] [i_6] [i_6]))))))))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -9086;
                            var_30 = 1;
                            arr_35 [i_0] = (((((arr_32 [i_9] [i_8] [i_6] [i_0]) - (arr_32 [i_8] [i_8] [i_7] [i_8])))) && (arr_32 [i_6] [i_7] [i_6] [i_9]));
                            var_31 = (max(var_31, var_19));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_32 = (max(var_32, ((((arr_0 [i_8]) / 105)))));
                            var_33 = ((!(arr_5 [i_0] [i_7])));
                            var_34 += (arr_30 [i_8] [i_8]);
                        }
                        var_35 = ((((!(arr_0 [i_0]))) ? (arr_28 [i_6] [i_7] [i_8]) : ((((((-(arr_21 [i_0])))) || 0)))));
                    }
                }
            }
            var_36 = ((max(3382786310580500215, var_4)));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_40 [i_0] [i_0] [i_0] = max((arr_4 [i_0]), (((((((arr_9 [i_11] [i_11] [i_11]) % (arr_33 [i_0] [i_0] [i_0] [i_11] [i_0] [i_0] [i_0])))) > (arr_11 [i_11] [i_11] [i_11] [i_11] [i_11])))));
            var_37 &= (((arr_23 [i_11] [i_11] [i_11]) ? -75 : (((arr_32 [i_0] [i_0] [i_0] [i_11]) % (arr_23 [i_0] [i_0] [i_0])))));
            arr_41 [i_0] [i_0] = ((((arr_5 [i_0] [i_11]) / (arr_2 [i_0]))));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_38 = (max(var_38, 9087));
            var_39 = (max(var_39, ((((((2856686551902467863 ? (arr_39 [i_0]) : (arr_5 [i_12] [i_0])))) && (((~(arr_23 [i_12] [i_0] [i_0])))))))));
            var_40 += (((var_6 / 101) ? (arr_0 [i_0]) : 78));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_41 |= (arr_22 [i_0] [i_0] [i_0]);
            arr_47 [i_0] [i_0] [i_0] = (((!(((arr_23 [i_13] [i_0] [i_0]) == (arr_27 [i_0] [i_0]))))) ? (~-var_14) : (max((arr_44 [i_13] [i_0] [i_0]), (arr_28 [i_0] [i_0] [i_0]))));
            arr_48 [i_13] [i_0] [i_0] = (max(-2786, ((((((-908 * (arr_21 [i_13])))) != (((arr_7 [i_0] [i_0] [i_0]) / (arr_12 [i_0] [i_0] [i_0] [i_0] [i_13] [i_0]))))))));
            var_42 -= (((arr_15 [i_0] [i_0] [i_0]) ? (arr_32 [i_0] [i_0] [i_0] [i_0]) : 65535));
        }
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_43 -= (min(((-(~var_8))), (arr_49 [i_14] [i_14])));
        arr_51 [i_14] [i_14] = (arr_50 [i_14]);
    }
    #pragma endscop
}
