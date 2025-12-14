/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((min(var_3, 117)) + ((((arr_1 [i_0]) / (((arr_1 [i_0]) * var_0)))))));
        arr_3 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = ((-((((((var_10 ? (arr_6 [i_1] [i_1]) : var_9))) != var_8)))));
        arr_9 [i_1] = ((((min((arr_4 [i_1]), var_2))) ? (var_6 && var_2) : -var_2));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    var_14 *= ((((arr_10 [i_3 - 2] [i_3 + 2] [i_3 + 2]) >= 23752)) ? (min(-var_3, var_2)) : var_1);
                    arr_17 [i_3] [i_3] = var_13;
                    arr_18 [i_3] [i_3] [i_3] [i_1] = (((!(!var_12))));
                    arr_19 [i_1] [i_3] [23] = var_8;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_28 [i_2] &= ((-((min((arr_26 [i_1] [i_1] [i_1]), (((!(arr_16 [i_1] [i_2] [20] [i_4])))))))));
                                var_15 += (102 && -108);
                                arr_29 [i_3] = ((((!(~var_2)))));
                                var_16 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((min(var_0, (max(var_3, var_3))))) ? (min(((min(107, 254987238))), var_2)) : var_5));
    var_18 *= var_7;
    var_19 = (min(var_19, var_12));
    #pragma endscop
}
