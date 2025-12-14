/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 -= 10699;
                var_12 -= (((var_8 ? 10699 : var_9)) - (((min(59, 222)))));
                var_13 = ((!((((var_6 ? var_7 : var_9)) > var_8))));
            }
        }
    }
    #pragma endscop
}
