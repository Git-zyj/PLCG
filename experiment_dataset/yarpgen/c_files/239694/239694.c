/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 268431360;
    var_13 |= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (arr_12 [i_0] [i_0] [i_0] [8])));
                        var_15 += (((arr_10 [i_1] [1]) ? (arr_7 [i_0] [i_2] [i_3]) : 8388607));
                    }
                }
            }
        }
        var_16 = (arr_12 [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
