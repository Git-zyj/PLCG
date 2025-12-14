/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((0 & ((-(16 / var_7)))));
    var_17 = (min(((-(min(var_10, var_9)))), var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1 + 3] [i_2] = var_2;
                    arr_12 [i_2] = (!(!1));
                }
            }
        }
    }
    var_18 = (min(var_0, (min(-var_12, (max(var_14, var_11))))));
    #pragma endscop
}
