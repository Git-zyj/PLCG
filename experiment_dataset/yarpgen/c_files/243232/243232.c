/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = 28046;
                    var_22 *= -23;
                    var_23 = (max((((~(-9223372036854775807 - 1)))), 3101511903));
                }
            }
        }
    }
    #pragma endscop
}
