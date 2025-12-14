/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (-7931901822073473194 % var_8)));
                var_18 *= (((min((((1429210200980822311 ? var_11 : -110))), 123)) / -4));
                var_19 = var_0;
            }
        }
    }
    #pragma endscop
}
