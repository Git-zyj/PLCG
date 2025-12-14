/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (((arr_5 [i_1] [i_1]) && (arr_5 [i_0 - 1] [i_1])));
                    arr_7 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
                }
            }
        }
    }
    var_17 = var_3;
    var_18 ^= ((-(max(var_9, (var_4 && var_11)))));
    #pragma endscop
}
