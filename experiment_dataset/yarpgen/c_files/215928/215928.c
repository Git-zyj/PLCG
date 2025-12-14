/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 - var_11);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 = (((min(-25, (~2587754640)))) ? (min((var_15 ^ var_3), (arr_4 [i_2 + 3] [i_2 + 1] [i_2]))) : ((~((3 ? 6694611348291284290 : var_12)))));
                    arr_10 [i_0] [i_0] [i_0] = -33;
                    var_18 = (-((-(max(0, (arr_6 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
