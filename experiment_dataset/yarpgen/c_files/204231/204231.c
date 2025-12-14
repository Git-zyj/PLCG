/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((var_10 ? (((((var_11 << (var_6 - 4924725891444192824)))) ? ((min(12849, var_0))) : var_9)) : (((((var_8 > 16) == ((var_0 ? var_6 : 45431))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [12] = (max((arr_3 [i_0 - 1]), var_10));
                    var_16 = 60451;
                    arr_9 [i_0] [2] [6] [2] = ((((max(-6695, ((6695 ? var_2 : -6679))))) ? (((min((arr_0 [i_0]), 15)) % (arr_0 [i_0]))) : (arr_0 [i_0])));
                    arr_10 [i_0] [11] [11] = (max((((arr_2 [0] [i_2 - 2]) * 0)), (arr_3 [6])));
                    arr_11 [10] [3] [i_0] = 0;
                }
            }
        }
    }
    #pragma endscop
}
