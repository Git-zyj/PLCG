/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = 1;
                var_21 &= var_2;
                var_22 = (!var_11);
            }
        }
    }
    var_23 += (((var_3 ? var_11 : ((var_19 ? 1 : var_7)))));
    var_24 = (var_14 | var_11);
    var_25 = (((min(-1, var_11)) / var_3));
    #pragma endscop
}
