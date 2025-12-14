/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = (max((((~62715) ? (((arr_0 [i_0]) ? var_7 : (arr_0 [i_2]))) : (((var_3 ? var_6 : var_1))))), (((var_7 < (arr_3 [i_1 - 2] [i_2 + 1]))))));
                    var_11 = ((~((218 ? ((var_2 ? var_8 : 766871172)) : (min((arr_2 [i_2] [4]), var_1))))));
                    arr_8 [0] [i_1 - 2] [i_2 + 1] [i_1 + 1] = var_4;

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_12 = ((+(((arr_10 [1] [i_2] [i_2 - 1] [i_2 - 2]) ? 18446744073709551586 : (arr_2 [i_0] [i_1])))));
                        var_13 = ((+(((arr_3 [i_3] [i_2]) ? var_5 : (min(var_9, var_6))))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_0] &= var_0;
                        var_14 = ((!(arr_11 [i_1] [i_2])));
                        var_15 = (((((~((18446744073709551586 ? var_3 : var_7))))) ? ((((min(var_9, var_6))) ? ((min((arr_7 [i_0] [i_1] [i_2] [i_4]), 1))) : (arr_13 [i_0] [i_1] [i_2] [i_4]))) : ((min((arr_1 [i_0] [i_1 + 1]), var_8)))));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_16 = ((min(((~(arr_17 [i_5] [2]))), (42 % var_7))));
        var_17 = (arr_18 [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_18 = (((~0) ? (arr_19 [i_6] [i_6 + 1]) : ((-(arr_20 [i_6 + 1])))));
        var_19 = ((+(((arr_22 [2]) ? ((((arr_19 [i_6] [i_6]) ? (arr_20 [13]) : (arr_19 [i_6 + 1] [i_6])))) : (~var_9)))));
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_20 ^= arr_25 [i_7];
        var_21 *= var_7;
        arr_26 [2] = min(62736, (((~var_3) & (min(var_7, var_3)))));

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_37 [i_7] [i_9] [i_9] = (((((((((arr_31 [i_9]) ? (arr_32 [i_9] [i_8] [i_9]) : (arr_33 [i_7] [i_7] [i_7])))) ? (arr_30 [i_7 + 1]) : var_8))) ? (((arr_28 [i_7 + 2] [i_7 + 2] [i_7 + 1]) ? ((var_1 ? var_9 : (arr_23 [i_7 + 2]))) : (arr_23 [i_7 + 1]))) : (((18446744073709551574 ? (((arr_31 [i_8]) ? (arr_35 [i_7] [i_7] [i_7 - 1] [11]) : -595081554)) : (18446744073709551594 > 18446744073709551556))))));
                            var_22 = ((((((var_3 ? var_3 : (arr_30 [i_7]))))) ? var_2 : (max(var_7, (arr_34 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1])))));
                            var_23 = ((((((arr_23 [i_7 - 1]) ? var_6 : (arr_23 [i_7 + 1])))) ? var_0 : (((arr_23 [i_7 + 2]) % var_0))));
                        }
                    }
                }
            }
            var_24 = var_3;
            var_25 = (max(var_25, (((((((max(var_2, var_7))) || (arr_35 [i_7] [i_8] [i_7 + 2] [i_7]))) ? 1 : -946731366)))));
            arr_38 [i_7] [i_8] = ((((((((arr_24 [i_7 - 1] [i_7 + 1]) > (arr_36 [i_7] [i_7] [i_7 - 1] [i_8] [i_8])))) % ((62736 ? -2083180661 : var_6))))) ? (((~(((var_3 < (arr_28 [i_7] [i_7] [i_7]))))))) : ((((max(12088490069491852972, var_6))) ? (((arr_27 [i_8]) ? (arr_24 [1] [i_8]) : 18446744073709551586)) : ((var_0 ? (arr_24 [20] [i_8]) : var_2)))));
            var_26 = (((arr_30 [i_7]) << (((((-595081554 + 2147483647) << (32767 - 32767))) - 1552402086))));
        }
    }
    #pragma endscop
}
