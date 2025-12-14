/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (!10782329656310350261);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 &= var_1;
                var_21 = var_6;
                var_22 = (!1);
            }
        }
    }
    #pragma endscop
}
