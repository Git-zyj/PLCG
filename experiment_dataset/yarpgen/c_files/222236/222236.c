/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((((32760 ? 73 : 54))) ? var_4 : (arr_3 [i_0])));
                var_16 = var_0;
            }
        }
    }
    var_17 += (((var_13 / var_4) ? -74 : ((~(3004796602208660474 - 1006632960)))));
    #pragma endscop
}
