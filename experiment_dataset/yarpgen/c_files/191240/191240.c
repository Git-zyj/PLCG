/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 255;
    var_19 = 3968;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= ((72057044282114048 ? 0 : 3968));
                var_20 = ((var_2 & (min(3970, -3950))));
                arr_6 [i_1 + 1] = 9122151749730021466;
                var_21 *= ((((167 && 0) ? ((4206098678755482181 << (128 - 128))) : var_8)));
                arr_7 [i_1 + 2] [0] [i_0] = ((!((min(-7, var_0)))));
            }
        }
    }
    #pragma endscop
}
