/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((max(var_2, var_18)))) - var_2));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((-3292671247637729399 ? -3292671247637729396 : -3292671247637729407))))));
        var_21 = var_12;
        var_22 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_23 += (max((((max(3292671247637729391, 3292671247637729387)))), (max((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_3)), (arr_3 [i_1])))));
        var_24 = (((arr_3 [i_1]) == ((max((arr_3 [i_1]), (arr_3 [i_1]))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                var_25 = (arr_6 [i_3 - 3] [i_3 - 3] [i_3 - 1]);
                var_26 = ((3292671247637729363 >> (((((-3292671247637729360 - 3292671247637729396) ? (var_2 | -3292671247637729399) : 3292671247637729396)) + 77))));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_27 -= (arr_4 [i_1]);
                var_28 *= ((-3292671247637729399 ? -3292671247637729382 : 3292671247637729370));
            }
            var_29 = (((arr_3 [i_1]) ? ((var_1 ? ((((arr_5 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_8 [i_2])))) : (arr_11 [i_1] [i_1] [i_1]))) : (arr_6 [i_1] [i_1] [i_1])));

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                arr_14 [i_1] [i_5] = (((arr_4 [i_1]) ? ((((var_6 / (arr_5 [i_5]))))) : (arr_7 [i_1] [i_5])));
                var_30 = (arr_12 [i_5] [i_5] [i_5 - 1] [i_5 + 1]);
                arr_15 [i_5] [i_2] [i_5] = (var_7 >= var_18);
                var_31 = (arr_2 [i_2]);
            }
            var_32 = (arr_13 [i_1] [i_2]);
            arr_16 [i_1] [i_1] = (((((((arr_4 [i_1]) ? (arr_4 [i_1]) : (max(3292671247637729408, 3292671247637729410)))) + 9223372036854775807)) << (var_4 - 8057)));
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_33 -= (arr_19 [i_7] [i_6]);
            var_34 = (arr_7 [i_6] [i_7]);
        }
        arr_23 [i_6] = ((((((((var_10 ? var_7 : var_1))) ? (arr_9 [i_6] [i_6]) : ((var_5 & (arr_6 [i_6] [i_6] [i_6])))))) ? (((((var_15 ? (arr_18 [i_6] [i_6]) : var_16))) ? var_17 : var_13)) : ((((max(var_1, (arr_22 [i_6] [i_6] [i_6]))))))));

        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_35 -= (arr_11 [i_6] [i_8 + 1] [i_8 + 1]);
            arr_27 [i_6] [i_8] [i_6] = (max((min(var_4, (arr_24 [i_8] [i_8 + 1]))), var_12));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_30 [i_6] = ((arr_22 [i_6] [i_9] [i_9]) | var_17);
            var_36 = var_8;
            var_37 = (max(var_37, var_16));
        }
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            var_38 = (arr_26 [i_10]);
            var_39 = (max(3292671247637729396, -3292671247637729401));
        }
    }
    var_40 = ((((max(var_11, var_11))) ? var_11 : (((var_18 + 9223372036854775807) << (((3292671247637729368 + 12262) - 62))))));
    #pragma endscop
}
