/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 -= (((arr_3 [i_2] [i_1] [i_0]) * (arr_3 [i_0 + 1] [i_0] [i_0])));
                    arr_8 [i_2 - 3] [i_2 + 4] [i_2] = arr_1 [i_0];

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (((arr_3 [i_3 - 1] [i_3] [i_3 - 2]) - ((max(1, 1)))));
                        var_12 = (max(var_12, var_4));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_18 [i_0 + 1] [i_1] [i_2] [i_4] [i_4] = ((((((arr_11 [i_1 + 2] [i_2] [i_2] [i_2 + 2] [i_2]) ? ((-(arr_4 [i_2 - 3] [i_1 + 2] [i_2 + 2]))) : var_2))) ? (arr_9 [i_2] [i_1] [i_2]) : (var_3 + -1)));
                        var_13 = max((((1 ? 32767 : 1))), ((-(arr_10 [i_0 + 1] [i_0] [i_2] [i_1 + 1]))));
                        var_14 = ((+((1 ? (((arr_0 [i_0] [i_1 + 1]) ? var_4 : 1)) : (arr_11 [i_1 - 1] [i_1 + 1] [i_2] [i_1] [i_1 + 2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_24 [i_5] [i_5] |= (((335737570 + 335737570) % (max((arr_22 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_2] [i_2 - 3] [i_1 + 2] [i_0 - 1])))));
                                var_15 = (max(var_15, ((((arr_15 [i_5] [i_5] [i_5] [i_0]) ? ((~(var_10 ^ var_5))) : ((var_10 ? (arr_7 [i_0]) : (((arr_6 [i_0 - 1] [i_1] [i_2] [i_5]) ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))))));
                                var_16 = (max(var_16, ((((((arr_21 [i_2 + 1] [i_5]) && (arr_5 [i_0] [i_6] [i_2]))) ? ((var_1 ? var_9 : (arr_10 [i_1 - 1] [i_1] [i_1] [i_1 + 2]))) : 1)))));
                                var_17 = var_1;
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_7] [i_8] = 9218106364236363645;
                            arr_32 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] = ((9228637709473187971 ? 1 : 9228637709473187971));
                            var_18 |= (max((((1 ? 335737583 : (arr_5 [i_0 - 1] [i_1 + 1] [i_2 + 2])))), ((((1 && 9218106364236363645) ? (2409376053 && 1) : var_3)))));
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_19 = (max((arr_16 [i_0 - 1] [i_1] [i_2] [i_9 + 2] [i_7] [i_0 + 1]), ((max((arr_34 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_2 - 1] [i_7 + 1] [i_9 - 2]), (arr_34 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 - 2] [i_7 - 1] [i_9 - 2]))))));
                            var_20 -= (max((((arr_30 [i_9 - 1] [i_9 + 2] [i_9] [i_9] [i_9 + 1]) * (arr_28 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]))), (max(((((arr_7 [i_0]) - var_8))), ((var_10 ? 9228637709473187957 : (arr_36 [i_0 - 1])))))));
                        }
                        var_21 = (((arr_23 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1]) || (((var_2 ? (arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0]) : (1 - 24010))))));
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_22 *= (arr_23 [i_0] [i_1] [i_2] [i_2] [i_10 - 1] [i_10]);
                        var_23 += (arr_30 [i_0] [i_1] [i_1] [i_2] [i_10]);

                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0 - 1] [i_2] = (((((~(arr_34 [i_11] [i_11] [i_10 - 1] [i_2] [i_1] [i_0])))) ? (((+(((arr_20 [i_2] [i_1]) ? 1 : 0))))) : (((~var_10) ^ 3959229741))));
                            arr_42 [i_0] [i_2] [i_11] = ((-(((((-(arr_0 [i_0] [i_11])))) ? -1 : -var_9))));
                        }
                        var_24 -= var_7;
                    }
                }
            }
        }
    }
    var_25 = (((max(var_7, var_6))));
    var_26 ^= (((-var_5 ? var_10 : (var_0 ^ var_10))));
    #pragma endscop
}
