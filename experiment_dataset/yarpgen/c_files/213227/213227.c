/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 -= var_7;
        var_18 = ((((!((max(7, 1)))))));
        var_19 = var_9;
        var_20 = (max(var_20, (((!(((arr_0 [i_0 - 3]) == (arr_0 [i_0 - 3]))))))));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] &= (arr_5 [18]);
        var_21 = ((min((((arr_6 [i_1]) ? (arr_2 [i_1]) : 536870912)), (~var_13))));
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 -= ((0 ? 0 : (arr_9 [8])));
        arr_11 [1] &= ((!((((2474411051512633469 / var_16) / (arr_2 [i_2]))))));
        arr_12 [i_2] = ((-((min(88595475, 1)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_5] = (((((var_3 + (arr_17 [i_4] [i_4 - 1] [i_2] [i_5] [i_5])))) ? ((-8926667404213678582 ? 0 : 523292477)) : (!-1658435194)));
                        var_23 -= (arr_15 [i_5]);
                        arr_20 [i_2] [i_2] [i_2] [i_5] = ((-((-(arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))));

                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            var_24 ^= var_5;
                            arr_23 [i_2] [i_2] [i_5] = (arr_13 [i_5] [i_6]);
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [5] [i_2] [5] = (max((((~(~-7)))), var_14));
                            var_25 = -15593;
                            var_26 = ((!(((((4194300 ? 0 : 2474411051512633469)) * (((~(arr_21 [3] [3] [i_5] [i_7])))))))));
                            var_27 = ((-((-(arr_22 [i_2] [i_3] [i_4] [i_5] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
