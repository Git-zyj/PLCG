/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2351312664458609293;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (((24 || 1686873563577296701) <= (max(3191516905673540336, (arr_0 [i_0])))));
                var_16 = 3191516905673540334;
            }
        }
    }
    #pragma endscop
}
