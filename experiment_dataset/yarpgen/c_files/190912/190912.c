/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_9;
    var_16 *= ((min(2211124847, -var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 -= ((((min((((!(arr_0 [i_0] [i_1])))), var_7))) ? ((((max((arr_2 [i_0] [i_1]), 967425527))))) : 967425527));
                var_18 = ((min(var_6, ((((arr_0 [i_0] [i_1]) != 4))))));
            }
        }
    }
    #pragma endscop
}
