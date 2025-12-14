/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-328840912, 77));
    var_17 = (~var_15);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = var_13;
                    var_19 += ((((min(4229577376, 3597062308))) ? ((((!3597062297) ? 697904998 : (arr_1 [i_2])))) : ((var_0 ? ((((arr_5 [i_2]) + var_0))) : (((arr_2 [i_2]) ? var_1 : var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
