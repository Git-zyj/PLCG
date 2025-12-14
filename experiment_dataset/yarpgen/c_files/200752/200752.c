/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(-3777051437, (min((arr_5 [i_0 + 4] [i_0] [10]), 3777051437))));
                var_20 &= (-1 * 0);
                var_21 = var_6;
            }
        }
    }
    var_22 = (((((var_5 && var_5) || (((var_15 ? var_5 : var_15))))) ? (~var_7) : 445398013));
    var_23 = (((((var_2 && 26348) ? ((-3 ? var_9 : 1)) : var_11)) ^ (((var_16 <= (1 * 0))))));
    #pragma endscop
}
