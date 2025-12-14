/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 *= (arr_4 [i_0] [4]);
                    var_22 = (min(var_22, (((-((((min(105, (arr_4 [i_1] [i_2])))) ? (min((arr_1 [i_2 + 1]), var_7)) : (((105 == (arr_0 [i_0 + 1])))))))))));
                    arr_8 [i_1] = (arr_2 [i_0 + 3]);
                    arr_9 [9] [i_1] = -105;
                    arr_10 [i_1] = ((105 ? -var_2 : (min((((arr_6 [i_1 - 3]) ? var_15 : (arr_5 [i_1] [18] [i_2 + 1]))), ((var_7 ? var_4 : var_6))))));
                }
            }
        }
    }
    var_23 |= var_14;
    var_24 = (~((var_3 ? ((min(105, var_11))) : ((max(-106, var_11))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_25 = (min(var_25, ((max((((!(((27868 ? (arr_4 [i_3] [0]) : (arr_13 [i_3] [i_4]))))))), (((22025 != -106) ? (((arr_0 [i_4]) ? 5 : var_1)) : (((max((arr_7 [i_3] [i_4]), -106)))))))))));
                var_26 = var_19;
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_25 [i_3] [i_4] [i_5] [i_4] [2] [18] |= 2070093190;
                                var_27 ^= (((((arr_19 [i_3] [i_3] [i_4] [i_5 + 3] [i_6] [i_7]) ? (arr_24 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_7 + 2]) : ((var_6 ? (arr_13 [i_3] [18]) : (arr_3 [i_4] [i_6] [20]))))) >= (max((min(363729725, 43511)), (((-2147483647 - 1) ? 2070093190 : 0))))));
                                var_28 = ((((((~43412) ^ -106))) ? 14 : (((min((arr_4 [i_3] [i_6]), (arr_4 [6] [i_4])))))));
                            }
                        }
                    }
                }
                var_29 = -862188752;
            }
        }
    }
    #pragma endscop
}
