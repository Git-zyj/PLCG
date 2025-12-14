/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_9 + 2147483647) << (var_1 - 4196776891)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = max((arr_3 [i_1 + 2]), -var_6);
                var_12 = (max(((var_0 | (arr_5 [i_0 + 3] [i_1]))), (~28)));
            }
        }
    }
    #pragma endscop
}
