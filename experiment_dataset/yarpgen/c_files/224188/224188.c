/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = ((var_10 ? var_1 : 2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((-((((!6033913033258181968) >= (var_6 || 11))))));
                var_18 = (min((max(((~(arr_3 [1] [i_0 - 1] [14]))), (((59942 ? var_6 : var_6))))), ((min(225, 1)))));
            }
        }
    }
    #pragma endscop
}
