/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_5 || var_6);
    var_18 = (177 && var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 |= var_2;
                var_20 = (min(var_20, var_0));
                arr_5 [i_1 - 1] = (~549621596160);
            }
        }
    }
    #pragma endscop
}
