/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(((~(0 & var_11))), ((((var_1 ? var_6 : var_1)) ^ 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 |= var_5;
                var_17 = 1;
                var_18 = (min((max(-1, ((min(0, var_3))))), 1));
            }
        }
    }
    var_19 = (min(var_4, ((((max(var_5, 1))) | ((min(1, 1)))))));
    #pragma endscop
}
