/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((arr_4 [i_1 + 3] [i_1 + 1]) ? ((+((1 ? (arr_5 [i_1 - 2]) : 1)))) : (((!((min(var_11, var_11)))))));
                var_16 = 1;
                var_17 = var_4;
            }
        }
    }
    #pragma endscop
}
