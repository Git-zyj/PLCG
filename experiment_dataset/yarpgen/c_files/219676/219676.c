/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((max(((min(var_14, 8)), 10430)))));
    var_16 = (max(var_16, (max(-9668, 12581276774320500950))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (min(((~(arr_3 [i_1 + 1]))), (!var_14)));
                    arr_7 [i_0] [1] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                    arr_8 [i_0] [i_0] [i_0] |= (-9511 >= 3811992509);
                    arr_9 [11] = ((((((max((arr_6 [i_2] [i_0] [5] [i_0]), 0))) ? ((11522 - (arr_2 [2] [i_1] [i_2]))) : var_0))) ? (min(-11497, -76)) : (((arr_3 [i_1 - 1]) ? (arr_4 [i_1 + 3] [i_1 + 2]) : 4)));
                }
            }
        }
    }
    #pragma endscop
}
