/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -613988852;
    var_11 = var_4;
    var_12 = (min(var_12, (((-var_1 ? 1 : 4851494373259781142)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 *= (max(1, (!1)));
                    var_14 = (max(((-613988853 ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1]))), (-613988853 / 508378948)));
                }
            }
        }
    }
    #pragma endscop
}
