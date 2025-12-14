/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (max(var_10, var_9));
                arr_5 [i_0] = var_2;
                var_11 |= var_2;
            }
        }
    }
    var_12 = ((var_0 ? (((((var_0 ? var_9 : var_3))) ? var_3 : (var_2 + var_9))) : ((((!var_9) | -7355846714123897724)))));
    #pragma endscop
}
