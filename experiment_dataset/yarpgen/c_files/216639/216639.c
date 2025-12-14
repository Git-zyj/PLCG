/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((!127) << ((((var_10 ? var_5 : var_3)) - 2307256677)))))));
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((~(~var_3))));
                var_13 = (~var_9);
                var_14 = (min(var_14, (((+((var_0 ? (var_8 & var_7) : (40464 && -6700250808438572797))))))));
                var_15 = 504;
            }
        }
    }
    #pragma endscop
}
