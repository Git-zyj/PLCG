/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (((((-1458197525 >= (max(var_9, var_13))))) + ((((((1 ? var_5 : var_11))) <= (3454485430 + -2111434952))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = var_5;
                var_17 += -var_1;
            }
        }
    }
    var_18 = ((-(((!(var_5 >= var_9))))));
    var_19 = var_0;
    #pragma endscop
}
