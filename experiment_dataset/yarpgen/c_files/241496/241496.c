/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 >= ((-(min(var_7, var_9))))));
    var_15 = (min(-7855, ((~(min(var_8, var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((arr_0 [i_0]) & 34949);
        arr_2 [4] [i_0] = (((arr_0 [i_0]) ? 47434 : var_8));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 = (((((((31 != (arr_3 [i_1] [i_1]))) ? (9223372036854775803 > var_5) : ((-(arr_4 [i_1] [i_1])))))) % var_12));
        var_18 ^= 62;
        arr_5 [i_1] = (max(((~((var_13 % (arr_4 [8] [8]))))), ((min(42297, (arr_3 [i_1 + 1] [i_1 + 2]))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] [i_2 - 1] = var_4;
        arr_9 [i_2] = (1 | var_0);
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_19 = (~var_5);
        arr_12 [i_3] = -5731;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_20 = var_13;
        var_21 = ((35952 && (((var_7 ? ((var_2 ? var_10 : var_8)) : var_12)))));
        var_22 = ((max((arr_14 [i_4]), (arr_14 [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = 53259;

        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            var_23 = -23239;

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_24 [i_7] [i_7] [i_7] = ((var_2 ? 4111999666692367481 : (arr_21 [i_6 + 1] [i_6 + 3])));
                var_24 ^= var_1;
                var_25 = (((98 ? 107 : var_8)));
            }

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_26 = (arr_10 [i_6 - 2] [i_8]);
                var_27 = var_13;
                var_28 = (min(var_28, (((var_9 ? 251 : 15274)))));
                var_29 = (max(var_29, ((((var_6 ? -103470031133219007 : 43187))))));
                var_30 += ((-886194018 ? var_13 : (((127 ? var_1 : (arr_22 [5] [i_6] [5] [5]))))));
            }
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_31 ^= (((arr_26 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1]) ? (arr_26 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9]) : (arr_26 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9])));
                var_32 = var_7;
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] [i_10] = (arr_29 [10]);
        var_33 += 4294967292;
        var_34 = (((((arr_27 [i_10] [i_10] [i_10]) + 2147483647)) >> (17297 - 17274)));

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_39 [i_11] = (((arr_25 [i_11] [i_11] [0] [i_10]) ? var_8 : 42297));
            arr_40 [i_10] [i_10] [i_10] = (var_1 ? ((145 ? var_10 : 65535)) : 98127885);
            arr_41 [i_10] [9] [9] = (var_13 % 29090);
        }
    }
    #pragma endscop
}
