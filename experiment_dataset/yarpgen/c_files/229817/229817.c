/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-3 & var_9) ? var_8 : var_3)) - (var_10 != var_10)));
    var_12 = var_7;
    var_13 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (--63693)));
                var_15 = var_1;
            }
        }
    }
    #pragma endscop
}
