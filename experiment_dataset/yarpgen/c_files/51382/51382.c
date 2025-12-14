/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((var_5 ? ((max(var_1, var_8))) : var_17));
                arr_7 [i_0 + 1] = ((13864677519487361759 ? (-2147483647 - 1) : 1933527618993333205));
            }
        }
    }
    var_20 = ((var_10 != (((var_1 / var_9) ^ var_18))));
    var_21 = var_5;
    var_22 = var_0;
    #pragma endscop
}
