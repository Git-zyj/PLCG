/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (max((arr_5 [i_1 + 1] [i_1 + 1]), 255));
                arr_6 [i_1 + 1] = (~var_8);
                var_15 = ((~(min((arr_2 [i_1 + 1] [i_1 + 1]), var_3))));
                var_16 = ((-(arr_1 [i_0])));
                arr_7 [i_1] = (~1346745126);
            }
        }
    }
    #pragma endscop
}
