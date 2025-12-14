/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-127 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (arr_5 [i_0] [i_2] [14]);
                    arr_8 [3] [i_0] [i_0] [i_0] = (((arr_5 [i_0] [1] [7]) < -16));
                    arr_9 [2] &= -1152545034;
                    arr_10 [i_2] [14] [14] [i_0] |= (max((arr_6 [8] [5] [3]), 507));
                    var_12 ^= (!16);
                }
            }
        }
    }
    #pragma endscop
}
