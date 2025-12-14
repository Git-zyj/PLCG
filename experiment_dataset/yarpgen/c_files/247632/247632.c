/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((32767 ? var_4 : ((var_12 - (~var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 |= var_13;
                var_20 ^= 32749;
            }
        }
    }
    var_21 *= ((-((~((var_3 ? -3722946364466274319 : var_17))))));
    #pragma endscop
}
