/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 64497;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((min(((((arr_8 [i_1]) - ((62 ? (arr_2 [i_1] [10]) : var_12))))), ((~(arr_7 [i_0] [i_1]))))))));
                    arr_10 [i_0] [19] [24] = var_0;
                }
            }
        }
    }
    var_15 |= (2841445712563336036 - -2841445712563336051);
    #pragma endscop
}
