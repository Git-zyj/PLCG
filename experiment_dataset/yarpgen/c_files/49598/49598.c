/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                var_15 &= (min(((~(arr_1 [i_0 - 1]))), var_11));
                var_16 = 110;
            }
        }
    }
    var_17 |= min(var_12, var_3);
    #pragma endscop
}
