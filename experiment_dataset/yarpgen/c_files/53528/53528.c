/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_15 = 17145;
                        var_16 = (((((arr_2 [i_3] [2]) ? 34679 : (arr_1 [1] [i_1]))) ^ (arr_5 [i_0] [i_0] [i_1])));
                    }
                    var_17 = (arr_0 [i_1 - 1]);
                    var_18 = var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 = (min(1486537759, (min(1, var_3))));
                                var_20 = (min(var_7, ((var_13 >> (61 - 55)))));
                            }
                        }
                    }
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_21 *= (((max((arr_13 [i_6 - 3] [i_1 + 1] [i_0] [i_1] [4]), (arr_13 [i_6 + 1] [6] [i_0] [i_1] [i_1]))) + (2032787271813061262 || 255)));
                                var_22 = (((arr_14 [i_0] [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_6 + 1] [i_7] [i_1 + 1]) : var_11));
                                var_23 = (min(10321, -413760222));
                                var_24 = 4451897165457083143;
                            }
                        }
                    }
                    var_25 = (((min(-1, -5988770203252454320)) / 2693824971));
                    var_26 = (max(((max((1486537743 / var_13), -440125803))), ((var_1 ? ((var_13 ? 1472418570816852225 : 3458764513820540928)) : (arr_19 [i_6 - 3] [i_1 + 1] [i_1 + 1] [i_1])))));
                    var_27 ^= -13902;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_28 = (arr_7 [i_0] [i_1 + 3]);
                                var_29 = (((-1486537784 || 16676903698013581893) < (var_1 + var_4)));
                                var_30 = (max(var_11, var_3));
                            }
                        }
                    }
                }
                for (int i_11 = 3; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    var_31 = (((((((arr_13 [i_0] [i_0] [i_1] [i_11 - 3] [i_11]) ^ var_3)) + 4611677222334365696))) ? ((var_8 ? (arr_20 [i_1] [i_1 + 1] [3]) : (arr_3 [0] [i_1]))) : ((var_7 >> (arr_10 [i_1]))));
                    var_32 = (min((arr_7 [i_11 - 2] [i_0]), 7984709527071854209));
                }
                /* vectorizable */
                for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_33 = ((var_5 ^ (arr_5 [i_0] [i_0] [i_1])));
                    var_34 = (((((-1486537771 ? (arr_4 [i_1] [i_1]) : 52))) ? (arr_6 [9] [i_0] [i_1]) : var_6));
                    var_35 = (i_1 % 2 == 0) ? (((((529713043989041548 << (3616837375 - 3616837363))) >> (((arr_8 [i_0] [i_1] [i_1]) - 1165312943))))) : (((((529713043989041548 << (3616837375 - 3616837363))) >> (((((arr_8 [i_0] [i_1] [i_1]) - 1165312943)) - 1275830258)))));
                }
                var_36 = (i_1 % 2 == 0) ? ((((arr_30 [i_0] [2] [i_0] [i_0] [i_1]) >> (((max((((arr_9 [i_1] [i_0] [i_0] [i_1] [10]) ? (arr_14 [i_0] [i_0] [i_1]) : (arr_17 [i_0] [i_1 - 1] [i_1] [i_1] [i_1]))), (var_0 < 2147483647))) - 16106243675960153262))))) : ((((((arr_30 [i_0] [2] [i_0] [i_0] [i_1]) + 2147483647)) >> (((((max((((arr_9 [i_1] [i_0] [i_0] [i_1] [10]) ? (arr_14 [i_0] [i_0] [i_1]) : (arr_17 [i_0] [i_1 - 1] [i_1] [i_1] [i_1]))), (var_0 < 2147483647))) - 16106243675960153262)) - 4123725423033178106)))));
                var_37 = (max(var_37, var_1));
            }
        }
    }
    var_38 = (max(var_38, ((((max(255, var_13)))))));
    #pragma endscop
}
