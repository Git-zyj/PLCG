/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (~1974)));
                arr_4 [i_0] [i_1] [i_1] = (((((-21050 ^ (arr_0 [i_0])))) ? (arr_0 [i_0]) : (~7281)));
            }
        }
    }
    var_13 = (min((((min(var_9, 0)) ? var_3 : (!1246325797582096852))), var_4));
    #pragma endscop
}
