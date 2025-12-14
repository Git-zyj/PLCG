/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = (33 ? -2 : 725517444);
                var_21 = 79;
            }
        }
    }
    var_22 += var_10;
    #pragma endscop
}
