/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 += (arr_0 [i_0]);
        var_16 = ((min((max(var_10, -4887811597257762473)), (~0))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = (((((min(-4887811597257762461, (arr_3 [i_1])))) ? 240 : (arr_4 [i_1] [i_1]))));
        var_18 = (((((arr_1 [i_1] [i_1]) && (arr_1 [12] [i_1]))) ? (arr_1 [i_1] [i_1]) : -26));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_19 = max(-4887811597257762461, ((max(((var_6 ? (arr_10 [i_4] [i_5]) : (arr_17 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((!(arr_11 [i_2]))))))));
                                var_20 = (((~(arr_17 [i_2] [i_2] [i_4] [i_2] [i_6]))));
                            }
                        }
                    }
                    arr_18 [i_2 + 1] [i_3] [i_4] |= (((arr_13 [i_2] [i_3] [i_4 - 1]) ? (arr_7 [i_2 + 1]) : ((max((~var_1), ((min(34, 32742))))))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_21 = (max((((arr_20 [i_7]) ? (max(var_4, (arr_19 [i_7]))) : (arr_20 [i_7]))), var_4));
        var_22 = (~((~(arr_20 [i_7]))));
    }
    #pragma endscop
}
