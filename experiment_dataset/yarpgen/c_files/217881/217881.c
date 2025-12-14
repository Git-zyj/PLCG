/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(!229))) ? (((var_11 ? var_10 : 0))) : (((var_11 ? ((var_0 ? 1 : var_7)) : ((1 ? var_0 : var_16)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 += ((((((1 ? 1 : 1)))) ? (((((max(var_2, 0))) ? ((var_5 ? 1 : var_16)) : -var_15))) : (max(var_8, (~var_4)))));
        var_21 = (max(var_21, (((((min(1, var_12))) ? (((1 ? var_13 : var_2))) : (((((max(var_10, var_1))) ? ((var_12 ? var_13 : var_0)) : (~1)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 += (~0);
        var_23 = (min(var_23, var_16));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_9 [i_3] = (~var_17);
                    arr_10 [i_1] [i_2] [i_2] [i_3] = (((~var_10) ? var_5 : 1));
                }
            }
        }
        var_24 ^= -1;
    }
    var_25 = (!var_13);
    var_26 = (((!((max(1, var_10))))) ? ((var_17 ? var_3 : -1)) : var_9);
    var_27 = ((var_6 ? -1 : (~var_13)));
    #pragma endscop
}
