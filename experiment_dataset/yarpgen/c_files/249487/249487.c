/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_8 ? var_3 : 7713978229775511793)) ^ (var_19 + var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(var_21, -var_4));
                var_22 = ((-(min(((221 ? -16 : 10)), 56790))));
            }
        }
    }
    #pragma endscop
}
