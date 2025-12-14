/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min((((var_13 ? var_0 : var_0))), ((var_6 ? var_10 : var_11)))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((!((min(var_5, var_1)))));
                arr_7 [i_1] [i_0] = var_13;
            }
        }
    }
    #pragma endscop
}
