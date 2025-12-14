/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (max(5239917407439853077, 14741));
                    arr_9 [i_1] = (-((-(arr_3 [i_1]))));
                }
            }
        }
    }
    var_19 = ((min(var_13, var_11)));
    var_20 = var_7;
    #pragma endscop
}
