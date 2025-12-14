/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (-2147483647 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_0, (max(var_4, 1699683313))));
                var_18 = ((max(((var_7 ? var_11 : -122)), (((var_7 + 2147483647) << (((var_7 + 12865) - 12)))))));
            }
        }
    }
    #pragma endscop
}
