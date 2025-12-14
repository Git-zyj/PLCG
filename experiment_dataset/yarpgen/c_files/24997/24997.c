/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [i_0] [i_0] = ((!(arr_1 [15] [10])));
        var_14 = (((!3458764513820540928) ? (((var_2 != (arr_2 [i_0])))) : var_0));
    }
    var_15 = (!var_5);

    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = ((14987979559889010687 | (min(var_7, var_11))));
        arr_9 [i_1 - 1] [18] = (min((((min(14987979559889010682, var_5)))), (18446744073709551615 + 18446744073709551615)));
        arr_10 [i_1 - 2] = (max(3458764513820540933, ((((3458764513820540929 < var_5) < ((var_3 ? var_1 : var_8)))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 = ((((~(arr_1 [i_2] [i_2]))) & (arr_2 [i_2])));
        arr_13 [i_2] = arr_2 [i_2];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_4] [12] [21] = arr_19 [i_4];

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_4] = ((-(arr_26 [i_3] [i_5 + 1] [10] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 3])));
                            var_17 = var_9;
                            var_18 = var_11;
                            arr_28 [i_3] [i_4] [i_5] [i_3] [i_3] [i_6] [i_3] = var_12;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] = 65535;
                            var_19 = ((-3458764513820540908 == (arr_18 [i_5 - 2])));
                            arr_32 [i_3] [i_4] [i_5 + 1] [i_3] [i_8] [i_3] = (arr_20 [i_3] [18] [13]);
                            arr_33 [i_3] [i_4] [i_5 - 1] [i_6] [i_3] = (arr_20 [i_5 + 1] [i_5 - 3] [i_5 + 1]);
                            var_20 = 3458764513820540928;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_37 [0] = var_5;
                            arr_38 [i_3] [i_4] [i_4] [i_6] [i_9] = ((0 ? var_2 : ((0 | (arr_15 [i_4])))));
                            var_21 = (((((arr_22 [i_3] [i_3]) << (238 - 229)))) * var_6);
                        }
                    }
                }
            }
        }
        arr_39 [i_3] = ((var_6 ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_20 [i_3] [i_3] [i_3])));
        arr_40 [i_3] = ((var_6 >> (var_3 - 99)));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 23;i_11 += 1)
            {
                {
                    arr_46 [i_3] [6] = var_5;
                    arr_47 [21] [i_10 - 1] [i_11] = ((~(arr_18 [i_10 + 1])));
                    var_22 = (arr_44 [i_3] [i_3]);
                    arr_48 [i_3] [i_10 + 1] [i_11 + 1] = (~0);
                    arr_49 [0] [i_3] [i_10] [23] = ((-(arr_45 [i_3] [i_10 + 1] [13])));
                }
            }
        }
        arr_50 [i_3] [i_3] = 3458764513820540905;
    }
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        arr_53 [i_12 + 2] = var_11;
        var_23 = max((arr_0 [4]), ((~(~3458764513820540900))));
        var_24 = (((((max(var_5, 65535)) >> (((65535 / 236) - 252)))) % ((((arr_12 [i_12 - 2]) ? (arr_44 [20] [20]) : (((arr_22 [i_12 - 2] [i_12]) - (arr_45 [i_12 - 2] [i_12 - 1] [i_12]))))))));
    }
    #pragma endscop
}
