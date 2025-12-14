/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((!(arr_0 [i_1]))) ? (max((arr_2 [10]), 1000438403)) : ((((-1000438403 * (arr_3 [i_0]))))))))));
                arr_5 [i_1] [i_0] [i_0] = ((((((42346 - -1000438388) + 94))) ? ((-4 + (arr_0 [i_0]))) : ((((max((arr_2 [i_0]), var_4))) - (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 *= (((((-2997868334028677747 ? (max((arr_9 [6] [6] [i_2] [i_3] [0]), (arr_7 [i_1] [i_1] [12]))) : (((((arr_8 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0]) && 181388662))))))) ? ((((arr_2 [12]) ? ((256 ? var_4 : var_0)) : (max(42346, 1000438362))))) : -4731626534287207370));
                            arr_12 [9] [i_3] [i_3] [i_0] = (max((((arr_10 [i_0] [i_1] [i_0] [8]) / ((((arr_3 [i_0]) <= (arr_3 [13])))))), (max(-1000438415, (arr_7 [i_1] [0] [i_3])))));
                            arr_13 [i_3] [1] = var_7;
                        }
                    }
                }
                var_19 = (min(var_19, (arr_8 [1] [5] [1] [5] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
