/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_1) ? var_9 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min((((arr_4 [i_1 - 1]) + var_5)), (((arr_4 [i_1 + 1]) ? var_2 : var_6))));
                var_12 = arr_3 [12];
            }
        }
    }
    var_13 = var_5;
    var_14 = var_0;
    #pragma endscop
}
