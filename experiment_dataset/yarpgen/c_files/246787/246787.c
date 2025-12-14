/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((-569569924 ? 12 : (((var_15 ? 30 : 4294967285)))));
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_3 [i_1] [i_0]);
                arr_6 [i_0] [i_1] [i_0] = (arr_4 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = max((max(((0 ? 254 : 15174880124259361720)), var_8)), (((196 ? 8967839166813089684 : 13))));
                var_19 = 196;
            }
        }
    }
    #pragma endscop
}
