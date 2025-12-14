/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] [i_0] [i_0] = (821774921554653936 ? var_16 : 20);
                var_17 = (~(arr_0 [i_0 - 2] [i_0]));
            }
        }
    }
    var_18 = max(-var_5, var_13);
    var_19 -= (-821774921554653936 ? var_10 : (min(2579068184261128259, 17624969152154897705)));
    #pragma endscop
}
