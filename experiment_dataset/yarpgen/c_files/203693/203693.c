/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((!var_17) ? ((((var_1 ? 2141651249 : 65535)) * var_15)) : var_15));
    var_19 |= (max(21507, var_5));
    var_20 += var_12;
    var_21 |= ((!((((((var_16 ? var_17 : 21508))) ? 21508 : ((-1214575121 ? 1896145503717695532 : var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 ^= 107;
                var_23 *= (min(((max(var_17, var_3))), var_6));
            }
        }
    }
    #pragma endscop
}
