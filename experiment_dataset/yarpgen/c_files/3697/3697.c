/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_4 + 1] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0] = ((-1 ? 13 : 511));
                                var_12 -= (((((-var_0 ^ (((min(var_8, var_11))))))) ? ((102 ? var_5 : 115)) : ((((arr_13 [i_2 + 1] [i_0 + 1]) ? ((min(255, var_4))) : (arr_4 [i_0 - 1] [i_0 - 1]))))));
                                var_13 = (min((arr_14 [i_2] [i_1] [15] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]), (arr_14 [i_2] [i_1] [i_2] [6] [i_2 + 1] [i_2 + 1] [i_2])));
                                arr_16 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((~var_9) ? ((-(max(53735, 4095)))) : (((max(-581266997, var_4))))));
                            }
                        }
                    }
                    var_14 -= ((((((var_3 % var_3) * (max((arr_7 [i_0 + 1]), var_6))))) ? (arr_5 [i_2] [i_1]) : (((-1492374440 ? 181 : ((236 * (arr_2 [i_2] [i_1]))))))));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = ((((-var_9 > (var_11 || 1802397697732471631))) ? ((-((var_0 ? var_6 : -23475)))) : ((((min(var_4, 99)))))));
    #pragma endscop
}
