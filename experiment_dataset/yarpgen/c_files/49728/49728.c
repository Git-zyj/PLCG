/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((min(((3796973252528420311 ? (arr_2 [i_0] [i_1] [i_1]) : 14649770821181131305)), (1 * 1116901660))), 54006));
                var_17 = (max(var_17, var_11));
                var_18 = (1 ? -55 : 2);
            }
        }
    }
    #pragma endscop
}
