/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 |= ((var_15 / (((arr_3 [i_0] [1] [7]) ? 68 : 68))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [9] [i_0] [i_2] [i_3] [9] [i_4] = -9665468720747870729;
                                arr_13 [i_0] = ((((arr_11 [5] [i_3] [i_1]) ? ((-127 ? var_3 : 8781275352961680902)) : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = (arr_0 [i_0] [i_0]);
                                arr_15 [2] [i_1] [i_1] [i_0] [i_1] = ((!(80 && 9665468720747870729)));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] = ((((min((68 || -1), ((58 ? (arr_10 [6] [2] [i_0] [i_1] [i_1] [i_1] [6]) : -4519482147797421435))))) ? ((((!(!3212216436))))) : (arr_3 [i_0] [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_24 [i_6] = (((8781275352961680887 < 16579625298145492508) ? ((23780 << (44 - 28))) : var_11));
                var_18 = (max(var_18, ((((arr_19 [i_5]) ? (((((max((arr_23 [i_5]), var_15))) << (var_2 - 96)))) : (((arr_20 [i_5]) << (var_16 + 461278636088519328))))))));
                var_19 = (max((max((arr_21 [i_5] [i_5] [i_6]), (arr_17 [6]))), ((min((arr_5 [i_5] [i_6]), var_3)))));
                var_20 *= ((!((((arr_11 [i_5] [i_6] [i_5]) ? (arr_11 [9] [i_6] [i_5]) : (arr_11 [i_5] [i_5] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
