/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-var_3 >> (var_9 + 9143))) == ((((231392437014072346 ? 757 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_7;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((-399934114 ? (((arr_11 [i_0] [i_1] [i_1] [i_3]) ? (arr_1 [i_4]) : (arr_13 [i_4] [i_3] [i_2 + 1] [i_1] [i_0]))) : (arr_7 [i_0] [i_0] [i_0] [i_1])));
                                var_14 *= (((arr_8 [i_0] [i_0] [i_0]) <= (arr_9 [0] [i_2 + 1] [i_2] [i_2 - 1])));
                                arr_14 [i_0] [i_1] [13] [i_1] [13] = (((arr_5 [i_2 - 1]) * ((var_7 ? var_0 : var_11))));
                                var_15 = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_6] [i_2] [i_0]);
                                var_16 ^= var_11;
                            }
                        }
                    }
                    arr_23 [i_2] [1] [1] [i_0] &= 1762815658;
                    var_17 &= arr_17 [i_0] [12] [i_1] [10] [i_1];
                    arr_24 [i_0] [i_1] [i_0] [i_2] = (-((((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) == 1))));
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_18 = ((-18186 ? ((var_4 ? (arr_17 [i_1] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_9]) : (arr_11 [i_7] [i_7 + 1] [i_1] [i_8 + 3]))) : (~10)));
                                arr_32 [i_1] [i_7] [i_1] [i_9] = (max(2981476391, (((74 <= 2861925780) / (((arr_30 [9] [i_1] [i_7 - 1] [i_1] [i_9]) | (arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_1])))))));
                                var_19 = 626955420;
                            }
                        }
                    }
                    arr_33 [i_7 - 1] [i_1] [i_1] [i_0] = 469286051;
                    arr_34 [i_1] = (arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_1]);

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_20 -= (((var_0 * (arr_36 [i_7 + 1] [i_7] [i_7 + 1]))));
                        var_21 = (min(var_21, ((min((min((arr_9 [i_0] [i_7 - 1] [i_7] [i_10]), var_5)), (max((arr_9 [i_10] [i_7 - 1] [i_7 - 1] [10]), 0)))))));
                        arr_37 [i_0] [i_1] [i_7] [i_10] = -469286039;
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] = (93 / 181);
                    }
                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            arr_43 [i_0] [i_1] [i_1] [i_11 + 1] [i_1] [i_1] [i_1] = max(((max(var_6, (arr_40 [i_12] [i_11 + 3] [i_7] [i_1])))), (((arr_27 [i_11 + 3] [i_1] [i_1] [i_7 - 1]) - (arr_25 [i_7] [i_1] [i_12]))));
                            var_22 = 74;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_23 = (arr_4 [i_0] [i_1] [i_7 - 1]);
                            arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_18 [i_0] [i_1] [i_7 + 1] [i_13] [i_13]);
                            arr_48 [i_0] [i_7] [i_7] [i_1] [i_13] = -28877;
                        }
                        arr_49 [i_1] = (((max(7, 41666))) != var_7);
                        var_24 = (min(var_24, var_8));
                        arr_50 [i_1] = (arr_16 [i_0] [i_1] [i_7 + 1] [i_11]);
                    }
                }
            }
        }
    }
    var_25 = var_11;
    var_26 = ((((max(((32018 ? var_5 : var_0)), (var_6 == 41666)))) ? (((var_8 ? (16518 && var_10) : (var_6 <= var_8)))) : 4294967295));
    #pragma endscop
}
