/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_2 ? var_6 : ((min(var_11, 410586810)))));
    var_16 = (min(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((!((min(var_12, var_8)))));
                arr_5 [i_0] [i_0] [i_0] = ((arr_2 [i_1 - 1] [i_1 - 3]) * ((min((arr_2 [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 + 4] [i_1 + 4])))));
            }
        }
    }
    #pragma endscop
}
