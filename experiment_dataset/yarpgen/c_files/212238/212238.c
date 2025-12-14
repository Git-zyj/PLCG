/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 = (arr_2 [i_1 + 2]);
                        arr_9 [5] [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_4 [i_0] [i_0] [i_1 - 1]);
                        arr_10 [i_0] = -79;
                        var_20 ^= (arr_4 [i_0] [i_2] [i_2]);
                        arr_11 [i_3] [i_3] |= (arr_5 [20] [i_3] [i_2]);
                    }
                }
            }
        }
        var_21 = (arr_5 [16] [i_0] [i_0]);
        var_22 = -95;
    }
    var_23 = (min(var_23, var_5));
    #pragma endscop
}
