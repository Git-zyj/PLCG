/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((~-126) ? var_1 : (min(var_4, (232 / 233))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((((~231) | 254))) ? (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_1]) : var_2)) : (((~(arr_0 [i_0] [i_0])))))))));
                var_14 = 1;
            }
        }
    }
    var_15 = (~var_9);
    #pragma endscop
}
