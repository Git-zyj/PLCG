/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((~(max((((76 ? -4 : var_3))), ((var_4 ? var_5 : -1587020653)))))))));
                    arr_7 [i_1] [i_1] [i_2] [i_1] = (((arr_2 [i_2] [i_1] [i_0]) ? (max((arr_5 [i_0] [i_1] [i_1] [i_2]), 3)) : ((var_0 & (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_15 *= (min((((((1761157570 ? var_11 : var_11))) ? (arr_5 [i_0] [i_1] [i_1] [i_2 - 1]) : (var_9 * var_7))), 29178));
                    var_16 = (max(var_16, (5568219850609300404 == 1026)));
                    arr_8 [i_2 - 1] [i_1] [i_2 - 1] [i_0] = (max((max((arr_3 [9] [i_1] [i_2]), 12878524223100251203)), (arr_4 [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_17 = max(var_9, var_0);
    #pragma endscop
}
