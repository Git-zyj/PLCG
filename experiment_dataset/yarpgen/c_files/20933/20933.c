/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = -49;
                var_17 = (49 & (((70 + var_6) ? var_12 : ((var_12 ? -3469372565274360227 : 35)))));
            }
        }
    }
    #pragma endscop
}
