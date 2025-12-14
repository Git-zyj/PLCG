/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (var_3 << 0);
                            var_15 = ((((!(arr_6 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1]))) ? 13 : ((-((-9 ? (arr_4 [i_0] [i_1]) : 246995882))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_0));
                                arr_22 [i_6] [i_6] = (arr_16 [i_0] [i_1] [8] [i_6]);
                                arr_23 [11] [i_1] [i_1 + 1] [1] [i_5] [i_6] [i_6] = (max(778592804, -115));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_17 -= (!4047971434);
                var_18 = (7545 == 112);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            {
                var_19 = (min(var_19, (((((((1105101215 / -7555) ? ((var_13 ? -5 : 0)) : var_5))) ? ((max((min(var_9, -22524)), 46078))) : 26)))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                arr_45 [1] = ((-13451 || ((min((arr_18 [i_9 + 1] [i_9 + 1] [i_10] [i_10 - 1]), -var_1)))));
                                arr_46 [i_9 - 1] [i_9] [i_9 - 1] [i_11] [6] [i_9] = (((-604 + 2147483647) << ((((~(arr_44 [i_11] [i_10 - 1] [i_10] [i_10] [15] [i_9 + 1] [i_12]))) - 450429455))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
