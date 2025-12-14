/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((!var_10) ? -var_3 : (min((max(17821, 18446744073709551598)), var_0)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_2 [7] [7]);
        var_17 = (max(var_17, ((min((min(((min(-28941, var_13))), -var_14)), (((arr_1 [i_0]) / (max(18, 47919)))))))));
        var_18 = ((~32767) ? (((((17 ? (arr_3 [i_0]) : var_10)) > var_7))) : ((0 ? ((max(17617, (arr_0 [i_0])))) : ((max((arr_2 [i_0] [i_0]), var_11))))));
        arr_4 [i_0] = ((~((var_4 ? (arr_3 [i_0]) : (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_9 [i_0] = (((arr_6 [i_1] [i_1] [i_0]) | ((max(var_0, var_13)))));
            var_19 = (max(var_19, (arr_3 [i_0])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_20 = (max(var_20, ((max(4348456735918330711, ((min(4, 1))))))));
            var_21 = (max(var_21, ((((((var_9 ? 1 : ((((arr_5 [i_0] [i_0] [i_0]) > 1368680879884221308)))))) ? (((arr_2 [i_2] [i_0]) * (arr_0 [i_0]))) : ((-(arr_0 [i_0]))))))));
            arr_12 [i_0] [i_0] [i_0] = 65524;
            arr_13 [i_0] [8] [8] &= (arr_10 [24] [i_2]);
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = (max(-3481, -7984));
        var_22 = ((arr_0 [i_3]) ^ (max(1, ((49 ? var_5 : 4294967295)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_5] |= (var_3 & 23745);
                                var_23 = (((var_9 >= (arr_26 [i_4] [1] [1] [5]))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_24 = (((17621 + 15380) ? (((-(arr_11 [i_5] [i_5] [i_5])))) : (204 % 3)));
                        var_25 = ((var_2 ? (arr_10 [i_9] [i_5]) : (arr_0 [i_6])));
                        var_26 &= (((arr_7 [i_4] [i_5] [i_4]) ? (arr_7 [i_4] [i_4] [i_4]) : 960));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_27 = 212;
                        var_28 = ((!(arr_20 [i_4])));
                        arr_34 [i_10] [23] = ((-((117 ? (arr_14 [i_5] [i_6]) : var_1))));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_29 = -1926;
                        arr_39 [i_5] [i_5] [i_5] [i_5] |= ((~(arr_8 [i_4] [i_6])));
                    }
                    var_30 = (min(var_30, (((var_4 ? (arr_31 [i_4] [i_4] [i_4] [i_5] [i_6] [i_6]) : (arr_31 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5]))))));
                }
            }
        }
        arr_40 [i_4] = var_7;
    }
    #pragma endscop
}
