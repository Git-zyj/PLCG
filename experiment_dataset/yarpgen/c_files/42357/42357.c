/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((((var_5 ? var_15 : var_9)) ? ((min(var_10, var_10))) : var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (min((((((min((arr_6 [i_2] [i_1] [i_0] [i_0]), 16111127951347569654))) ? 16111127951347569658 : (~var_14)))), (arr_8 [i_2] [17] [i_2] [7])));
                    var_18 = (((((~(arr_0 [i_0] [17])))) ? ((var_9 ? var_6 : ((1 ? var_2 : var_7)))) : var_15));
                    var_19 ^= (!-109);
                }
            }
        }
    }
    #pragma endscop
}
