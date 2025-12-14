/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0 - 3] [i_0 - 3] = -1627759688;
                    arr_9 [i_0] [i_0] [i_2] = 251;
                }
            }
        }
        var_11 = 255;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_5] [i_3] [i_5] = 225;
                        var_12 ^= 255;
                    }
                }
            }
        }
    }
    #pragma endscop
}
