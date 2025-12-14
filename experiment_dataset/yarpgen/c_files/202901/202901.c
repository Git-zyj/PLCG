/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 -= (arr_2 [i_0] [i_1] [i_1]);
                var_13 = (max(var_13, ((((min(216, 20917))) ? (min(-3165759054451352716, (arr_3 [i_1] [i_0 + 1]))) : (3165759054451352716 * 15280985019258198899)))));
                var_14 = (!9241);
            }
        }
    }
    var_15 = ((-((var_10 ? (var_9 | 14306149604827794851) : var_8))));
    #pragma endscop
}
