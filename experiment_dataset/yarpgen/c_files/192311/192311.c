/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 / ((((min(3299, -470365256))) ? (min(3, 470365286)) : -1397971836))));
    var_16 = (min(var_16, ((((((-470365296 ? (max(6633275241390536666, -470365256)) : var_9))) > var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_2] = (1 ? ((var_1 ? (var_5 & -32743) : ((max(var_3, 470365295))))) : ((((min((arr_5 [i_0 - 1] [i_1] [i_2]), var_3))))));
                    arr_8 [i_0 + 1] [6] [i_2] [6] = (arr_1 [i_1 + 1] [i_1 + 1]);
                    var_17 ^= ((470365296 && (((-(max(0, (arr_5 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_18 = (max(var_18, (~-var_7)));
    #pragma endscop
}
