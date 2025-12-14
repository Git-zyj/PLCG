/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = var_11;
                var_14 = ((!((max((!8064), 8048)))));
            }
        }
    }
    var_15 = (~1164632290);
    var_16 = (((((var_0 ^ (min(var_3, var_10))))) ? ((-1 ? var_5 : var_5)) : var_0));
    #pragma endscop
}
