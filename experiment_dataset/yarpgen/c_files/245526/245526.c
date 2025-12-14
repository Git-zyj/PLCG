/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((64 ^ 288230376151711743) >= (~var_12)))) > 3968));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) + var_13));
        var_19 = (max(var_19, var_7));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {
                var_20 -= (max(288230376151711736, var_6));
                arr_7 [i_2] [i_2] = (max((((arr_4 [i_2 + 1] [i_2 + 3]) ? var_8 : (arr_4 [i_2 - 1] [i_2 - 1]))), ((((arr_4 [i_2 - 1] [i_2]) == (arr_4 [i_2 - 1] [i_2]))))));
            }
        }
    }
    #pragma endscop
}
