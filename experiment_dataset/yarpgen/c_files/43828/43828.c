/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 42;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = var_12;
        var_16 = (min((min(512, (var_12 - var_9))), (max(var_10, var_12))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                var_17 = ((((max(var_5, var_8))) ? var_8 : var_7));
                var_18 = (max(var_18, (((((min(var_13, var_4))) ? var_5 : (((max(var_10, var_13)))))))));
            }
        }
    }
    #pragma endscop
}
