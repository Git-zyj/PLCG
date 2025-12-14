/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] [i_2] = ((((2 ? (-2037900561 - 17903669295131682143) : var_15)) - (((-(1767068665 - 43))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = var_12;
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
