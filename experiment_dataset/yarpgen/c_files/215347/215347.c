/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = -30609;
                    arr_12 [i_0] [i_0] [i_2] [i_2] = 36171;
                    var_22 = (min(var_22, (arr_10 [i_1] [i_2])));
                }
            }
        }
    }
    var_23 ^= (((((((var_1 ? 30612 : var_7)) < ((var_2 ? 0 : var_15)))))));
    #pragma endscop
}
