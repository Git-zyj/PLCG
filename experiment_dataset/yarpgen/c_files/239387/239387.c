/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!20);
                arr_6 [i_0] [i_0] = (max(0, 0));
                arr_7 [i_0] [i_1] &= var_8;
            }
        }
    }
    var_15 = 12082;
    var_16 = var_12;
    #pragma endscop
}
