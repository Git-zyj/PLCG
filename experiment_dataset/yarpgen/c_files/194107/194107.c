/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((!var_9), (max((5504999894687374548 != 536870911), var_9))));
    var_11 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_12 *= (((min(var_6, (arr_0 [i_0]))) * (arr_0 [i_0])));
                var_13 *= (min(var_0, (12 > var_5)));
            }
        }
    }
    #pragma endscop
}
