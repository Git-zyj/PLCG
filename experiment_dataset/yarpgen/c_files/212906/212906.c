/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = 92;
                    arr_10 [1] [1] [i_2] [1] = var_15;
                }
            }
        }
        arr_11 [i_0] [i_0] = ((~(max(1061117503, (arr_7 [i_0] [16] [i_0])))));
    }
    var_17 = (min(var_17, var_9));
    #pragma endscop
}
