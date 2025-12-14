/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] = (!0);
                    arr_9 [i_0] [3] [i_0] = 3706551896;
                }
            }
        }
    }
    #pragma endscop
}
