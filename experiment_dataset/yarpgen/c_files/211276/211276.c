/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((~((-21868 ? 120 : 1))));
                arr_5 [5] [i_1] = ((min((arr_2 [15]), (!var_11))));
            }
        }
    }
    #pragma endscop
}
