/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((!(((((max(0, 97))) ? var_2 : ((var_6 ? var_10 : var_2)))))));
                var_12 = (((max(var_4, var_4))));
            }
        }
    }
    var_13 ^= var_8;
    var_14 = (min(var_14, var_9));
    var_15 = (min(var_15, ((min((!var_3), var_5)))));
    #pragma endscop
}
