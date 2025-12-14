/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 && ((min(var_5, var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((((arr_12 [i_3 + 1] [i_1] [i_2 + 4]) ? (arr_9 [i_3 + 1] [i_3 + 1] [i_2 + 1]) : var_11))) ? (((((arr_12 [i_3 - 3] [i_1] [i_2 + 1]) || (arr_12 [i_3 - 3] [i_1] [i_2 + 2]))))) : (min((arr_12 [i_3 - 1] [i_1] [i_2 + 1]), var_7)))))));
                                var_22 = (((-1674674756 ? 2 : (arr_4 [i_3 - 3] [i_2 + 4] [i_4 - 1]))));
                                arr_13 [i_0] [i_4 - 1] [i_0] [i_1] [i_4] &= ((432939999 ? 14634931535357764158 : 3811812538351787437));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_0] = ((~((var_19 & (min(var_12, var_6))))));
                var_23 = min((arr_6 [i_0] [i_0]), (max((arr_7 [i_0] [i_1]), (arr_7 [0] [i_1]))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_24 += (2059203195 == 1);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_25 = ((((min((min(var_19, var_11)), (arr_5 [i_7] [i_1] [i_5])))) ? ((((arr_6 [i_5] [i_6]) || (!432939999)))) : var_17));
                                arr_23 [i_0] [i_1] [i_0] [i_6] [i_1] &= ((~((~(min((arr_3 [i_5] [i_6]), 11943028253804579578))))));
                                var_26 = (min(var_26, ((min(((max(var_9, (~var_13)))), (((var_15 < 1) ? (var_16 >= 7853652421563138223) : (arr_1 [i_0] [i_1]))))))));
                            }
                        }
                    }
                    var_27 = 7670291270267462654;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 = (min(var_28, ((min((min(1, 14634931535357764149)), ((min(15, var_13))))))));

                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        var_29 = ((max((!3911906436), (arr_25 [i_9] [i_9 + 1] [i_8] [i_9 + 1]))));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_34 [i_8] = (((((18446744073709551615 ? (arr_15 [3] [i_9 - 1] [i_1] [i_10]) : (arr_15 [i_0] [i_9 + 1] [i_8] [i_8])))) ? (!4294967295) : var_9));
                            arr_35 [i_0] [0] [1] [i_0] [i_0] [i_8] [i_0] = var_17;
                            var_30 = -2147483647;
                            var_31 = var_9;
                            arr_36 [i_8] [i_8] = (min(((-((-63927448 ? 3862027297 : var_5)))), (min((min(936750152, 8160)), (min(2059203195, var_11))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_32 = (max(var_32, (((~(((var_3 < (arr_17 [i_0] [i_1] [i_8])))))))));
                            var_33 = ((((((arr_31 [i_8] [i_8] [i_12] [i_12] [i_12]) ? (arr_18 [i_12] [i_1]) : var_10))) ? 3862027308 : (((min(((!(arr_2 [i_0]))), (!var_14)))))));
                        }
                        arr_41 [i_8] [i_0] [i_0] [i_0] [11] = ((1 ? var_14 : var_12));
                        var_34 = var_3;
                    }
                    var_35 += ((0 - 1873995686) ? 1875482676 : var_4);
                }
            }
        }
    }
    #pragma endscop
}
