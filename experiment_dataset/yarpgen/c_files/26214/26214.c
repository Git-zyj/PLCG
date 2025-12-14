/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -var_7;
                arr_6 [i_1 + 2] = var_1;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 24;i_5 += 1)
                {
                    {
                        var_14 ^= var_9;
                        var_15 = (max(var_15, (((-(((arr_14 [i_5 - 4]) / 142)))))));
                    }
                }
            }
        }
        arr_17 [5] = arr_10 [i_2] [i_2] [18];
    }
    #pragma endscop
}
