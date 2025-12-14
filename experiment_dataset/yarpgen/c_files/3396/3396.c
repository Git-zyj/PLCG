/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((max(var_10, var_13)), 1))) ? var_7 : (12175834097697152639 & 1)));
    var_21 = var_13;
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = ((!((min(var_16, (max(20933, -2415171553202961588)))))));
                var_24 ^= var_8;
            }
        }
    }
    #pragma endscop
}
