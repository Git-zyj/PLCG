/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = (-var_6 / -25);
        var_13 = 32767;
        var_14 = -18;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1 + 1] [i_0] [i_1] = ((-(arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 2])));
                        var_15 = var_1;
                    }
                }
            }
        }
        var_16 = ((((-(arr_6 [10]))) >= -1));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_17 = ((!(1766229070 % var_9)));
                        var_18 = (arr_4 [i_6] [i_5]);
                        arr_22 [5] [i_5 - 3] [i_6] [i_7] = (arr_3 [i_4]);
                    }
                }
            }
        }
        var_19 = (arr_5 [16] [16]);
        arr_23 [i_4] = var_4;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        arr_28 [i_8] = ((-(arr_10 [i_8] [i_8] [i_8 + 1] [i_8])));
        arr_29 [i_8] = ((!(!23)));
        var_20 = (((arr_19 [i_8]) <= (arr_8 [i_8] [i_8 - 1] [i_8 + 2] [i_8])));
        var_21 = var_9;
    }

    for (int i_9 = 4; i_9 < 9;i_9 += 1) /* same iter space */
    {
        var_22 = (((-(arr_10 [i_9] [i_9] [i_9 - 1] [i_9]))));

        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            var_23 = ((((~(arr_31 [i_9]))) | (((arr_4 [i_9 - 1] [i_9 - 4]) & (arr_4 [i_9 - 4] [i_9 - 4])))));
            arr_34 [1] [i_9] [i_9] = ((-((((arr_15 [i_9 - 4]) < (arr_15 [i_9 - 3]))))));
            var_24 = var_6;
            var_25 = (((18 & var_7) >> (var_5 - 6347740808302983191)));
        }
        for (int i_11 = 1; i_11 < 7;i_11 += 1)
        {
            var_26 = ((((!(arr_38 [i_11]))) && 1555208074));
            var_27 = (((--31277) * (arr_20 [i_9 - 3] [i_9] [i_11 + 1] [i_9] [i_11] [i_11 + 1])));
        }
        arr_39 [i_9] [6] = var_8;
    }
    for (int i_12 = 4; i_12 < 9;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = ((var_8 & (((((arr_31 [i_12]) + 2147483647)) >> (var_10 - 4553)))));
        arr_43 [i_12] = (((((~939524096) + ((~(arr_16 [i_12] [i_12]))))) | 20433));
        var_28 = ((-((var_6 / (arr_25 [i_12])))));
        var_29 = 2660849673;
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 9;i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] = (~242);
        var_30 = var_9;
        var_31 = ((!(var_8 < var_3)));
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 9;i_14 += 1) /* same iter space */
    {
        var_32 = ((arr_45 [i_14 + 1]) >> (((arr_3 [i_14 - 3]) - 358766472)));
        arr_50 [i_14] = 744814937;
    }
    var_33 = (~8619175952150629808);
    #pragma endscop
}
