/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_9;
    var_14 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (!-14);
                var_16 = (((-(arr_2 [i_0 + 4] [i_1 + 2] [i_1]))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
