/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((var_7 ? var_17 : var_11)) >> (!var_15))), -var_2));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, var_6));
        var_20 = (min(var_20, (((~(arr_0 [i_0] [i_0]))))));
        var_21 = (min(var_21, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_22 = arr_0 [12] [i_1];

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_23 = (min(var_23, (arr_7 [i_2])));
                    var_24 = (min(var_24, (((arr_2 [i_1]) ? ((var_10 >> (((arr_0 [i_3] [i_1]) + 2046195838)))) : (arr_0 [1] [i_1])))));
                    var_25 = ((1621898414 ? 32025994 : 488));
                    var_26 = ((+(((arr_9 [i_1] [i_2] [i_3] [i_4]) * (arr_0 [i_3] [i_4])))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_15 [4] [i_2] [i_3] [1] = ((((max((var_6 / var_8), (arr_13 [13] [i_2] [i_3] [i_5])))) ? (((((((arr_1 [i_1]) ? (arr_7 [7]) : (arr_14 [i_2] [i_2] [i_3] [i_3] [i_3] [5]))) < (((var_4 ? (arr_6 [i_1] [i_1]) : var_14))))))) : var_0));
                    var_27 = (min(var_27, (arr_5 [i_5] [0] [i_3])));
                    var_28 = var_13;
                    arr_16 [i_2] [4] [12] [i_5] = (arr_7 [i_5]);
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    arr_19 [i_2] = var_10;
                    arr_20 [i_1] [i_2] [i_2] [i_2] = (arr_3 [i_6 + 2]);
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    var_29 = (max(var_29, (arr_5 [0] [i_2] [i_2])));
                    arr_25 [i_1] [1] [i_2] [7] [i_1] [i_1] = (((arr_10 [4] [i_2] [i_2] [i_3] [1] [i_7]) & -var_3));
                }

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_30 = (min(var_1, (((var_7 ? var_12 : 83)))));
                    var_31 += (min((arr_6 [i_3] [i_8]), (((~(arr_24 [i_1] [8] [i_3] [i_8] [1]))))));
                    arr_28 [i_8] [i_3] [i_2] [i_2] [i_2] [i_1] = (arr_21 [i_1] [i_1] [12] [i_1]);
                    arr_29 [i_2] [7] [i_2] [i_2] = ((((arr_11 [i_8] [i_3] [2] [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [8] [i_1] [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_2] [i_3] [i_3] [i_8]))) != (min((arr_11 [i_1] [i_2] [i_3] [i_3] [i_3] [i_8]), var_1)));
                }
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    arr_32 [i_1] [i_2] [i_3] [i_9 + 1] = (((((max(var_9, (arr_14 [i_2] [7] [i_2] [i_3] [i_9 + 1] [i_9 + 1]))) ? (arr_5 [i_2] [i_2] [1]) : (((arr_27 [i_1] [i_2] [i_2] [i_2] [8]) ? (arr_8 [i_2] [i_2] [i_2] [i_9]) : (arr_21 [1] [i_3] [i_2] [i_1])))))));
                    arr_33 [i_1] [i_1] [i_2] [i_3] [i_9] = var_7;
                }
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                arr_36 [6] [1] [i_10] [6] |= ((((!((max(var_10, (arr_30 [i_1] [i_10])))))) && ((((arr_18 [i_10] [13] [i_1]) ? var_15 : (arr_26 [1]))))));
                arr_37 [i_1] [i_2] [4] = ((((((min((arr_11 [i_1] [i_1] [i_1] [8] [i_1] [i_1]), (arr_1 [i_1])))) ? (!var_3) : ((var_14 ? var_4 : var_17)))) & (((max((!var_6), (((arr_24 [i_10] [i_2] [i_10] [i_10] [i_1]) || (arr_18 [i_10] [i_2] [i_1])))))))));
                arr_38 [i_2] = var_10;
                arr_39 [i_1] [i_2] = (((arr_12 [i_1] [i_2] [i_10] [i_10] [i_10]) & (((arr_7 [i_1]) ? (arr_7 [i_10]) : (arr_7 [i_1])))));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_32 += ((+((((((arr_12 [i_1] [13] [i_11] [13] [i_11]) ? (arr_34 [i_1] [i_2] [i_11]) : var_1))) ? (((arr_40 [i_1] [7]) / (arr_35 [i_1] [i_2] [i_11] [i_2]))) : (((arr_41 [i_1] [i_2] [i_1]) ? (arr_5 [10] [i_2] [8]) : (arr_6 [i_2] [7])))))));
                var_33 -= (max((arr_1 [i_1]), (arr_8 [4] [4] [i_2] [i_2])));
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
            {
                arr_44 [i_1] [i_2] [i_12] = ((+((~((((arr_10 [i_1] [i_1] [i_2] [i_2] [i_12] [i_12]) < var_3)))))));
                arr_45 [i_1] [i_2] = (((((arr_43 [i_2] [i_2] [i_2]) < (arr_43 [i_2] [i_2] [i_12]))) ? ((((arr_34 [i_12] [i_2] [i_1]) ^ (arr_34 [i_1] [i_1] [i_1])))) : (max((arr_26 [i_2]), (min(var_5, (arr_7 [i_1])))))));
            }

            for (int i_13 = 2; i_13 < 11;i_13 += 1)
            {
                var_34 = (max((arr_4 [i_13 - 1] [i_2] [i_2]), (((((-(arr_4 [7] [i_2] [i_13])))) ? (((arr_43 [i_2] [i_2] [i_13]) ? (arr_23 [11] [i_2] [i_2] [i_13] [i_13]) : var_16)) : (arr_17 [i_1] [i_2] [i_2])))));
                var_35 = (min(((((max((arr_47 [i_2] [i_2] [1]), var_8))) / var_3)), ((var_7 ? (arr_17 [i_2] [i_2] [i_2]) : (arr_18 [i_13] [i_2] [i_1])))));
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                arr_50 [i_1] [i_2] [i_2] [i_1] = (!153);
                var_36 = (min(var_36, (((5233 ? 2401321277 : 1621898414)))));
            }
            var_37 *= (((((-(arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [2]))))));
        }
        var_38 = var_2;
        var_39 ^= (-((var_1 ? ((var_10 ? var_10 : (arr_18 [12] [2] [i_1]))) : (((min(-95, 7742)))))));
        var_40 ^= (arr_4 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
