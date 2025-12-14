/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((~(~var_3))));
                var_16 |= 25936;
            }
        }
    }
    var_17 = ((-1320129090 ? var_6 : 95));
    #pragma endscop
}
