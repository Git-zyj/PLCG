/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = ((~(((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 2])))));
        arr_3 [i_0] = ((!(((+(((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 - 1]))))))));
        var_19 = ((((!(((-(arr_0 [i_0 + 2])))))) || (arr_1 [i_0 - 1] [23])));
        arr_4 [i_0] = ((((arr_0 [6]) <= (((~(arr_2 [i_0 + 1])))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = arr_6 [i_1];

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_20 = (arr_1 [4] [i_2]);

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                arr_13 [i_1] = ((-(((arr_5 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1])))));
                var_21 -= ((-(arr_10 [i_1] [i_1 + 1] [i_1] [8])));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_22 = (arr_2 [i_1]);
                var_23 = ((!((((arr_15 [i_1] [i_1] [i_2] [8]) ? (arr_15 [i_4] [i_1] [i_1] [i_1 + 2]) : (arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_1]))))));
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] [i_1] [i_1] = (((arr_17 [i_1] [i_1]) / (arr_15 [i_1] [i_1] [i_5 + 1] [i_5])));
                arr_20 [i_1] [i_2 + 1] [i_2 + 1] = ((((((arr_10 [i_1 + 2] [i_1 - 1] [i_1] [i_1]) && (arr_10 [i_1 + 2] [i_2] [i_2 - 1] [i_1])))) >= (((arr_10 [i_1 + 2] [10] [i_2 - 1] [i_1]) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]) : (arr_10 [i_1 + 2] [i_2 + 1] [i_1 + 2] [i_1])))));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_23 [i_1] = ((-(arr_15 [i_1] [i_1] [i_1] [i_1])));
                var_24 = ((((-(((arr_12 [6] [1] [i_6] [i_6]) ? (arr_12 [i_1 + 1] [i_1 + 2] [i_2 - 1] [i_6]) : (arr_8 [i_1] [i_2 + 1] [i_1]))))) >= (arr_1 [i_1] [i_2])));
                var_25 += (arr_14 [i_1] [i_6] [i_6]);
            }
            var_26 += (arr_2 [i_1 + 1]);
            arr_24 [i_1] [i_1] [i_1] = (arr_1 [i_1] [i_2 + 1]);
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_27 = (max(var_27, (arr_1 [6] [i_1])));
            var_28 = (arr_11 [i_1] [i_7 + 3] [i_7]);

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                arr_29 [i_1] [i_7] [i_1] = ((-(((!(arr_15 [i_1] [i_1] [i_8] [i_1]))))));
                var_29 = (arr_18 [i_1] [i_1]);
                var_30 = (max(var_30, (((-(arr_11 [i_8] [i_7 + 3] [i_8]))))));
                arr_30 [i_1] = ((~(arr_6 [i_1])));
            }
            var_31 = (max(var_31, (arr_9 [i_1 - 1])));
        }
        arr_31 [i_1] = ((((((arr_11 [i_1] [i_1] [i_1 - 1]) ? (arr_18 [i_1] [i_1]) : (arr_25 [i_1] [6]))) - (((arr_28 [i_1] [i_1] [i_1] [i_1]) + (arr_6 [i_1]))))) - (((((arr_5 [i_1]) ? (arr_0 [i_1]) : (arr_5 [i_1]))) - (((arr_10 [i_1] [i_1] [i_1] [i_1]) + (arr_11 [i_1] [i_1] [i_1 - 1]))))));
    }
    var_32 -= (((((~(var_3 >= var_13)))) != (((~var_16) ? var_0 : var_8))));
    var_33 = ((-(~var_8)));
    var_34 = var_1;
    #pragma endscop
}
