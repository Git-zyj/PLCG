/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_13 ? 0 : 65535))) ? var_9 : 65535))) ? var_2 : (min(var_1, ((65535 ? 18446744073709486072 : 65535)))));
    var_18 = 65535;
    var_19 = (min(((((min(var_1, 65544))) ? (min(var_1, var_9)) : var_0)), (~65539)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (((~var_3) ? (~18446744073709486080) : ((~(min(65540, 65540))))));
                            var_21 = 65550;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = ((-(min(((18446744073709486075 ? 18446744073709486075 : (arr_12 [17] [17] [17]))), (arr_4 [i_0])))));
                            arr_18 [i_5] [i_5] [i_4] |= var_11;
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min((arr_7 [i_5] [i_5] [i_5] [i_5]), ((var_5 ? var_1 : (arr_8 [i_0] [i_1] [i_0] [i_5]))))), ((min((arr_5 [i_5] [i_4] [i_1]), (((var_4 ? (arr_13 [i_0] [i_1]) : var_5))))))));
                        }
                    }
                }
                var_23 = (((((var_6 ? var_2 : (min(65552, var_2))))) ? (((arr_15 [i_0] [i_0] [i_0] [i_1] [i_1]) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (var_8 != var_0))) : (((((var_13 ? 65535 : (arr_3 [i_1] [6] [i_0])))) ? (((var_12 > (arr_12 [i_0] [i_0] [i_1])))) : var_6))));
                arr_20 [i_1] [i_1] = (min((~var_16), (((((arr_10 [i_1] [i_1] [16] [i_0] [i_0] [i_1]) <= var_15)) ? (min(var_5, 18446744073709486075)) : (((var_15 ? (arr_3 [i_0] [i_1] [4]) : var_3)))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [i_7] [21] [i_7] [i_8] [18] = ((var_8 ? (min((arr_29 [i_8] [i_7] [i_6] [11] [16] [i_1] [i_0]), ((var_16 ? 65540 : 18446744073709486098)))) : (arr_22 [i_8] [i_1])));
                                var_24 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 7;i_13 += 1)
                        {
                            {
                                arr_46 [i_9] [i_10] [i_11] [6] = (min((((var_2 ? -var_0 : ((var_1 ? var_5 : var_16))))), (((((18446744073709486066 ? 65576 : 18446744073709486063))) ? ((var_4 ? 65573 : var_16)) : (min(18446744073709486066, 65553))))));
                                var_25 = 18446744073709486073;
                                var_26 = ((~((18446744073709486064 ? (arr_41 [1] [i_12] [1] [i_13 + 3] [1] [i_13 - 1]) : (arr_41 [i_11] [2] [i_11] [i_13 - 2] [2] [i_13 - 3])))));
                            }
                        }
                    }
                }
                var_27 = (arr_8 [i_10] [i_10] [i_10] [i_9]);
                var_28 = (!((min((min(65564, 65543)), (arr_24 [i_9] [i_10] [19])))));
                var_29 -= (min((((((var_4 ? (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_10]) : 18446744073709486064))) ? 65543 : 18446744073709486068)), var_4));
            }
        }
    }
    #pragma endscop
}
