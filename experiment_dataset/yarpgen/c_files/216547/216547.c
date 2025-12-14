/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 + (((var_2 ? (max(1509210884900147252, var_8)) : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (var_1 != var_8);
                var_20 &= (arr_5 [i_0] [i_1]);
            }
        }
    }
    var_21 = var_4;
    var_22 = (min(var_22, ((max((min(((var_1 ? var_4 : -2049994858)), (max(17, var_13)))), (~var_11))))));
    var_23 *= 10069221755890363762;
    #pragma endscop
}
