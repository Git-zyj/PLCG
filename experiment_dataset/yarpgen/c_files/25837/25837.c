/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = ((var_8 ? (((var_5 - var_13) ? -var_8 : (max(65532, var_15)))) : (((var_1 ? var_16 : var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] |= (~var_11);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2 - 1] [i_2 - 1] = (((arr_5 [8] [i_2 - 1] [i_2 - 1] [i_2]) ? var_6 : 0));
                    var_21 = (min(var_21, (arr_0 [i_0])));
                    arr_10 [13] [i_1] [i_1] [i_0] |= var_3;
                }
            }
        }
        arr_11 [i_0] = (var_14 + 65532);
        arr_12 [i_0] = (arr_3 [i_0] [i_0]);
        var_22 |= var_16;
    }
    #pragma endscop
}
