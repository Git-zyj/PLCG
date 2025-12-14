/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (106 - 103)));
                arr_8 [i_1] [i_1] = var_9;
            }
        }
    }
    var_10 = var_9;
    var_11 = ((((var_3 ? ((var_9 ? var_1 : var_5)) : var_1)) >= (max((1027481319 * 7), ((var_4 ? var_7 : var_3))))));
    #pragma endscop
}
