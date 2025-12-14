/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (max(((min(var_13, (~76)))), ((((var_13 ? var_11 : var_12)) & var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [3] = (arr_5 [14] [i_0] [i_1]);
                var_16 = var_7;
                arr_7 [i_0] [i_1 - 1] = var_3;
            }
        }
    }
    #pragma endscop
}
