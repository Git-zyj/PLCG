/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 |= ((!((min(5742220327660715454, ((max(-28614, 9223372036854775780))))))));
                    var_17 = (max(((min(0, 1))), (max(var_11, -2134))));
                }
            }
        }
    }
    var_18 = (!651490574311075832);
    #pragma endscop
}
