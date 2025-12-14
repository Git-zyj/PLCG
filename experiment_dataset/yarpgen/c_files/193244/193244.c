/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = 1;
        var_20 -= 484379462;
        var_21 = 23062;
    }
    var_22 |= 9223372036854775807;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_23 = 43;
                    var_24 -= 484379462;
                }
            }
        }
    }
    #pragma endscop
}
