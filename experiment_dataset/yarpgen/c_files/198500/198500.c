/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((max((min(24, (arr_3 [i_1] [i_1] [i_0]))), (((!(arr_5 [i_1] [i_0] [i_0])))))));
                var_16 ^= (max(((((min((arr_3 [i_0] [1] [i_1 - 3]), (arr_5 [i_0 - 1] [5] [i_0 - 1]))) < (((arr_1 [10]) % var_7))))), (min(((max((arr_1 [1]), 1))), (arr_3 [i_1 + 1] [i_1] [i_1 - 2])))));
                var_17 = (((max((arr_0 [i_0]), (arr_0 [i_0]))) % (arr_0 [i_0])));
            }
        }
    }
    var_18 -= ((((((min(var_12, var_14))) ? var_10 : var_0)) <= (var_0 + var_3)));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = (arr_7 [i_2]);

        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_2] = (((arr_10 [i_3 + 3] [i_3]) == (var_8 + 1)));
            var_20 = (arr_6 [i_3 + 2]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_15 [i_4] [i_2] = (arr_9 [i_2]);
            var_21 = (arr_11 [i_2]);
            var_22 -= var_13;
            var_23 = (((arr_9 [i_4]) * (arr_9 [i_2])));
        }
        var_24 = (arr_7 [i_2]);
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_25 = (max((arr_11 [i_5 - 2]), (arr_11 [i_5 - 2])));
            arr_20 [i_5] = (min((arr_9 [i_6]), var_13));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_26 -= (arr_6 [i_9]);
                            var_27 = (arr_22 [i_5]);
                            var_28 = (arr_22 [i_6]);
                        }
                    }
                }
            }
        }
        var_29 &= (((((((arr_18 [i_5] [i_5 - 1] [i_5]) == var_11)))) <= (max((arr_21 [2] [i_5 + 2]), (arr_18 [i_5] [i_5 + 2] [i_5 + 1])))));
        var_30 -= (((arr_22 [2]) << (((min((min((arr_18 [i_5] [i_5] [i_5]), var_8)), (arr_8 [i_5 - 2]))) - 1))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_31 = (max(((((arr_31 [i_10] [i_10]) <= (arr_31 [i_10] [i_10])))), (arr_28 [i_10] [i_10])));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_32 = (((arr_29 [i_10] [i_10]) + (arr_31 [i_10] [i_10])));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 24;i_13 += 1)
                {
                    {
                        var_33 ^= ((((arr_32 [i_12]) ? 1 : (arr_34 [i_12] [i_11] [i_12]))));
                        var_34 = ((((507904 << (var_8 - 1659830806))) < (arr_35 [15] [15] [i_13] [i_13 - 1])));
                        var_35 = ((-(arr_30 [i_10])));
                    }
                }
            }
            arr_41 [i_10] [i_10] = (arr_36 [i_10] [i_10] [i_10]);
            arr_42 [i_10] [i_11] = (3678777674 * var_11);
            var_36 = (arr_36 [i_10] [i_11] [i_11]);
        }
        /* vectorizable */
        for (int i_14 = 4; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_37 = (((arr_40 [i_14 - 2] [i_14 - 4]) * (arr_40 [i_14 - 4] [i_14 - 2])));
            var_38 = (((arr_37 [i_14 + 1] [i_14 - 2] [i_14 - 1] [2]) || (arr_29 [i_10] [i_10])));
        }
        for (int i_15 = 4; i_15 < 23;i_15 += 1) /* same iter space */
        {
            arr_51 [i_10] = (max((arr_48 [i_15 - 3]), ((((((arr_39 [i_10]) ? (arr_38 [i_10]) : 127)) >= var_13)))));
            var_39 = (arr_48 [i_15]);
            arr_52 [i_15] [i_15] &= (arr_43 [i_15] [i_10] [i_15]);
            var_40 = ((((~(arr_45 [i_15 - 2]))) ^ ((((arr_29 [i_15 - 4] [i_10]) < (arr_30 [i_10]))))));
        }
        arr_53 [i_10] = (((((arr_49 [i_10] [19] [19]) << (((arr_49 [i_10] [i_10] [i_10]) - 3189726134)))) >= (arr_49 [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {

        for (int i_17 = 2; i_17 < 11;i_17 += 1) /* same iter space */
        {
            var_41 = (((arr_26 [i_16] [i_17 + 2] [i_17 + 2] [i_17 + 1] [i_17 + 2] [i_17 - 1] [i_17 - 2]) < (arr_26 [i_16] [i_17 + 2] [i_17 + 2] [i_17 + 1] [i_17 + 2] [i_17 - 1] [i_17 - 2])));
            var_42 = (((((arr_23 [i_17] [i_16] [i_17 - 1] [i_17 + 2] [i_17 + 2]) + 2147483647)) << (((((arr_38 [i_17]) + var_9)) - 12664913915625334239))));
            var_43 = (max(var_43, (((arr_37 [i_17 + 2] [i_17 + 2] [i_17] [i_17]) ? (arr_26 [i_16] [i_17 - 1] [i_17] [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17 + 1]) : (arr_34 [i_17 - 1] [i_17 + 1] [i_16])))));
            var_44 = (arr_33 [i_17] [i_17] [i_17]);
        }
        for (int i_18 = 2; i_18 < 11;i_18 += 1) /* same iter space */
        {
            var_45 &= (((!65501) ^ (arr_34 [i_16] [1] [i_16])));
            var_46 = (arr_56 [i_16] [i_18]);
            var_47 ^= (((arr_29 [i_16] [i_16]) ^ (arr_29 [i_16] [i_16])));
            var_48 = ((var_13 / (((-7637128178434403535 + 9223372036854775807) << (((((arr_33 [i_16] [i_16] [i_16]) + 12865)) - 9))))));
            var_49 = (((arr_23 [i_18 + 2] [i_16] [i_18 - 2] [i_16] [i_18]) < (arr_23 [i_18 + 2] [i_16] [i_18 - 2] [i_16] [i_16])));
        }
        var_50 = ((-32756 ? (arr_47 [i_16]) : (arr_47 [i_16])));
        arr_63 [i_16] = (((arr_35 [i_16] [i_16] [i_16] [i_16]) ? var_5 : (arr_35 [i_16] [i_16] [0] [i_16])));
        var_51 = (arr_49 [i_16] [i_16] [i_16]);
    }
    #pragma endscop
}
