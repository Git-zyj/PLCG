/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    var_20 = ((1340604274 ? var_8 : ((var_9 ? var_14 : var_10))));
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = arr_0 [i_1];
                arr_4 [i_0] [i_1] [i_1] = var_15;
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
