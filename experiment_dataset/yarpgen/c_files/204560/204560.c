/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_18) ? var_12 : 21958));
    var_20 = ((62 ? (-var_1 / 133) : (min(1, var_15))));
    var_21 = ((((122 ? 1 : 27505)) >= var_14));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_22 = (max(var_22, var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_23 = var_11;
                        var_24 = ((((~(~1))) & (((arr_6 [i_3] [i_3]) * ((max((arr_7 [i_0 + 3] [i_2]), 122)))))));
                        var_25 = (max(var_25, ((((arr_3 [i_0] [i_0]) / ((0 ? ((((arr_9 [i_3]) == 134))) : ((1 ? var_17 : 56)))))))));
                        var_26 = (max(var_26, 1));
                    }
                }
            }
        }
        arr_10 [8] = (((((~(1 && var_7)))) ? (((1 && (arr_4 [i_0 - 1] [8] [i_0 - 1])))) : 1));
    }
    #pragma endscop
}
