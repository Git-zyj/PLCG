/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_4);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = max(((-(arr_1 [i_0] [i_0]))), (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [7]))));
        var_11 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_12 &= ((((!(arr_7 [i_1] [i_2 + 1] [i_2 - 3] [i_2 - 3]))) ? ((20 ? 140 : 254)) : (arr_7 [i_4] [6] [i_2 - 3] [i_1])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_13 = ((-(arr_9 [i_1] [i_3 - 1] [i_3] [i_3] [i_5] [i_4])));
                            arr_16 [i_1] [i_2] [i_3] [11] [i_3 - 2] [i_3] = (arr_1 [i_2 - 4] [i_2 - 4]);
                        }
                        arr_17 [i_3] [i_3] [i_3] [i_4] = (((((arr_15 [i_1] [i_1] [i_1] [i_4]) / (arr_0 [i_4]))) != (((((arr_4 [i_3 - 3]) < 4027039705))))));
                        var_14 = ((((((~((((arr_6 [i_1] [13] [i_4]) >= (arr_13 [i_1] [i_3] [i_3 + 2] [i_1] [i_4])))))) + 2147483647)) << (((((arr_4 [i_3 - 2]) + (((-(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))))) - 10405541031030897804))));
                    }
                }
            }
        }
        arr_18 [i_1] = (arr_4 [i_1]);
        arr_19 [i_1] [i_1] = ((max((arr_6 [12] [i_1] [i_1]), 254)));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_15 = ((((var_6 ? (min((arr_6 [i_8] [i_8] [i_8]), (arr_24 [i_7] [i_8]))) : (min(3081607806315682542, (arr_11 [i_6] [i_8] [i_6] [i_6]))))) == 1));

                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        arr_33 [10] [i_9] [i_9] [12] [i_9] = (!16360);
                        var_16 = (max(var_16, (((+((+((4236282462124909165 ? (arr_30 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_27 [i_6] [i_8] [i_9]))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_17 = (min(var_17, (13 <= 254)));
                                arr_39 [i_6] [i_6] [i_6] [i_10] [i_6] = 4198892443;
                                arr_40 [i_8] [i_7] [i_11] [i_10] |= ((((~(-6318 & 63165))) ^ (arr_35 [i_8] [i_8] [i_8] [i_8])));
                            }
                        }
                    }
                    arr_41 [i_8] [i_8] [i_8] [i_8] = ((max((((arr_24 [i_6] [5]) ? (arr_14 [i_6] [i_6] [i_6] [i_8] [i_7 + 1]) : -15850)), (arr_29 [i_6] [1] [i_6]))));
                }
            }
        }
        var_18 = 96074852;
        var_19 |= (arr_3 [i_6] [i_6]);
        var_20 = (((((max((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), -6295)))) >> (((2 == -62) >> (((arr_0 [i_6]) - 31529))))));
    }
    var_21 = ((((var_3 ? var_1 : (((min(var_3, -7764)))))) ^ (min(-4, var_6))));
    #pragma endscop
}
