/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((11891 >= 523776) ? var_6 : (var_15 == var_0)));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (~(!2923062761));
                var_21 = 0;
                var_22 *= max((((max(var_13, var_13)))), (2305843004918726656 * 18446744073709551615));
            }
        }
    }
    #pragma endscop
}
