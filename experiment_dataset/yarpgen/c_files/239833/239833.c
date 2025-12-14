/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((~(arr_0 [i_0 + 2] [i_0 + 2]))));
                var_22 = (min((((var_11 >= var_14) <= (~2237433496))), (((var_18 ? var_9 : (arr_5 [i_0] [i_0]))))));
                var_23 = (var_1 <= 34118);
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
