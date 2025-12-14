/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((127 || 13534960367456213949), 13534960367456213949));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = var_3;
                var_12 = var_9;
            }
        }
    }
    var_13 = min(var_2, (~var_9));
    #pragma endscop
}
