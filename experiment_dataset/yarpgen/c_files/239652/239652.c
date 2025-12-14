/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = ((min((((25236 ? 3199 : 237))), var_2)));
                var_13 += (min((arr_3 [i_1 - 2]), (max(34, var_0))));
            }
        }
    }
    var_14 = ((-15 ? 1 : 78));
    #pragma endscop
}
