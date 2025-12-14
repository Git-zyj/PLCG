/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_9);
    var_18 = min(-24026, ((-14339 - ((max(var_2, 102))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [15] [i_2] = (max((arr_0 [i_2 - 1] [i_1]), (((var_7 - var_8) + (max((arr_0 [i_0] [i_1 - 1]), var_11))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (((-14335 > var_0) << (((min(((var_1 ? (arr_5 [i_4] [i_4] [i_2] [i_4]) : 7436)), var_7)) + 37))));
                                var_20 = 14329;
                            }
                        }
                    }
                    arr_11 [i_2] [i_2] [i_2] = ((((((((max(1, (arr_8 [i_2] [i_0] [i_2] [i_1] [i_0])))) <= var_14)))) % ((((max((arr_5 [i_0] [i_1] [i_2 + 1] [i_2 - 1]), (arr_1 [i_0])))) ? ((max(var_6, (arr_8 [i_2] [i_2] [9] [1] [i_2])))) : var_3))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1 - 1] [i_2] [i_5 + 1] [9] [i_5 + 1] = (arr_7 [i_0] [i_1] [i_2 + 1] [i_2] [i_5 - 1] [i_6]);
                                var_21 = 1094400741307773523;
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((((14329 ? 65535 : 111))) ? var_8 : (((!(arr_9 [1])))))))));
                }
            }
        }
    }
    var_23 = (min(var_23, ((max(var_12, (var_12 < var_15))))));
    #pragma endscop
}
