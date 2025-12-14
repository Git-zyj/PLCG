/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((!((min(-1940909385397792819, 2871030390))))) ? (((((~(arr_0 [i_0])))) | 4294967295)) : ((max(-24, -31))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (max((~2251782633816064), ((var_9 ? 220 : ((var_9 ? -2251782633816074 : 576320014815068160))))))));
                            var_14 = (max(var_14, ((min(((-1 ? 26 : 55)), (((max((arr_5 [i_1] [i_1] [i_3]), 35)))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] = (((!(arr_3 [i_0]))) ? (((-49 ^ var_11) >> (((arr_9 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) - 73)))) : var_6);
                            arr_13 [i_3] [i_3] [6] [i_3] [i_0] |= ((!((((arr_1 [i_2 + 1]) / var_9)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = ((((((((9151314442816847872 & (arr_15 [i_4] [i_1] [i_0])))) ? (arr_4 [i_0] [i_4]) : (((min((arr_0 [i_0]), 36))))))) ? (min(((var_9 ? (arr_7 [i_0] [i_0] [i_4]) : var_7)), (max(var_4, -2251782633816074)))) : (arr_16 [i_0] [22] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((max(((+(max((-9223372036854775807 - 1), 491520)))), (arr_4 [i_6] [i_6]))))));
                                arr_21 [i_0] [i_1] [i_1] [i_5] [i_1] [i_5] = ((((min((arr_19 [i_6 + 2] [i_0] [i_6] [i_6] [i_6 - 1]), (arr_19 [i_6 - 2] [i_0] [i_0] [i_6] [i_6 + 1])))) ? (~536862720) : (arr_10 [i_6 - 4] [i_6 - 4] [i_6] [i_6 - 4] [i_6 - 3] [i_6 + 2])));
                                var_17 &= (max((((arr_19 [i_0] [i_6] [i_6 + 3] [i_5] [i_6]) ? (arr_19 [i_0] [i_1] [i_6 + 3] [i_5] [i_0]) : (arr_10 [i_0] [i_0] [i_6 - 4] [i_5] [i_6] [i_0]))), (((!(arr_10 [i_0] [i_1] [i_6 + 3] [i_1] [3] [i_1]))))));
                                var_18 = (~27);
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_4] [i_0] = ((((max((arr_5 [i_0] [i_1] [i_4]), (arr_5 [i_0] [i_1] [i_4])))) ? (arr_9 [15] [i_1] [i_4] [i_1] [i_4]) : (((((0 ? 212 : 805306368)) < (((arr_2 [i_0]) ? (arr_17 [i_0]) : 124)))))));
                }
            }
        }
    }
    #pragma endscop
}
