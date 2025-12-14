/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= (max((max((arr_4 [i_0]), 66)), (arr_3 [1])));
                var_20 = 119;
            }
        }
    }
    var_21 = (min(1, 127));
    var_22 = var_3;
    var_23 ^= (min((min(734750655, 734750655)), 3560216640));
    #pragma endscop
}
