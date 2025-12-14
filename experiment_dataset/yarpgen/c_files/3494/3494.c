/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((var_7 * var_3) != (max(var_6, var_5))))), (max(var_6, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [9] [i_0] = (max(var_3, ((var_0 << (((var_1 != var_5) - 1))))));
                var_16 = (((var_6 || (var_7 || var_11))));
            }
        }
    }
    var_17 = var_9;
    var_18 = (max(((var_5 / (((min(var_2, var_4)))))), ((max(var_8, var_6)))));
    #pragma endscop
}
