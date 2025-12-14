/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = -5431246982471543409;
                    arr_9 [i_0] [i_0 + 2] = (var_3 && 1124589251);
                }
            }
        }
    }
    var_11 = var_2;
    #pragma endscop
}
