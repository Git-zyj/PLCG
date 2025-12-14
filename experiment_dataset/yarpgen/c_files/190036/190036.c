/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_10 ? (min(var_8, var_12)) : var_12)), -var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = var_15;
        arr_3 [i_0 - 1] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] = (~var_9);
            arr_11 [i_1 + 1] [i_1] = (~((((arr_0 [i_1] [i_2]) <= (arr_9 [i_1] [i_2] [i_1])))));
            var_19 &= (arr_8 [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] = (((arr_13 [i_1 + 1] [i_1 - 1] [i_3]) <= var_14));
            var_20 = -var_13;
            arr_15 [i_1] [i_1] [i_1] = ((~((var_15 ? var_8 : var_8))));
            arr_16 [i_3] &= (arr_8 [i_1 - 1]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_4] = (((-355749125 + 2147483647) << (178 - 178)));
            var_21 = (min((((arr_0 [i_1 + 1] [i_1 - 1]) != var_16)), ((!(arr_0 [i_4] [7])))));
            arr_20 [i_1] = var_3;
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_23 [i_1] [i_1] [i_1] = (arr_0 [i_1] [i_1]);

            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_33 [i_7] &= ((((var_16 ? var_12 : (arr_29 [8] [i_7] [i_6 + 1] [i_7 - 1]))) & ((var_13 ? var_0 : var_5))));
                            arr_34 [i_1] = ((-(!var_12)));
                            var_22 = (arr_4 [i_1]);
                            arr_35 [i_1] [i_8] [i_7 - 1] [i_6 + 1] [i_5] [i_5] [i_1] = (((-(arr_4 [i_1]))));
                            arr_36 [i_1] [i_5] [i_5] [i_7] [i_5] [i_1] = (((var_0 ? var_15 : var_11)) & (((var_2 ? (arr_1 [15]) : var_16))));
                        }
                    }
                }
                var_23 = var_11;
                var_24 = ((((((-355749127 + 2147483647) << (355749125 - 355749125)))) ? (8946997513081720866 <= 355749127) : ((0 ? -1202511557 : var_14))));
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_41 [i_1] [i_1] = (arr_22 [i_9] [i_9]);
            var_25 = (max((arr_37 [i_1] [i_9] [i_1]), (((((var_12 ? (arr_0 [i_1] [i_9]) : var_3))) ? -var_1 : (max(var_1, var_15))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_26 = var_16;
        var_27 &= ((-((-(arr_5 [4])))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_28 = (arr_37 [i_11] [i_11] [i_11]);
        var_29 = (((arr_0 [i_11] [1]) ? var_0 : (~var_7)));
        arr_46 [i_11] [i_11] = ((var_10 ? var_8 : var_14));
    }
    #pragma endscop
}
