/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 = (max(((89 + (max(var_0, (arr_3 [i_1] [i_0] [11]))))), ((max((min((arr_2 [i_0] [i_0] [i_0]), 64)), var_10)))));
            arr_4 [i_0] [i_0] = min((arr_3 [i_0] [i_0] [1]), ((((arr_2 [i_1] [i_0] [i_0]) | 1))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 = (arr_3 [i_0] [i_2] [i_0]);
            arr_8 [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_2]) | (arr_7 [i_0] [i_0])));
            var_16 = ((!(((arr_1 [i_0] [i_0]) || var_9))));
        }
        arr_9 [i_0] = min(((((max(-566198215280951506, (arr_0 [7] [i_0])))) ? (max(185, (arr_0 [i_0] [i_0]))) : ((131072 + (arr_6 [i_0] [i_0]))))), ((((arr_0 [i_0] [i_0]) != (arr_6 [8] [13])))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_17 = (max((((arr_11 [i_0]) * (((arr_5 [i_0] [14] [i_0]) ? (arr_3 [1] [i_3] [i_3]) : -6930)))), ((((arr_2 [i_0] [i_3] [i_3]) ? (arr_7 [i_0] [i_3]) : (arr_2 [i_0] [i_0] [i_0]))))));
            var_18 = ((117 ? 1 : 54));
        }
        var_19 = (min((var_4 - 15655780605352984018), ((((((arr_11 [i_0]) ? 105 : 2790963468356567598))) ? (arr_3 [i_0] [i_0] [7]) : (~var_8)))));
        arr_13 [i_0] = (min(2790963468356567598, ((-(min(var_6, (arr_3 [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 = 3;
        var_21 |= ((!(((-22 ? 105 : 2)))));
        arr_16 [i_4] [i_4] = 2;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 = 8642260170909391000;
        arr_19 [i_5] = ((((((arr_17 [i_5]) - 4160749568))) ? ((~(arr_18 [i_5]))) : (arr_18 [i_5])));
        arr_20 [i_5] [i_5] = (arr_18 [i_5]);
        arr_21 [23] = ((-((((((arr_17 [i_5]) ^ (arr_17 [i_5])))) ? ((min((arr_17 [i_5]), (arr_18 [i_5])))) : (arr_17 [i_5])))));
    }
    var_23 |= (max(((449080437 << (228 - 227))), var_9));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_26 [i_6 + 2] = arr_12 [i_6] [i_6] [i_7];
            arr_27 [i_6] [i_6] [i_7] = (arr_1 [i_6] [i_6]);
        }
        var_24 = (((arr_0 [i_6 + 1] [i_6 - 1]) / (arr_0 [i_6 - 1] [i_6])));
        arr_28 [i_6] [i_6] = (!-10);
        arr_29 [i_6 - 1] = (((arr_7 [i_6 - 1] [i_6 - 1]) >= (arr_24 [i_6 - 1] [i_6 - 1] [i_6 + 1])));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_25 = (arr_1 [i_8] [2]);
        var_26 = ((((0 || (arr_0 [i_8] [i_8]))) ? (arr_6 [i_8] [i_8]) : (arr_1 [i_8] [i_8])));
        var_27 = (arr_0 [i_8] [i_8]);
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_28 = (max((min(((min((arr_32 [i_9] [7]), (arr_32 [i_9] [i_9])))), (min(117440512, -290840526)))), ((var_4 + (arr_18 [i_9])))));
        var_29 = (max(var_29, (arr_18 [i_9])));
        arr_35 [i_9] [i_9] &= (((((((((arr_33 [i_9] [16]) + 2147483647)) >> (68 - 61))) & ((~(arr_34 [i_9] [i_9]))))) << (((arr_34 [i_9] [i_9]) + 1006277163))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_30 = ((((arr_17 [i_10]) ? ((~(arr_33 [i_10] [i_10]))) : (arr_37 [i_10] [i_10]))));
        var_31 -= (((arr_34 [i_10] [i_10]) + (((!(var_7 & 1069868492))))));
        var_32 -= (((((1 + (arr_36 [9]))))) || (((((arr_33 [i_10] [i_10]) ? (arr_34 [i_10] [i_10]) : 1338481371342141797)))));
        var_33 |= (arr_32 [i_10] [i_10]);
    }
    #pragma endscop
}
