/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = ((min((arr_5 [i_1 - 1] [i_1] [i_1]), ((0 ? var_0 : -7705618528319834434)))));
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_1] = (max(16164, (((((var_9 ? var_13 : 70976114))) - var_7))));
                            arr_13 [i_2] [i_0] [i_0] [i_1] = ((min(var_10, (max(var_15, -7405160923781651324)))));
                            var_17 += ((((16163 ? (min((arr_3 [i_3]), 4223991175)) : var_16)) >> ((-7405160923781651324 ? (var_7 || 14606) : -255))));
                            var_18 = (var_8 + 867504638);
                        }
                    }
                }
                arr_14 [i_1] [i_1] [i_0] = var_2;
            }
        }
    }
    var_19 |= ((((((8509671956208054591 ? 2993942349786446847 : var_11)))) ? ((-((var_7 ? var_6 : var_2)))) : var_6));
    var_20 = (min(var_11, var_0));
    var_21 = (((var_4 & var_1) ? ((((10920 ? -961171842769385275 : var_8)))) : var_16));
    #pragma endscop
}
