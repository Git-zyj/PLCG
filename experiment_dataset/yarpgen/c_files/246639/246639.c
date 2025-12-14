/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 / (var_6 & var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((-(arr_0 [i_0])) / var_2)))))));
                var_12 = (max(var_2, ((var_3 ? (~var_1) : (~var_1)))));
            }
        }
    }
    var_13 = var_1;
    #pragma endscop
}
