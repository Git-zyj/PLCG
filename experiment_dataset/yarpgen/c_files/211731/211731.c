/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = 5;
                arr_6 [i_0] [i_1] [i_1] = ((var_8 ? ((min(870729097, 870729097))) : (arr_3 [i_0 - 2])));
                arr_7 [i_1] = max(-var_10, var_7);
            }
        }
    }
    var_12 = var_2;
    #pragma endscop
}
