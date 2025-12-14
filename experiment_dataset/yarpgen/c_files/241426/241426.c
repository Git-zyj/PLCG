/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2147483647;
    var_13 *= (max(((max((var_9 || -30446), (-21847 && -12997)))), (((var_8 != -1) ? ((var_0 ? 1686329127 : var_9)) : var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = var_9;
                    var_15 *= (((max(((-(arr_0 [i_0] [i_2]))), var_2)) <= ((~(var_1 != -300302996)))));
                }
            }
        }
    }
    #pragma endscop
}
