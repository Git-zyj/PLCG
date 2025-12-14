/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-var_2 ? (max(var_2, var_1)) : ((((var_10 != (var_10 != var_12)))))));
    var_14 = (max((var_0 * var_11), -1));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = (~var_5);
        arr_2 [i_0] [i_0] = ((1 | ((+(((arr_1 [i_0 + 1]) - 1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (max(var_16, ((max((min(var_11, (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 2]))), (var_8 | var_11))))));
                        var_17 = var_2;
                        arr_11 [i_0] [i_1] [i_0] = var_4;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_18 = (((var_4 || var_9) * var_2));
                        var_19 = var_1;
                        var_20 = ((((var_4 ? (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_12 [i_0] [5] [i_2] [i_0]))) % 1));
                    }
                    arr_14 [i_0] = (((var_6 + 2147483647) << (((arr_6 [i_2]) - 520402747512230229))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [4] [1] [i_5] [i_5] [8] [i_0] = (arr_10 [i_0] [i_1] [i_2] [i_5]);
                        arr_19 [i_0] = ((1 < (((var_1 < (arr_9 [i_5] [i_2] [2] [4] [i_0 - 1]))))));
                        arr_20 [i_0] [i_1] [i_1] [i_5] [i_0] = var_6;
                        arr_21 [i_0] [i_0] [i_0] [i_5] = (((arr_0 [i_0 - 1] [i_0]) ? var_7 : (var_5 & var_12)));
                        arr_22 [1] [0] [1] [0] [1] [i_5] &= (((arr_5 [i_5]) || (arr_16 [1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        var_21 = (!var_1);
                        arr_27 [6] [i_1] [i_2] [i_0] = (((var_4 + var_6) / (arr_5 [i_2])));
                    }
                }
            }
        }
        var_22 *= var_9;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_23 ^= (arr_29 [i_7 - 1]);
        var_24 = (max(var_24, var_4));
        arr_30 [i_7] = (~-1);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                {
                    var_25 = (!var_0);
                    var_26 ^= var_6;
                }
            }
        }
        arr_38 [i_8] = arr_35 [i_8 + 1] [i_8 + 1] [i_8 + 1];
        var_27 ^= var_5;
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_28 = ((var_2 >> ((((var_5 / (arr_39 [i_11] [i_11]))) - 13687565173621080903))));
        var_29 -= max((((max(var_0, var_10)))), (~var_5));
    }
    var_30 = ((+(max((63690 < var_3), (var_7 * var_0)))));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        arr_43 [i_12] [i_12] = ((~((~(arr_40 [i_12])))));
        arr_44 [i_12] = ((~(((arr_41 [i_12] [11]) ? (arr_34 [i_12]) : 5131))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    {
                        var_31 += ((!(arr_49 [i_14 - 1] [i_14 - 1] [9])));
                        arr_53 [i_15 - 1] = (arr_34 [0]);
                        arr_54 [i_12] [i_12] [i_12] = var_10;
                        arr_55 [i_12] [i_12] [i_13] [i_14] [i_15 - 1] = ((1 | (arr_41 [i_14 - 4] [i_14 - 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        var_32 = (arr_40 [i_16]);
        var_33 -= var_4;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        arr_62 [i_17] = -var_2;
        var_34 = (min(var_34, ((((arr_60 [i_17] [i_17]) ? var_6 : var_11)))));
        arr_63 [18] = (arr_61 [i_17]);

        for (int i_18 = 4; i_18 < 20;i_18 += 1)
        {
            var_35 = (arr_60 [i_18 - 1] [i_18 + 1]);
            arr_66 [i_17] [19] = ((-(arr_65 [i_18 - 2])));
            var_36 = (((arr_65 [i_18 - 4]) & (arr_60 [i_18 - 1] [i_18 + 2])));
        }
    }
    #pragma endscop
}
