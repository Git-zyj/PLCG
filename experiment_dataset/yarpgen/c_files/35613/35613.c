/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 -= (max((-20063 != -1402304048), (((34661 | -7631864290814958025) ^ (arr_2 [i_0])))));
                var_17 = arr_1 [i_0];
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = (arr_5 [i_2] [i_2]);
        var_18 = (min(var_18, (((var_4 ^ (!20047))))));
        var_19 = var_7;
        var_20 = -1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_2] = 1;
                    var_21 = ((-(arr_4 [i_2] [i_3] [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
