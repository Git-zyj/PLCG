/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = 4370768111619379571;
                var_21 *= 21;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_22 = (max((!3), (0 & 3097566926075251690)));
                var_23 *= -1167951118;
            }
        }
    }
    #pragma endscop
}
