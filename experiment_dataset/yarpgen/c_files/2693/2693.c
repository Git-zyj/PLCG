/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((((((12984900872261178760 ? 11279 : var_1)) + var_3))) ? (min(6292, var_6)) : ((min(-12109, 1093510647514493440))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = 15505;
                    arr_9 [i_0] [10] [i_2 - 2] &= var_12;
                }
            }
        }
    }
    #pragma endscop
}
