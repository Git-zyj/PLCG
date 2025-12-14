/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 *= min(((((arr_4 [i_1 - 2]) ? (arr_7 [i_1 - 2] [i_1 - 2] [0]) : var_8))), (max((arr_4 [i_1 - 3]), (arr_4 [i_1 + 1]))));
                    var_21 = (~0);
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
