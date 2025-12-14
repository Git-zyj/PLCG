/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = var_6;
                    var_15 -= (max((((((arr_1 [i_0]) ? (arr_1 [i_1]) : 1)) / (min(-7382652233931905007, 1)))), ((var_8 ? (((((arr_3 [i_1] [i_0]) == (arr_0 [1]))))) : ((var_10 ? var_5 : 224))))));
                }
            }
        }
    }
    var_16 = (((~((min(var_3, var_2))))));
    var_17 = (min(var_17, (((var_14 ? (min(var_14, (1 + 48))) : (~12933))))));
    #pragma endscop
}
