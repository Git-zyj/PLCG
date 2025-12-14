/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((min(var_7, 18))) + (arr_3 [i_0 - 1] [5])));
                var_16 = var_12;
                var_17 = min(61, (((!(~-21)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 = 28;
                    arr_10 [i_0] [i_1] [i_1] = (((arr_5 [i_1]) ? (arr_3 [i_0] [i_1]) : ((31 ? -12 : 18))));
                }
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    var_19 = (~var_9);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_22 [19] [i_4] [i_4] [i_1] [i_4] = (!-35);
                                var_20 = (((arr_4 [7]) ? 63 : var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_21 = var_10;
                    arr_30 [i_6] [i_8] = (((var_6 > var_0) ? ((var_2 ? (arr_1 [i_6]) : var_0)) : ((var_12 ? var_0 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
