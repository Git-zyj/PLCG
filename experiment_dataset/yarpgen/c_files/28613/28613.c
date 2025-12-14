/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 ^= (min(-496707305, (113 ^ 60)));
                    var_19 = (min(var_19, (((!((max(((((((arr_1 [i_2]) + 2147483647)) >> (32315 - 32313)))), (min(var_17, var_13))))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] |= (((-9223372036854775807 - 1) ? (((-(arr_0 [i_3])))) : (arr_4 [i_3])));
        var_20 = ((((-(arr_4 [i_3]))) - ((((arr_6 [i_3]) + (arr_3 [i_3] [i_3]))))));
        arr_13 [i_3] = (((arr_6 [i_3]) + (arr_6 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = (var_15 * var_8);
        var_21 *= arr_2 [i_4] [i_4];
        arr_18 [i_4] [i_4] &= (~(((arr_10 [i_4]) ? (arr_4 [i_4]) : 18446744073709551615)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_22 ^= ((((min((((arr_29 [i_5] [i_5] [i_5] [7] [i_5] [i_5] [i_5]) / (arr_25 [i_5] [i_5]))), ((((arr_23 [i_5] [i_5] [i_5]) - var_10)))))) ? ((-(arr_16 [i_9]))) : (arr_10 [i_5])));
                                var_23 |= (max(((~(min(1, (arr_5 [i_5] [i_5] [i_7 - 1]))))), ((min(((((arr_8 [i_9]) > 113))), var_2)))));
                                arr_31 [i_7] = ((((min((arr_6 [i_7]), 96))) ? ((((arr_4 [i_5]) ? 17589 : ((max(var_11, (arr_21 [9]))))))) : (arr_11 [i_5])));
                                var_24 -= (min((((+((((arr_23 [i_9] [2] [i_6]) < (arr_22 [i_5] [i_5] [9]))))))), (((((-(arr_7 [i_7])))) ? ((min((arr_1 [i_5]), (arr_30 [i_5] [i_5] [10])))) : (min((arr_26 [i_5] [i_6] [i_8] [i_9 - 1]), (arr_11 [i_5])))))));
                            }
                        }
                    }
                    arr_32 [0] [i_7] = ((((min((min(0, (arr_15 [i_5]))), (arr_30 [i_6] [i_7 - 1] [i_7 + 2])))) ? (max((((arr_15 [i_7]) / (arr_19 [i_6]))), ((min((arr_5 [i_7] [i_6] [i_5]), var_15))))) : var_10));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_25 = (min(var_25, var_10));
                                var_26 *= (min(var_3, (max((arr_27 [i_5] [i_7 - 1] [i_5] [i_10] [i_11]), (arr_28 [i_6] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_11])))));
                                arr_39 [i_7] [i_10] [i_10] [i_7] [i_5] [i_7] = ((((min((arr_27 [i_5] [i_6] [i_7] [i_10] [i_7 - 1]), (arr_34 [i_5] [i_6] [i_7] [i_11])))) ? (min(((min((arr_19 [i_5]), (arr_27 [i_5] [i_6] [i_7] [4] [i_6])))), (((arr_33 [i_6] [i_6] [i_6]) ? var_17 : (arr_34 [i_5] [i_5] [i_7] [i_5]))))) : (min(var_8, (!var_15)))));
                            }
                        }
                    }
                    arr_40 [i_7] [i_6] [i_7 + 2] [i_6] = 143;
                }
            }
        }
        var_27 = (min(((-((-(arr_11 [i_5]))))), (((max(0, (arr_7 [i_5]))) + ((((arr_38 [i_5] [i_5] [i_5] [i_5]) ? (arr_8 [i_5]) : var_5)))))));
    }
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        var_28 &= ((-(arr_43 [i_12 + 1] [i_12 + 1])));
        var_29 = ((((min(var_2, -var_10))) || ((min((arr_44 [i_12]), ((min(var_12, (arr_44 [i_12 + 1])))))))));
        var_30 ^= (96 ? 2147483647 : (arr_43 [i_12] [i_12]));
        var_31 = (min(var_31, (arr_43 [11] [i_12 - 1])));
        arr_45 [i_12] = var_12;
    }
    #pragma endscop
}
