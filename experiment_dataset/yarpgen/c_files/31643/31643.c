/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 -= (((4193946659 - 270950544) ? var_6 : (((!(((var_9 ? var_7 : (arr_2 [1])))))))));
                var_18 = -22;
            }
        }
    }
    var_19 -= -var_13;
    var_20 = 4024016752;
    #pragma endscop
}
