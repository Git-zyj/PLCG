/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((1 && var_10) * (max(((268435328 ? 13 : 33)), -var_2))));
    var_14 = var_0;
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 -= ((3338695600 ? 1 : 672061740));
                    var_17 = (max(((((4026531980 + 63488) * ((((arr_9 [i_0] [i_1] [i_0]) ? 0 : 52879)))))), (((((4026531980 ? 4026531968 : 2032))) * (max(-2029385432, (-9223372036854775807 - 1)))))));
                }
            }
        }
    }
    #pragma endscop
}
