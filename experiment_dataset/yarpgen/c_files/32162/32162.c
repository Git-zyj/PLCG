/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((15698756128509893895 ? 2747987945199657738 : -382510173));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [11] = var_8;
                var_15 = (((((var_3 ? 48 : 1674617791))) ? (min((var_10 | var_3), (244 >= 2747987945199657751))) : ((min((((2622 ? var_13 : var_6))), var_10)))));
            }
        }
    }
    #pragma endscop
}
