/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = 90;
                arr_6 [i_0] = ((2119974764 < ((8969 ? ((var_12 ? 2147483647 : -8969)) : ((0 ? var_9 : -287997633))))));
            }
        }
    }
    var_16 = (~-8969);
    #pragma endscop
}
