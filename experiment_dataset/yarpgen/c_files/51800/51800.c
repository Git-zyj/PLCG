/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_11, (((((max(-3433, var_0))) && (((var_4 ? -2346050962536870804 : var_4))))))));
    var_18 = var_11;
    var_19 = (var_7 | var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = var_9;
                var_21 = min(-21, (~-1));
                var_22 -= var_8;
            }
        }
    }
    #pragma endscop
}
