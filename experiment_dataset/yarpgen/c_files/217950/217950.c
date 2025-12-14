/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_2, ((var_4 ? 56 : var_0))))) ? var_12 : (min((min(var_10, 52)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((205 ? -1225130530 : 50));
                var_15 |= ((min((var_3 - var_10), var_8)));
            }
        }
    }
    var_16 -= (min(var_8, (!var_6)));
    #pragma endscop
}
