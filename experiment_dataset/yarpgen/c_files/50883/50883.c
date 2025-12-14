/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((~var_17) ? (arr_6 [2] [6] [i_2]) : var_2))));
                    var_20 = 3401775806851524733;
                    var_21 = var_14;
                }
            }
        }
    }
    #pragma endscop
}
