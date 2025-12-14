/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_0 ? (((max(191, 63)))) : (max((var_9 > var_15), (min(var_15, var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] |= ((((max((((arr_3 [1]) << (var_7 - 1532808695))), (arr_4 [i_2])))) < (min(-1433007956108284790, 191))));
                    var_18 = var_13;
                }
            }
        }
    }
    var_19 = (max((((var_10 - var_8) + (max(var_13, var_16)))), var_11));
    #pragma endscop
}
