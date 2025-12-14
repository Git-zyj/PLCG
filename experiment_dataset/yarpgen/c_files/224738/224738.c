/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (min(((var_1 ? (min(0, -2147483646)) : ((max(var_8, var_10))))), (-2147483647 - 1)));
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 += (4064037311 & 1710364153);
                var_19 -= ((!(((93 ? 0 : 1395248874)))));
                var_20 += (((arr_1 [12]) > (((arr_2 [20] [i_1]) & -30298))));
            }
        }
    }
    #pragma endscop
}
