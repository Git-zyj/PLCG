/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_16, var_8)) ^ var_17));
    var_21 = (((((var_8 ? var_15 : (min(var_12, var_3))))) ? ((((min(2039845310, var_7))) ? (min(1121982900, var_7)) : var_18)) : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (arr_4 [i_0] [i_1]);
                var_23 = (arr_5 [i_0]);
            }
        }
    }
    #pragma endscop
}
