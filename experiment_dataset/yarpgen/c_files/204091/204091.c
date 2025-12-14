/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((var_2 ? ((var_10 ? var_12 : var_3)) : (max(((var_16 ? var_10 : var_12)), ((min(var_10, var_6)))))));
                var_21 = (max(var_21, ((max((max(var_16, var_18)), (min(var_3, ((var_2 ? var_12 : var_2)))))))));
                var_22 += (max(((min(var_15, var_10))), var_17));
            }
        }
    }
    #pragma endscop
}
