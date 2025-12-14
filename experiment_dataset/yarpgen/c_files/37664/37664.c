/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 50906;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = var_7;
                var_17 = ((min((arr_2 [i_0] [i_0]), ((var_10 >> (((arr_0 [i_0]) + 281001893712612038)))))));
            }
        }
    }
    #pragma endscop
}
