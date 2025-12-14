/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 |= (((arr_5 [i_1] [i_2 - 1] [i_2] [i_1]) ? 0 : (-127 - 1)));
                    var_18 -= (((~-29) ? ((min(-48, 111))) : ((max((arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1]), var_5)))));
                }
            }
        }
    }
    #pragma endscop
}
