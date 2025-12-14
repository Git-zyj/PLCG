/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((141 ^ (min(var_10, var_5)))) << (var_12 - 3549826387787377833)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_0] [i_1] = 3495301251;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (((((max(var_9, 50215))) > (min((arr_1 [i_4]), var_1)))));
                                arr_12 [i_0] [i_0] [i_3] [i_0 + 2] [i_0 + 1] = (min((max((((127 <= (arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_4 + 2])))), (min(var_7, 115)))), (((1 < (max(184, var_16)))))));
                            }
                        }
                    }
                }
                var_19 = (max((arr_6 [i_0 + 1] [11] [11] [i_0 + 1]), (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1])));
                arr_13 [i_1] [i_1] [i_0] = ((var_9 ^ (min(((((arr_1 [i_0]) > 6484463277032384981))), -1911854721824803331))));
                arr_14 [i_0] [i_1] |= var_6;
            }
        }
    }
    var_20 = ((2659619523412103119 && (var_2 - -341137598)));
    #pragma endscop
}
