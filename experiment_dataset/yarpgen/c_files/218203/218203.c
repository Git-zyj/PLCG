/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = arr_0 [12] [i_0];
        arr_3 [i_0 + 1] = (((((arr_1 [i_0 + 1]) && (arr_0 [i_0 - 1] [i_0 + 1]))) ? (min(var_5, (arr_1 [i_0 + 1]))) : (min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((((((((arr_0 [7] [7]) << (arr_4 [i_1])))) ? (((arr_0 [i_1] [6]) + var_7)) : var_2)) == ((((((var_6 >= (arr_1 [i_1])))) / (var_1 <= var_7))))));
        var_10 = (min(var_10, (arr_1 [i_1])));
        var_11 = ((~(arr_1 [i_1])));
        var_12 &= (min((((arr_5 [i_1] [i_1]) | (arr_0 [i_1] [i_1]))), (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 521))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_13 += (min((min(((var_2 ? var_4 : (arr_8 [i_2]))), (~1))), (arr_8 [i_2])));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_14 = (arr_10 [i_2] [i_2]);
            arr_12 [8] [i_3] = var_3;
            var_15 += (arr_0 [i_2] [5]);
            arr_13 [i_3] = (((min((arr_9 [i_2] [i_2] [i_3]), (arr_8 [i_2])))) ? (min((arr_1 [7]), ((8510243948156806034 + (arr_4 [i_3]))))) : var_9);
            var_16 -= 125;
        }
    }

    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_17 = (arr_15 [i_4 - 1]);
            var_18 = (((((-(arr_17 [i_4] [i_4] [14])))) ? (((arr_15 [i_4]) ? (arr_14 [11]) : var_6)) : -78));
            var_19 = (max(var_19, ((((((var_8 + (arr_14 [3])))) ? (arr_15 [19]) : (arr_15 [i_4 - 1]))))));
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_20 |= (var_1 ? (((arr_19 [i_4] [i_6] [i_6]) >> (((arr_20 [i_6 + 1] [i_4 - 1]) + 1991419155)))) : (((arr_15 [i_6 - 1]) ? (arr_20 [i_4] [i_6]) : (~5364))));
            var_21 = (arr_20 [i_4] [i_6]);
            var_22 = (min(var_22, (((((min(var_3, ((((arr_17 [i_4] [11] [7]) ? (arr_15 [8]) : (arr_19 [i_4] [i_6 - 2] [1]))))))) ? (((((min((arr_15 [i_4]), (arr_16 [i_4 - 1] [i_4 - 1]))) == (arr_15 [i_4 - 1]))))) : (arr_16 [20] [i_6]))))));
        }
        arr_21 [i_4 - 1] [i_4] = ((((min((arr_14 [i_4 - 1]), var_1))) != (((arr_20 [i_4 - 1] [i_4 - 1]) | (((arr_17 [i_4] [i_4] [i_4]) ^ var_3))))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_23 += (arr_24 [2]);
        arr_26 [i_7] [i_7 - 1] = arr_20 [14] [i_7 - 1];
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 23;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_24 = (((arr_27 [i_8 + 2]) ? (arr_27 [i_8 + 2]) : (arr_27 [i_8 - 2])));
            var_25 = (arr_27 [i_8 + 1]);
            var_26 |= ((arr_27 [i_8]) / (((arr_31 [20]) ? (arr_27 [7]) : (arr_31 [24]))));
        }
        var_27 = var_6;
        arr_32 [i_8] [i_8] = var_9;
    }
    for (int i_10 = 3; i_10 < 9;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = 70;
        var_28 = ((((arr_11 [i_10] [i_10 - 2] [2]) ? var_0 : (arr_17 [i_10 - 3] [i_10 - 3] [i_10]))));
        arr_37 [i_10] [i_10] = (min(((min(166, (((arr_27 [i_10]) ? var_4 : (arr_23 [i_10] [i_10])))))), var_3));
        var_29 = (min(((((17995992299997009563 == (arr_7 [i_10]))) ? ((((arr_35 [i_10]) ? (arr_23 [i_10] [i_10]) : (arr_24 [i_10])))) : ((var_1 ? (arr_17 [i_10] [i_10] [2]) : var_8)))), (arr_30 [i_10])));

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_40 [i_10] = (((((~(arr_31 [i_10])))) ? (((arr_31 [i_10]) & (arr_31 [i_10]))) : (min((arr_31 [i_10]), (arr_31 [i_10])))));
            arr_41 [i_10] = (arr_30 [i_10]);
            var_30 = arr_39 [i_11];
        }
    }
    var_31 = (max(var_31, var_8));
    var_32 = var_8;
    #pragma endscop
}
