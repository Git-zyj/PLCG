/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_1, -var_1));
    var_11 = var_4;
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_6));
                var_14 = min((max((max(var_4, var_7)), ((max(var_0, var_2))))), (((max(var_4, var_5)))));
            }
        }
    }
    #pragma endscop
}
