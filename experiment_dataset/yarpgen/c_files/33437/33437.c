/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_5, (!var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1 + 1] = var_2;
                arr_9 [i_0] [i_0] = ((-((var_11 ? ((var_7 ? var_10 : var_10)) : var_14))));
                var_20 = var_13;
                arr_10 [i_0] = ((var_12 ? (max(var_12, var_2)) : ((max(var_8, var_3)))));
            }
        }
    }
    #pragma endscop
}
