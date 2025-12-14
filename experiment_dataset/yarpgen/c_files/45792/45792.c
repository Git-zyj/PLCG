/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-1979454140 ? -1979454171 : var_1))) ? var_7 : var_0));
    var_21 &= 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (!-1979454140);
                var_23 = (((1979454133 ? var_13 : (min(5796892212638602116, var_15)))));
            }
        }
    }
    #pragma endscop
}
