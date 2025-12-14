/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_9 >= var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (max(var_7, var_13))));
                    var_22 = -125;
                }
            }
        }
    }
    #pragma endscop
}
