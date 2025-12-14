/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 *= (min(((((arr_0 [i_0 + 4]) + (arr_0 [i_0 + 2])))), (min(-8438315453360715170, (arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 &= (((max(8438315453360715170, (arr_0 [i_0 + 3]))) ^ ((min((var_1 | 3879967305), (arr_5 [i_1] [i_2] [5]))))));
                                var_21 = (min(var_21, ((min((((1 / 21818) ? (((min(1, 1)))) : var_11)), -65505)))));
                                var_22 &= 221;
                                var_23 &= (min((max(((((arr_8 [i_0] [i_1] [i_2] [2] [i_4] [i_1]) - 1))), (((arr_1 [i_1]) ? 65505 : 2001345061)))), ((2001345061 - (arr_4 [i_0 + 2] [i_0 + 2] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (~var_1)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_25 *= min(var_13, (((var_11 || 1) ? 2293622235 : (((max(1, (arr_13 [7]))))))));
                var_26 -= ((((min((arr_0 [i_6]), 7462))) - (~255)));

                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_27 &= var_1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_24 [i_9] &= ((((arr_11 [15] [i_7 + 1] [i_7] [i_8] [i_9] [i_6]) | (arr_22 [i_5] [i_7 + 1] [i_7 + 1] [i_5] [i_7 + 1]))));
                                var_28 &= max(-312064855, (min(0, (arr_13 [i_7 - 1]))));
                                var_29 &= (min((min(((min(312064852, var_6))), (arr_20 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5]))), ((max((5718431986086751854 != 5718431986086751854), -8438315453360715180)))));
                                var_30 += max((!70), ((-(arr_15 [i_7 - 1]))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_31 = (min(var_31, 1));
                                var_32 *= ((1 - (((arr_21 [i_5] [i_5] [i_5] [i_11]) ? (arr_26 [2] [i_6] [2] [i_6]) : var_4))));
                            }
                        }
                    }
                    var_33 -= (((min(var_1, (arr_7 [4] [0] [0] [i_10]))) - ((((arr_6 [i_6]) ? (min(2047, 1)) : (arr_22 [i_5] [i_5] [i_5] [10] [i_6]))))));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_34 &= (((arr_18 [i_5] [i_5] [i_5] [i_13]) != ((min(1782869391, -148798244)))));
                    var_35 = (max(var_35, ((max((min((min(9, -2523140651003666776)), (arr_23 [i_6] [13] [i_13] [13] [i_13] [i_6] [i_6]))), (~511))))));
                    var_36 = (min(var_36, ((((var_10 + 2293622234) >= (min((arr_26 [i_5] [i_6] [13] [i_13]), ((18219121182242556367 - (arr_23 [i_13] [9] [i_6] [i_6] [i_5] [13] [i_5]))))))))));

                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        var_37 &= ((min(-15410, 1392435472772354260)));
                        var_38 |= -1568067122;
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_39 = (max(var_39, ((((min((2001345061 >= 2511991500), ((1746400790 ? var_3 : -17382)))) <= var_13)))));
                        var_40 = (min(var_40, ((max(8438315453360715170, ((max((arr_28 [i_5] [i_6] [i_13] [i_15] [i_15]), (arr_28 [10] [i_15] [i_13] [i_6] [i_5])))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
