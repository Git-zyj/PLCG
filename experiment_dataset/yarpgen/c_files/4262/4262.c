/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = 85;
                var_13 += (((((!(arr_1 [i_1 - 2] [i_1])))) <= 75));
                var_14 = (((arr_2 [i_0] [i_0] [10]) ? (arr_2 [i_0 + 2] [i_0 - 1] [7]) : (min(((~(arr_3 [i_1] [i_0]))), (arr_0 [i_0])))));
                arr_4 [i_0] = ((min((arr_2 [i_0 + 2] [i_1] [i_1 - 2]), (arr_2 [i_0 - 1] [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((((-4724 * (((arr_3 [i_0] [i_3]) % var_8))))) ? ((((min((arr_2 [i_3] [i_0 + 1] [i_0 + 1]), 87))) % ((-10230 ? (arr_2 [i_0 - 1] [i_0 - 1] [i_3]) : 85)))) : (arr_8 [i_2]))))));
                            arr_10 [i_3] [i_3] [i_2] [8] = (86 + ((min((arr_2 [i_3] [i_3] [i_2 - 1]), 150))));
                            arr_11 [i_0 + 2] = ((((((((1 ? 7403391435400760876 : 161))) || (((-10240 ? -10685 : 4)))))) + ((-((min((arr_6 [i_0 + 2] [i_1]), var_5)))))));
                            arr_12 [i_0] [i_0] [i_0] [4] [i_2] [i_3] = (((arr_5 [i_0] [i_0] [i_0] [i_0]) == (((min((arr_1 [i_0 - 1] [i_2 - 1]), (max((arr_7 [12] [12] [i_2] [i_2]), -10675))))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((-(max(var_4, (min(var_7, -1180311594))))));
    var_17 = var_4;
    var_18 *= ((((var_0 ? ((var_0 ? var_8 : -7403391435400760894)) : (((min(85, 165)))))) / 366406443542237445));
    #pragma endscop
}
