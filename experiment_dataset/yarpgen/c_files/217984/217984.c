/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_13;
    var_19 = ((!(((((max(var_10, var_14))) ? var_15 : ((var_3 ? var_9 : var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min((min(var_3, var_15)), (((var_2 - var_1) / var_3))));
                arr_6 [i_1] = (var_2 << (((~var_10) - 9328942071142026587)));
            }
        }
    }
    #pragma endscop
}
