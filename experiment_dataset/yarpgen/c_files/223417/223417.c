/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_0] = var_14;
                    var_19 -= (arr_1 [i_0] [5]);
                    var_20 = -32767;
                    arr_10 [i_2] [i_1] [8] [i_2] = (var_2 != var_11);
                }
                var_21 = ((255 && ((!(41 > var_7)))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] = ((var_15 ? ((12 << (var_6 - 22751))) : (65535 > var_13)));
        var_22 = (((arr_7 [i_3] [i_3] [i_3]) ? var_7 : (arr_7 [i_3] [i_3] [i_3])));
    }
    var_23 = (((((((var_11 ? var_10 : var_13))) && var_17)) ? (((max(var_14, var_16)) ? ((var_12 ? -1 : var_15)) : ((-17003 ? -84 : 162)))) : ((max(var_7, var_16)))));
    #pragma endscop
}
