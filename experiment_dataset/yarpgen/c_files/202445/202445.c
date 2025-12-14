/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (0 || 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [15] [i_2] &= -32599;
                    arr_10 [i_0] [i_0] [i_2] = 24268;
                }
            }
        }
    }
    #pragma endscop
}
