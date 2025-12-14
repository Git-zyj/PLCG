/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = ((((arr_2 [12]) & (arr_0 [i_0 - 1]))));
        arr_3 [i_0] [i_0] = ((-(arr_1 [i_0 + 2] [i_0])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_21 = ((arr_2 [i_1]) ? (min((arr_4 [i_1]), 225601620)) : (((((1270906544 ? -2147483635 : (arr_0 [i_1 + 1])))) ? (((arr_4 [i_1]) & 52973)) : (arr_0 [i_1]))));
        arr_6 [i_1] = 52973;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = ((-((var_14 ? 0 : var_14))));
        var_23 = (3727114836 & 439643712);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_24 = 33988;
            arr_14 [i_3] [i_3] = ((((((!((min((arr_10 [i_4]), (arr_12 [i_3] [8] [i_4 - 1])))))))) | ((4294967295 ? (arr_1 [i_4] [i_3]) : 511))));
            arr_15 [i_4 + 2] = arr_0 [i_3];
            var_25 = (~52973);
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            var_26 = arr_0 [i_5 + 2];
            var_27 = (max(var_27, ((min((arr_1 [i_3] [i_5 + 2]), var_18)))));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            var_28 = (max(var_28, ((((arr_4 [i_3]) & 9)))));
            arr_22 [i_6] [i_6] [i_6] = (arr_1 [i_6] [i_3]);
            arr_23 [i_3] [i_6] = (62 * (((!(arr_1 [i_3] [i_6])))));
            var_29 = var_10;
        }
        arr_24 [i_3] = (arr_13 [i_3]);
    }
    #pragma endscop
}
