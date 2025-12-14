/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (!(((var_2 & ((-8002447110995845606 ? -3236165016187808708 : var_6))))));
    var_11 = ((~((var_7 ? var_6 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (((arr_1 [i_0] [6]) != (((min((arr_2 [i_1]), (!var_6)))))));
                var_13 -= (((arr_4 [i_1]) && ((!(((var_6 ? 222 : var_6)))))));
                var_14 -= (((var_2 - var_4) + -var_8));
            }
        }
    }
    #pragma endscop
}
