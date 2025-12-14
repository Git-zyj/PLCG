/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (min(var_15, ((((min(var_1, (~1240461549))) | (~var_8))))));
        arr_2 [10] = ((1 ? (1 & var_7) : (~1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [20] [7] [i_0] = (!((max((~1), ((var_10 ? 1 : 867900148))))));
                    arr_9 [i_0] [i_0] [1] [1] = var_4;
                    var_16 = ((((min(-70, -11571))) & ((~(arr_5 [i_0] [i_1])))));
                }
            }
        }
        arr_10 [i_0] = ((~(max((~1), ((max(1, 1)))))));
    }
    #pragma endscop
}
