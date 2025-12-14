/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = ((!(arr_8 [10] [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = (!-82);
                        var_20 = ((var_4 ? (arr_5 [i_1] [i_3]) : var_14));
                        var_21 = (~var_6);
                        var_22 = ((~(arr_5 [i_2] [i_1])));
                    }
                }
            }
        }
        var_23 = (max(var_23, (arr_10 [i_0])));
    }
    var_24 = (max(((((var_6 - var_1) ? ((var_17 ? 1 : var_17)) : (max(var_1, -32750))))), ((((max(-1, var_14))) ? (max(82, 4737400466876707008)) : (~1)))));
    var_25 -= var_4;
    #pragma endscop
}
