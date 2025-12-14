/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((~(((1 & (arr_1 [i_1])))))))));
                arr_4 [1] [i_1] [i_1] = ((((((min(var_6, var_12))) ? (arr_2 [i_1 + 1]) : (!var_6))) << (((max(((-20 ? var_12 : (arr_2 [i_1]))), (~var_11))) - 80))));
            }
        }
    }
    var_17 = -var_1;
    #pragma endscop
}
