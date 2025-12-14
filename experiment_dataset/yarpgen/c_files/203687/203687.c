/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max((!0), (((16777215 * 1) - 1))));
                    var_17 = (min(((max(((var_1 ? var_15 : (arr_5 [1] [i_2]))), 120))), (min(1477358641, 4294967287))));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
