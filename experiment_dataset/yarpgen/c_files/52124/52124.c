/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_5, (max(((var_6 ? var_4 : var_11)), ((min(var_1, -3818))))));
    var_14 = (max(var_14, var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = arr_1 [7];
                var_15 = -var_12;
            }
        }
    }
    #pragma endscop
}
