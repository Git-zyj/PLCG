/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((((var_0 ? var_2 : var_2))), var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_14 ^= (((max((!1), (!var_6))) ? 1 : (((~((7987811758445360765 ? -51 : 10855)))))));
                var_15 = ((~(!var_8)));
            }
        }
    }
    #pragma endscop
}
