/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 ^= ((var_9 ? 34030 : 11926865043759371801));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (arr_3 [6]);
                var_17 = (min(var_17, ((((arr_1 [i_0 + 1]) ? ((var_8 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : ((var_8 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))))));
            }
        }
    }
    #pragma endscop
}
