/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 || ((min(529666314, -21467)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = var_0;
                    var_16 = var_7;
                }
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
