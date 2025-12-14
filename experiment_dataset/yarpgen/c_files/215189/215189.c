/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 += (arr_7 [6] [1] [14]);
                    var_19 = var_17;
                }
            }
        }
    }
    var_20 = ((((min(((0 ? -686463014606869669 : 156)), 11282))) ? (((((var_9 ? var_15 : var_7))) ? (var_11 | var_11) : 28)) : var_6));
    #pragma endscop
}
