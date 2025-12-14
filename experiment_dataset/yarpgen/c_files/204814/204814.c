/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= ((var_17 & (arr_1 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 |= (((arr_8 [i_2 - 2] [i_2 + 3] [i_2 - 3] [i_2 - 3]) < var_17));
                    arr_9 [i_0] [8] [i_2] = (arr_8 [5] [i_1] [i_2 - 3] [0]);
                    var_21 = var_8;
                }
            }
        }
        var_22 = ((+(((arr_5 [i_0] [i_0]) ? (arr_6 [i_0]) : var_13))));
    }
    var_23 = (min((!-var_13), (max(var_4, (max(var_18, var_17))))));
    var_24 = var_12;
    #pragma endscop
}
