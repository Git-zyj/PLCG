/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [3] [23] = (+(((~9223372036854775807) ? var_7 : var_5)));
                arr_8 [i_0] [i_0] [i_1] = var_5;
            }
        }
    }
    var_12 = (((~var_2) ? ((var_11 / (3252013600 > var_4))) : ((1 ? var_8 : 1))));
    #pragma endscop
}
