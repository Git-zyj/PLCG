/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (min((min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 + 1] [i_1 - 1]))), -7546));
                arr_5 [6] [i_1] [i_1 + 1] = var_10;
            }
        }
    }
    var_12 = -3273;
    var_13 = var_8;
    #pragma endscop
}
