/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_13 = (((var_6 ? (max(var_3, var_10)) : 3141098569)));
                        arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_1] [i_2] = ((~((~(~var_12)))));
                    }
                    arr_10 [7] [i_1] [i_1] [i_2] = (max(var_1, (((((var_3 ? 4240 : var_3))) ? var_1 : (-19876 + 781521684)))));
                }
            }
        }
        var_14 = var_4;
        arr_11 [i_0] = var_2;
    }
    var_15 = var_12;
    #pragma endscop
}
