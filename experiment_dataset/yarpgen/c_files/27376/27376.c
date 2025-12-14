/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_18 = ((~(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] &= ((!(arr_0 [i_0])));
                        arr_12 [i_0] [i_0] [i_1 + 1] [i_0] = (arr_2 [i_2]);
                    }
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
