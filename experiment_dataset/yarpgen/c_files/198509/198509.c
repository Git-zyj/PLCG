/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min(var_4, var_0))), (~7)));
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((-7 ? ((-25 ? -8 : -15)) : -4)))));
                var_16 = (3968263987 * -21);
                arr_6 [1] [i_0] [i_0] = ((max((max(var_11, 75)), -22)));
            }
        }
    }
    #pragma endscop
}
