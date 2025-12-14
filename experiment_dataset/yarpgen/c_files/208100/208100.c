/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 + (((var_13 > ((var_5 ? var_13 : var_9)))))));
    var_19 = var_9;
    var_20 |= var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (-((-2023155041 ? 4294967295 : 1)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_3] = (((var_12 ? (var_15 - var_15) : (var_3 >> var_14))) & ((((~var_5) * (!var_2)))));
                        var_22 = (max(var_22, (-1 == 19)));
                        var_23 += var_16;
                    }
                }
            }
        }
        var_24 += var_15;
    }
    #pragma endscop
}
