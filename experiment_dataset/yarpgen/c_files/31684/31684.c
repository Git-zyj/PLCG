/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [15] [16] [i_0 + 1] = var_13;
                var_20 ^= ((min(var_18, (arr_1 [i_0 + 2]))));
            }
        }
    }
    var_21 -= (max((~1), var_17));
    #pragma endscop
}
