/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 |= (10 & 18446744073709551612);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_3] = (arr_8 [i_0] [i_1] [i_1] [i_3] [i_3]);
                                var_14 = (arr_7 [i_1]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = ((!(arr_2 [i_1])));
                    var_15 = (((((arr_7 [i_1]) ? (arr_5 [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) - var_6));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_1] [2] [i_0] [i_0] &= (((((arr_16 [12] [i_1] [8] [i_1] [i_1] [i_1]) ^ (arr_2 [i_0]))) <= (((((((arr_11 [i_0]) && (arr_11 [24]))) || (arr_7 [i_0])))))));
                        var_16 -= (max((arr_0 [17]), (((!(arr_0 [i_2]))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_17 = (arr_10 [i_6] [i_2] [i_1] [i_0] [i_0]);
                        arr_21 [i_0] [i_0] [i_0] [i_0] = (min((max((arr_3 [i_0] [i_1]), (arr_20 [i_6] [i_0]))), (((var_8 || (arr_20 [i_0] [i_1]))))));
                        var_18 = -21740;
                        var_19 = (min(5, ((((18446744073709551602 / 32762) || (arr_7 [2]))))));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_20 = 7;
                        var_21 = (((((((0 ? (arr_19 [18] [1] [i_2] [1] [12] [3]) : (arr_19 [i_0] [i_1] [i_1] [1] [8] [i_7]))) ^ ((var_6 ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [22] [22])))))) ? (arr_22 [23] [i_1] [i_2] [10]) : (((((arr_4 [i_0]) || 23)) ? 14528746322071613743 : ((((arr_6 [i_7] [i_2] [8]) ? (arr_24 [i_7] [i_1] [i_0]) : -694737134)))))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_22 = var_6;
                        arr_29 [i_1] [i_2] [i_2] |= (((arr_9 [i_0]) ^ (max((((var_7 | (arr_26 [i_0] [i_1] [i_0] [i_2] [i_8] [i_8])))), 7))));
                    }
                }
            }
        }
    }
    var_23 = -3054;
    #pragma endscop
}
