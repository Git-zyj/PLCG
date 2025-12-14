/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (arr_4 [i_0]);
                    var_15 = ((-(max((((var_1 ? var_9 : -14))), var_4))));
                }
            }
        }
    }
    var_16 -= (max(var_12, var_10));
    #pragma endscop
}
