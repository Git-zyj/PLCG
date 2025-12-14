/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (min(((max(var_4, (!60)))), (~195)))));
                var_20 = ((~(max(var_8, var_15))));
                arr_4 [i_0] [i_1] = (max(((max(196, var_17))), (max((min(var_10, var_14)), 57))));
                var_21 = 29;
                var_22 = (~var_9);
            }
        }
    }
    var_23 &= 1591721888;
    #pragma endscop
}
