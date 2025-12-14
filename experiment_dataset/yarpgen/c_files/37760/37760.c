/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((max((var_8 ^ 116), var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_17;
                arr_5 [i_0] [i_0] |= (min(36963, (arr_1 [i_0])));
            }
        }
    }
    var_20 = (var_11 + var_8);
    var_21 = max(((-var_11 ? (var_14 + -25) : var_5)), 36963);
    #pragma endscop
}
