/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 -= (arr_2 [i_0] [i_0]);
        var_21 -= (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_22 = ((-(((((arr_1 [i_1]) ? -26 : var_10)) | 1))));
        arr_5 [i_1] = (max(((~(arr_4 [i_1 - 1]))), (((((((arr_2 [i_1 + 2] [i_1]) ? 0 : (arr_1 [i_1])))) || (arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_23 -= (arr_2 [i_2] [i_2]);
        var_24 = (max(((((arr_2 [i_2] [i_2]) ? (((arr_1 [i_2]) ? (arr_2 [i_2] [i_2]) : 0)) : var_4))), (((0 ? -649900575 : (arr_4 [i_2]))))));
        arr_9 [i_2] = (min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])));
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_15 [10] [i_4] = (arr_10 [i_3 - 1]);
            var_25 = (((arr_13 [i_4]) & (((!(arr_3 [i_4]))))));
            var_26 = (arr_10 [i_4]);
            var_27 = (+(((arr_10 [i_3 - 1]) >> 17)));
        }
        var_28 = (((arr_11 [i_3 - 1]) ? (arr_14 [i_3]) : ((~(arr_11 [i_3 + 1])))));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_29 = ((((((((arr_1 [i_5 + 1]) ? (arr_11 [i_5]) : (arr_12 [i_5] [i_5] [i_5 - 1])))) ? (min((arr_16 [i_5]), (arr_2 [i_5] [i_5]))) : (arr_4 [i_5])))) ? (((((var_2 ? (arr_18 [i_5]) : (arr_2 [i_5] [i_5]))) > ((min((arr_3 [i_5]), 106)))))) : (min(((((arr_0 [i_5] [i_5]) && (arr_13 [i_5])))), -7743)));
        var_30 = (max(var_30, 21));
        var_31 -= ((((!(arr_3 [i_5])))));
    }
    var_32 -= ((((((var_9 ? var_5 : 7745))) ? var_3 : ((min(var_18, var_19))))));
    var_33 = (((var_9 * var_4) ? var_4 : (((((var_16 ? var_16 : 2017810135))) ? (((max(37165, var_18)))) : var_2))));
    #pragma endscop
}
