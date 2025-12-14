/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(16178, (59541 & var_9)));
                var_13 = (min(11329, 349861563));
                arr_6 [i_1] [i_0] = ((max(11329, 6378001663209927458)));
                arr_7 [i_0] = (max((((var_9 == (arr_2 [i_0])))), ((693343137 << (60675 - 60662)))));
                var_14 ^= (min((arr_4 [i_0] [1] [i_0 - 1]), (((2147479552 != (arr_3 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
