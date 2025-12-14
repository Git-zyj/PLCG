/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? var_8 : var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = -1;
                    var_16 = (((min((arr_0 [i_1 + 2] [i_2 + 1]), (arr_0 [i_1 + 1] [i_2 - 1]))) - 17229651927948160023));
                }
            }
        }
    }
    #pragma endscop
}
