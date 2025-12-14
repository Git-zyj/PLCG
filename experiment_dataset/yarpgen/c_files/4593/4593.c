/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(-321171315, var_12))) ? var_11 : -35))) ? 0 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(var_2, (arr_2 [i_0] [6] [i_1 + 1])));
                var_15 = var_0;
            }
        }
    }
    #pragma endscop
}
