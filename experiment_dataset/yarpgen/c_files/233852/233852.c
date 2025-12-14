/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_9, ((var_10 ? var_1 : (~var_11)))));
    var_19 = ((!(var_4 && var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((-var_4 << (2147483647 == 2147483647)));
                var_20 += ((var_16 > (((var_14 | ((var_14 ? var_0 : var_9)))))));
            }
        }
    }
    var_21 += (max(var_0, ((~(min(var_7, var_14))))));
    #pragma endscop
}
