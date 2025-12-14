/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (max(var_10, var_12));
    var_17 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [2] = (arr_2 [i_0]);
                    var_18 = (min(var_18, (((~((min((arr_1 [i_2] [i_1 + 1]), (arr_1 [i_0] [i_0])))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_19 &= -16431;
                        var_20 += ((arr_3 [i_1 + 1] [i_1 + 1]) / var_14);
                        var_21 -= (arr_6 [i_1 + 1] [8] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (max(var_22, ((((arr_13 [9] [i_0]) ? (11054 && var_5) : (arr_5 [i_1 + 1]))))));
                        var_23 = (min(var_23, ((((arr_12 [10] [i_1 + 1] [8] [4]) & (arr_12 [i_1] [i_1 + 1] [i_1] [4]))))));
                    }
                    var_24 = ((((min((max((arr_9 [i_2] [i_1] [i_1 + 1] [i_1 + 1] [i_1]), var_4)), (((var_2 == (arr_2 [i_1]))))))) || (((arr_7 [i_2] [i_1 + 1] [i_1 + 1]) && (arr_7 [i_2] [i_1 + 1] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_25 = ((((max((arr_6 [i_1 + 1] [i_2] [i_1]), (arr_11 [i_1 + 1])))) ? (((arr_18 [i_0] [i_1] [i_2] [i_5] [i_6]) ? (max(11065, var_4)) : (arr_14 [i_0]))) : (((var_2 - (((arr_18 [i_6] [i_5] [1] [i_0] [i_0]) ? (arr_4 [i_5] [i_5]) : (arr_14 [i_6]))))))));
                                arr_20 [i_0] [i_5] &= (((max((arr_18 [i_6 + 3] [i_6] [i_5] [i_5] [i_2]), (arr_18 [i_6 + 2] [i_5] [i_2] [6] [1]))) & (min((((var_4 ? 0 : var_0))), -var_6))));
                                arr_21 [i_5] [i_5] [i_5] [i_2] [i_1] [i_1 + 1] [i_5] |= (min((max((arr_13 [i_1 + 1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1]))), (((!(arr_9 [i_5] [i_1 + 1] [i_1 + 1] [2] [i_1 + 1]))))));
                                var_26 ^= var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
