/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_3 ? var_10 : var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (((((var_13 != var_16) ? (arr_3 [i_1 + 1]) : ((max(var_16, 56343)))))) ? ((((arr_7 [i_2] [i_2] [i_2 - 2] [i_2]) << (((arr_7 [i_2] [i_2] [i_2 - 2] [i_2]) - 138))))) : -2313354210);
                    var_20 = (~65515);
                    var_21 = ((min(((var_9 ? var_5 : var_0)), var_13)) / (min((min((arr_8 [i_0] [i_1] [i_1] [i_2 + 1]), 25)), var_15)));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_3 + 1] = 61;
                        var_22 = (min(var_22, ((((((1981613094 || (arr_5 [i_0] [1] [i_2 + 1]))) ? (((arr_2 [i_1]) ? var_10 : 56343)) : (((-(arr_0 [i_0]))))))))));
                        var_23 = ((min((min((arr_6 [2]), var_14)), 11)));
                        var_24 += 1981613068;
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_25 = (((((var_5 ? var_1 : (arr_10 [9] [9] [i_1] [i_0])))) & (arr_11 [i_0] [i_0] [i_0] [i_4])));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_26 = (!var_10);
                            var_27 = (!0);
                            var_28 = (~var_2);
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_29 = (arr_17 [i_0] [i_1] [i_2 - 1] [i_4 + 2] [i_6] [2]);
                            arr_21 [i_6] [i_4] [i_2] [i_1] [i_6] = (arr_10 [i_4 - 1] [i_2] [i_1] [i_0]);
                            var_30 = (min(var_30, ((((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_2 : var_6)) <= ((((arr_1 [i_0] [i_1 + 1]) ? (arr_16 [i_0] [i_1] [i_2] [i_4 + 2] [i_1 - 3]) : (arr_16 [i_0] [2] [i_2 - 1] [i_0] [i_1 - 4])))))))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_4 + 1] [i_7] = (max((var_3 || -4318798265670106231), (arr_11 [i_0] [3] [3] [3])));
                            arr_26 [i_0] [i_1 + 1] [10] [i_4] [9] = ((((!(arr_10 [i_0] [i_1 - 3] [i_2] [i_1 - 3]))) ? (arr_1 [i_7] [5]) : ((max(var_6, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_31 = (max(var_31, (((((((((arr_16 [i_0] [i_1 - 1] [i_0] [i_4] [i_8]) ? -7 : (arr_2 [i_0])))) ? (21 << 24) : 32765))) ? (((arr_16 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]) ? var_8 : (arr_16 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]))) : ((var_3 ? (max((arr_16 [i_0] [i_1] [i_2 - 1] [i_0] [i_8]), (arr_8 [i_8] [i_2] [i_1 - 3] [6]))) : var_7))))));
                            arr_30 [i_4 + 1] [i_4 + 1] [i_2] [9] [9] = (((((arr_3 [i_4 - 1]) ? (arr_3 [i_4 + 2]) : -8390974353928031620))) ? 4001548077 : ((((arr_3 [i_4 - 1]) ? (arr_3 [i_4 - 1]) : (arr_3 [i_4 + 2])))));
                        }
                    }
                    var_32 &= (max(((~(arr_10 [i_0] [2] [2] [i_0]))), ((((var_6 ? 2017190036659837835 : var_5))))));
                }
            }
        }
    }
    var_33 = 2313354202;
    var_34 = ((((max(((var_12 ? 43547 : var_11)), var_7))) ? 1133696898 : var_14));
    #pragma endscop
}
