/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 ^= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = var_16;
                    var_23 = (arr_1 [3]);
                    arr_8 [i_2] [i_1] [i_0] &= ((52 ? (((arr_6 [i_0] [i_1 - 1] [i_2 + 1]) - (arr_6 [4] [i_1 - 2] [i_2 - 2]))) : ((min(var_12, 57)))));
                }
            }
        }
    }
    var_24 = var_9;
    var_25 = var_0;
    #pragma endscop
}
