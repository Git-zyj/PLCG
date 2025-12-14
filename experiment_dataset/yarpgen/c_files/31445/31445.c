/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -19447;
    var_20 = (max(((var_3 ? 4762 : -26820)), (((((1 ? var_11 : var_2))) ? ((1 ? var_5 : var_15)) : ((min(var_7, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 *= 24931;
                var_22 = ((max(((45861 ? (arr_1 [i_0] [i_1]) : (arr_4 [4] [i_1] [i_1]))), ((min(4095, (arr_3 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
