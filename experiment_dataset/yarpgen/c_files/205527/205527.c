/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? var_3 : (!27859)));
    var_13 = (max((((3692936369 ? (min(892852288, 3097074364)) : var_5))), (max(var_3, 2673871480613312270))));
    var_14 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [1] &= ((var_2 ? ((((max(var_2, var_0))) ? (((arr_5 [i_0] [i_1] [i_1] [21]) ? var_11 : var_9)) : (!var_0))) : -127));
                    var_15 = var_5;
                }
            }
        }
    }
    var_16 &= var_7;
    #pragma endscop
}
