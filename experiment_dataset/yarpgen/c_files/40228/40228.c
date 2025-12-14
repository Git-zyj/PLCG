/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((!(!var_10))))));
                    var_15 = (((-17592186044415 ? ((var_0 ? var_10 : var_7)) : var_1)) > (((((var_3 || var_10) && ((max(var_4, var_4))))))));
                }
            }
        }
        var_16 = ((3920680469 ? 17592186044393 : 0));
    }
    var_17 -= (max(-17592186044427, 0));
    #pragma endscop
}
