/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((var_18 * var_3) - var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_21 -= ((var_4 ? (arr_2 [10]) : var_16));
                        arr_10 [i_0] [i_1] [i_2] [0] [20] [i_0] = (arr_8 [i_0] [18] [i_2] [i_3]);
                        var_22 = (((((((var_11 ? 127 : (arr_2 [i_1]))) - (arr_4 [i_3] [1] [i_3] [1])))) ? 22 : (arr_5 [i_1])));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_1] [i_1] = var_16;
                            var_23 = ((-113 != ((var_17 ? var_9 : var_2))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_24 = var_3;
                            arr_16 [i_1] [i_5] = -102;
                            arr_17 [i_0] [11] [i_2] [i_1] [i_0] = (min(var_2, (((62 && var_4) == ((var_4 ? var_19 : var_10))))));
                            var_25 = ((var_10 ? ((((arr_14 [i_0] [i_0] [i_2] [i_3] [i_5]) ? 62 : -1))) : (((var_5 & var_15) / var_6))));
                            arr_18 [i_1] [i_1] [1] [i_2] [i_3] [i_5] = (min((max((arr_5 [i_1]), (var_15 % 62))), ((((min((arr_11 [i_0] [i_5] [i_2] [i_3] [i_0] [i_5] [i_2]), (arr_7 [i_1] [i_1] [i_3] [i_1]))) > (((var_12 ? var_7 : 6723))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_26 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_27 = (((arr_0 [i_0] [i_1]) >> (7129326356792970535 - 7129326356792970513)));
                        var_28 = ((-(40 & 65528)));
                    }
                    var_29 = ((~((((var_18 == (arr_8 [i_2] [5] [i_2] [i_2]))) ? (((arr_20 [i_0] [i_1] [i_2] [i_1]) ? (arr_12 [i_1]) : var_14)) : -var_5))));
                }
            }
        }
        arr_21 [i_0] = ((-(min(var_9, (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_30 = (((arr_23 [i_7]) || (arr_2 [i_7])));
        var_31 = (min(var_31, ((((arr_5 [12]) ? 124 : (arr_22 [0]))))));
        var_32 = (max(var_32, -var_0));
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            arr_29 [i_8] [i_8] [i_8] = var_11;
            var_33 = ((((min(var_14, 1)))) & ((((min((arr_25 [i_8]), (arr_12 [i_9])))) ? ((((-114 == (arr_8 [i_8] [i_8 + 1] [i_8] [i_8]))))) : ((~(arr_5 [i_9]))))));
            var_34 = -124;
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_35 += (max(((var_11 ? 64 : (((arr_33 [i_8] [i_12]) + var_9)))), -var_3));
                            var_36 *= var_4;
                            var_37 -= (arr_5 [i_11]);
                        }
                    }
                }
            }
            var_38 |= ((+((var_9 ? (arr_8 [i_8] [i_8 + 1] [i_10] [i_8 + 1]) : (arr_8 [i_8] [i_8 - 1] [19] [19])))));
            var_39 = (max(var_39, var_0));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            var_40 |= var_6;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_53 [i_8 + 2] [16] [15] [16] [i_15] [i_16] [i_16] = var_18;
                            var_41 -= var_15;
                        }
                    }
                }
            }
            var_42 += ((var_13 ? 64262 : 167));
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 17;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 18;i_19 += 1)
                {
                    {
                        arr_59 [i_8] [i_18] [i_18] [i_18] = (((arr_33 [i_14] [i_8 + 2]) > (arr_5 [i_18])));
                        arr_60 [i_8 + 2] [i_18] [i_8 + 2] [i_19 - 2] = var_15;
                        var_43 += (((arr_12 [i_19]) ? 1 : (arr_12 [i_19])));
                        arr_61 [i_18] = -var_10;
                        arr_62 [i_18] [10] [i_18 - 1] [i_19 - 2] = (((arr_12 [i_18]) + -101));
                    }
                }
            }
        }
        arr_63 [i_8] = var_5;
    }
    #pragma endscop
}
