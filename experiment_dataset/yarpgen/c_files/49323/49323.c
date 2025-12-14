/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((max(1615035256, (((arr_2 [i_0]) - -126))))) ? (min(56, -56)) : ((((arr_2 [i_0]) && var_9)))));
                var_15 = (max(((((arr_4 [i_1] [9] [i_0]) || 1))), (((((200 >> (((arr_3 [i_0]) + 35))))) ? ((var_7 ? var_4 : 116)) : (((-5052426945566824211 || (arr_2 [i_0]))))))));
                var_16 = arr_4 [i_0] [i_0] [i_1];
            }
        }
    }
    var_17 = ((max((min(127, var_9), var_9))));
    #pragma endscop
}
