/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [0] [i_1 - 2] [9] |= (arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1]);
                arr_7 [i_0] [7] = (((-111 ? 103 : 173)));
            }
        }
    }
    var_15 = (!-var_3);
    #pragma endscop
}
